
//This file is for functions for clearing the screen and storing the state of the screen

#include "screenState.h"
#include "aliens.h"
#include <stdlib.h>
#include "scoreBoard.h"

#define TANK_Y 200
#define TANK_START_POS 160
#define BUNKER_HEIGHT 150
#define BUNKER_SPACE 75
#define BUNKER_OFFSET 30
#define BULLET_OFF_SCREEN 0
#define BULLET_OFFSET 55
#define GROUND_Y 450
#define GROUND_START_X 50
#define GROUND_STOP_X 640 - 50
#define ALIEN_BULLET_STOP 230

static uint32_t screenState_swarmX = 0;
static uint32_t screenState_swarmY = 0;
static uint8_t screenState_swarmArray[55];
static uint8_t goneDown = 0;
static uint32_t tankPos = TANK_START_POS;
static uint32_t bullets[5][2];
static uint8_t bunkers[4][10];
static unsigned int * framePointer_g;
uint8_t bulletTypes[5];

static void drawGround(){
	uint32_t row = GROUND_Y;
	uint32_t col = GROUND_START_X;
	for( ; col < GROUND_STOP_X; col++){
		screenState_getFramePointer()[(row) * 640 + (col)] = GREEN; // Green
	}
}

void screenState_init(){
	uint16_t row, col, i;
	for (row = 0; row < 480; row++) {
		for (col = 0; col < 640; col++) {
			screenState_getFramePointer()[row * 640 + col] = 0x000000000; // Black
		}
	}
	for(i = 0; i < 55; i++) {
		screenState_swarmArray[i] = 1;
	}
	screenState_setSwarmX(72);
	screenState_setSwarmY(20);

	bulletTypes[0] = 3;
	for(i = 1; i < 5; i++) {
		bulletTypes[i] = rand()%2;
	}

	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);
	for(i = 0; i < 4; i++) {
		aliens_drawObject((i * BUNKER_SPACE) + BUNKER_OFFSET, BUNKER_HEIGHT, bunker, GREEN);
		uint8_t j;
		for(j = 0; j < 10; j++) {
			bunkers[i][j] = 4;
		}
	}
	screenState_moveTankLeft();
	for(i = 0; i < 5; i++) {
		bullets[i][0] = 0;
		bullets[i][1] = 0;
	}
	scoreBoard_drawScoreBoard();
	drawGround();
	srand(5);
}


void screenState_setFramePointer(unsigned int * framePointer){

	framePointer_g = framePointer;

}

unsigned int * screenState_getFramePointer(){
	return framePointer_g;
}

void screenState_setSwarmX(uint32_t swarmX){
	screenState_swarmX = swarmX;
}

uint32_t screenState_getSwarmX(){
	return screenState_swarmX;
}

void screenState_setSwarmY(uint32_t swarmY){
	screenState_swarmY = swarmY;
}

uint32_t screenState_getSwarmY(){
	return screenState_swarmY;
}

void screenState_moveSwarm() {
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), BLACK);
	if((screenState_getSwarmX() == 144 || screenState_getSwarmX() == 0) && !goneDown) {
		screenState_setSwarmY(screenState_getSwarmY() + 3);
		aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);
		goneDown = 1;
		return;
	}
	if(screenState_swarmY %2) {
		screenState_setSwarmX(screenState_getSwarmX() + 3);
	} else {
		screenState_setSwarmX(screenState_getSwarmX() - 3);
	}
	goneDown = 0;
	//screenState_setSwarmY(screenState_getSwarmY() + 1);
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);
}

uint8_t * screenState_getSwarmArray() {
	return screenState_swarmArray;
}

void screenState_moveTankRight(){
	if(tankPos >= 305 ){
		return;
	}

	aliens_drawObject(tankPos, TANK_Y, tank, BLACK);
	tankPos++;
	aliens_drawObject(tankPos, TANK_Y, tank, GREEN);

}

void screenState_moveTankLeft(){
	if(tankPos <= 0){
		return;
	}
	aliens_drawObject(tankPos, TANK_Y, tank, BLACK);
	tankPos--;
	aliens_drawObject(tankPos, TANK_Y, tank, GREEN);
}

void screenState_killAlien(uint8_t alienToKill){
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), BLACK);
	screenState_swarmArray[alienToKill] = 0;
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);

}
void drawBullets(uint32_t color) {
	uint8_t i;
	for(i = 0; i < 5; i++) {
		if(bullets[i][1]) {
			switch (bulletTypes[i]){
			case 0:
				aliens_drawObject(bullets[i][0], bullets[i][1], alien_bullet_0, color);
				break;
			case 1:
				aliens_drawObject(bullets[i][0], bullets[i][1], alien_bullet_1, color);
				break;
			case 3:
				aliens_drawObject(bullets[i][0], bullets[i][1], tank_bullet, color);
				break;
			default:
				break;
			}
		}
	}
}

void screenState_alienFire() {
	uint8_t i;
	for(i = 1; i < 5; i++) {
		if(!bullets[i][1]) {
			bullets[i][0] = screenState_getSwarmX() + (rand() % 11) * 16 + 5;
			bullets[i][1] = screenState_getSwarmY() + BULLET_OFFSET;
			drawBullets(WHITE);
			return;
		}
	}
}

void screenState_tankFire() {
	if(!bullets[0][1]) {
		bullets[0][0] = tankPos + 4;
		bullets[0][1] = TANK_Y - 6;
		drawBullets(WHITE);
	}
}

void screenState_updateBullets() {
	drawBullets(BLACK);
	uint8_t i;
	if(bullets[0][1]) {
		if(bullets[0][1] > 20){
			bullets[0][1] -= 3;
		} else{
			bullets[0][1] = 0;
		}
	}
	for(i = 1; i < 5; i++) {
		if(bullets[i][1] && (bullets[i][1] < ALIEN_BULLET_STOP)) {
			bullets[i][1] += 3;
		} else {
			bullets[i][0] = 0;
			bullets[i][1] = 0;
		}
	}
	drawBullets(WHITE);
}

void erodeChunk(uint8_t chunk, uint8_t state, uint8_t bunker) {
	uint32_t chunkX = (bunker * BUNKER_SPACE) + BUNKER_OFFSET + (6 * (chunk % 4));
	if(chunk == 9) {
		chunkX += 12;
	}
	uint32_t chunkY = BUNKER_HEIGHT + (6 * (chunk / 4));
	switch (state) {
	case 4:
		aliens_drawObject(chunkX, chunkY, bunker_damage3, BLACK);
		aliens_drawObject(chunkX, chunkY, bunker_damage2, GREEN);
		break;
	case 3:
		aliens_drawObject(chunkX, chunkY, bunker_damage2, BLACK);
		aliens_drawObject(chunkX, chunkY, bunker_damage1, GREEN);
		break;
	case 2:
		aliens_drawObject(chunkX, chunkY, bunker_damage1, BLACK);
		aliens_drawObject(chunkX, chunkY, bunker_damage0, GREEN);
		break;
	case 1:
		aliens_drawObject(chunkX, chunkY, bunker_damage0, BLACK);
		break;
	default:
		break;
	}
}

void screenState_erodeBunker(uint8_t bunker) {
	uint8_t i;
	for(i = 0; i < 10; i++) {
		uint8_t state = bunkers[bunker][i];
		if(state) {
			erodeChunk(i, state, bunker);
			bunkers[bunker][i]--;
			return;
		}
	}
}





