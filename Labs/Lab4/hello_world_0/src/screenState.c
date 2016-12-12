
//This file is for functions for clearing the screen and storing the state of the screen

#include "screenState.h"
#include "aliens.h"
#include <stdlib.h>
#include "scoreBoard.h"
#include <stdio.h>

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
#define ALIEN_BULLET_STOP 215
#define SWARM_TICKS_TO_MOVE 50
#define SAUCER_MOVING_RIGHT 1
#define SAUCER_MOVING_LEFT 2
#define SAUCER_HEIGHT 20
#define SAUCER_WIDTH 16
#define SWITCH_DIE_TYPE 5
#define DONE_DYING 5


#define SHOOT_BUTTON_MASK 0x10//Mask for inc button
#define RIGHT_BUTTON_BIT 0x02//Value of the seconds bit
#define LEFT_BUTTON_BIT 0x08//Value of the hours bit

static int32_t screenState_swarmX = 0;
static int32_t screenState_swarmY = 0;
static int8_t screenState_swarmArray[55];
static int8_t goneDown = 0;
static int32_t tankPos = TANK_START_POS;
static int32_t bullets[5][2];
static int8_t bunkers[4][10];
static unsigned int * framePointer_g;
static int8_t onEdge;
static int8_t saucerMoving = 0;
static int16_t saucerPos = 0;
static int16_t saucerOldPos = 0;
static int8_t tankDying = 0;
static int8_t numLives = 2;

int8_t bulletTypes[5];

static void drawGround(){
	int32_t row = GROUND_Y;
	int32_t col = GROUND_START_X;
	for( ; col < GROUND_STOP_X; col++){
		screenState_getFramePointer()[(row) * 640 + (col)] = GREEN; // Green
	}
}

int8_t screenState_isOnEdge(){
	return onEdge;
}

void screenState_init(){
	int16_t row, col, i;
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

	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);
	for(i = 0; i < 4; i++) {
		aliens_drawObject((i * BUNKER_SPACE) + BUNKER_OFFSET, BUNKER_HEIGHT,(i * BUNKER_SPACE) + BUNKER_OFFSET, BUNKER_HEIGHT, bunker, GREEN);
		int8_t j;
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

void screenState_setSwarmX(int32_t swarmX){
	screenState_swarmX = swarmX;
}

int32_t screenState_getSwarmX(){
	return screenState_swarmX;
}

void screenState_setSwarmY(int32_t swarmY){
	screenState_swarmY = swarmY;
}

int32_t screenState_getSwarmY(){
	return screenState_swarmY;
}

void screenState_moveSwarm() {
	int32_t oldX = screenState_getSwarmX();
	int32_t oldY = screenState_getSwarmY();

	int8_t numberOfDeadRowsRight = 0;
	int8_t numberOfDeadRowsLeft = 0;

	int8_t column;
	for(column = 0; column < 11; column++) {
		if(!screenState_swarmArray[column] &&
		   !screenState_swarmArray[column + 11] &&
		   !screenState_swarmArray[column + 22] &&
		   !screenState_swarmArray[column + 33] &&
		   !screenState_swarmArray[column + 44]){
			numberOfDeadRowsLeft++;
		}else{
			break;
		}
	}

	for(column = 10; column >= 0; --column) {
		if(!screenState_swarmArray[column] &&
		   !screenState_swarmArray[column + 11] &&
		   !screenState_swarmArray[column + 22] &&
		   !screenState_swarmArray[column + 33] &&
		   !screenState_swarmArray[column + 44]){
			numberOfDeadRowsRight++;
		}else{
			break;
		}
	}
	if((screenState_getSwarmX() + 3 >= 144  + (numberOfDeadRowsRight * 16) || screenState_getSwarmX() - 3 <= -(numberOfDeadRowsLeft * 16)) && !goneDown) {
		screenState_setSwarmY(screenState_getSwarmY() + 7);
		aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), oldX, oldY, screenState_getSwarmArray(), WHITE);
		goneDown = 1;
		onEdge = 1;
		return;
	}
	if(screenState_swarmY %2) {
		screenState_setSwarmX(screenState_getSwarmX() + 3);
	} else {
		screenState_setSwarmX(screenState_getSwarmX() - 3);
	}
	goneDown = 0;
	onEdge = 0;

	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), oldX, oldY, screenState_getSwarmArray(), WHITE);
}

int8_t * screenState_getSwarmArray() {
	return screenState_swarmArray;
}

void screenState_moveTankRight(){
	if(tankPos >= 305 ){
		return;
	}
	tankPos++;
	aliens_drawObject(tankPos, TANK_Y, tankPos - 1, TANK_Y, tank, GREEN);

}

void screenState_moveTankLeft(){
	if(tankPos <= 0){
		return;
	}
	tankPos--;
	aliens_drawObject(tankPos, TANK_Y, tankPos + 1, TANK_Y, tank, GREEN);
}

void screenState_killAlien(int8_t alienToKill){
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmX(), screenState_getSwarmY(),  screenState_getSwarmArray(), BLACK);
	screenState_swarmArray[alienToKill] = 0;
	aliens_drawSwarm(screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmX(), screenState_getSwarmY(), screenState_getSwarmArray(), WHITE);

}
void drawBullets(int32_t color) {
	int8_t i;
	for(i = 0; i < 5; i++) {
		if(bullets[i][1]) {
			switch (bulletTypes[i]){
			case 0:
				aliens_drawObject(bullets[i][0], bullets[i][1], bullets[i][0], bullets[i][1] - 3, alien_bullet_0, color);
				break;
			case 1:
				aliens_drawObject(bullets[i][0], bullets[i][1], bullets[i][0], bullets[i][1] - 3, alien_bullet_1, color);
				break;
			case 3:
				aliens_drawObject(bullets[i][0], bullets[i][1], bullets[i][0], bullets[i][1] + 3, tank_bullet, color);
				break;
			default:
				break;
			}
		}
	}
}

void screenState_alienFire() {
	int8_t i;
	int8_t j;
	for(i = 1; i < 5; i++) {
		if(!bullets[i][1]) {
			int16_t column = rand() % 11;
			for(j = 4; j >= 0; --j) {
				if(screenState_swarmArray[j * 11 + column]){
					bullets[i][0] = screenState_getSwarmX() + (column) * 16 + 5;
					bullets[i][1] = screenState_getSwarmY() + BULLET_OFFSET + 12 - ((4 - j) * 12);
					drawBullets(WHITE);
					return;
				}
			}
			screenState_alienFire();
			return;
		}
	}
}

void screenState_tankFire() {
	if(!bullets[0][1]) {
		bullets[0][0] = tankPos + 4;
		bullets[0][1] = TANK_Y - 9;
		drawBullets(WHITE);
	}
}

static void erodeChunk(int8_t chunk, int8_t state, int8_t bunker) {
	int32_t chunkX = (bunker * BUNKER_SPACE) + BUNKER_OFFSET + (6 * (chunk % 4));
	if(chunk == 9) {
		chunkX += 12;
	}
	int32_t chunkY = BUNKER_HEIGHT + (6 * (chunk / 4));
	switch (state) {
	case 4:
		aliens_drawObject(chunkX, chunkY, chunkX, chunkY, bunker_damage2, GREEN);
		break;
	case 3:
		aliens_drawObject(chunkX, chunkY,chunkX, chunkY, bunker_damage1, GREEN);
		break;
	case 2:
		aliens_drawObject(chunkX, chunkY, chunkX, chunkY,bunker_damage0, GREEN);
		break;
	case 1:
		aliens_drawObject(chunkX, chunkY,chunkX, chunkY, bunker_damage0, BLACK);
		break;
	default:
		break;
	}
}


int8_t isHittingAlien(int32_t x, int32_t y) {
	if((x > screenState_getSwarmX()) && (x < screenState_getSwarmX() + 176) && y > screenState_getSwarmY() && y < screenState_getSwarmY() + 55 + 8) {
		int16_t column = (x - screenState_getSwarmX()) / 16;
		int8_t i;
		for(i = 4; i >= 0; --i) {
			if(screenState_swarmArray[i * 11 + column]) {
				if(i * 11 + screenState_getSwarmY() + 16 >= y){
					screenState_killAlien(i * 11 + column);
					return 1;
				}
			}
		}
	}
	return 0;
}

int8_t isHittingBunker(int32_t x, int32_t y) {
	if(y <= BUNKER_HEIGHT + 18  &&  y >=  BUNKER_HEIGHT){
		int32_t bunkerNum = (x - BUNKER_OFFSET) / BUNKER_SPACE;

		if(bunkerNum > 3 || bunkerNum < 0){
			return 0;
		}


		uint32_t localX = x - ((bunkerNum * BUNKER_SPACE) + BUNKER_OFFSET);
		uint32_t localY = y - BUNKER_HEIGHT;

		if(localX < 24) {
			int8_t column = localX / 6;
			int8_t row = localY / 6;
			int8_t segment = row * 4 + column;

			if(segment == 9 || segment == 10) {
				return 0;
			} else if(segment == 11) {
				segment = 9;
			}
			if(bunkers[bunkerNum][segment] > 0){
				erodeChunk(segment, bunkers[bunkerNum][segment], bunkerNum);
				bunkers[bunkerNum][segment]--;
				return 1;
			}
		}
	}
	return 0;
}

int8_t isHittingSaucer(int32_t x, int32_t y) {
	if(saucerMoving && x >= saucerPos && x <= saucerPos + 16 && y >= SAUCER_HEIGHT && y <= SAUCER_HEIGHT + 7) {
		saucerMoving = 0;
		aliens_drawObject(saucerPos, SAUCER_HEIGHT, saucerPos, SAUCER_HEIGHT, saucer, BLACK);
		return 1;
	}
	return 0;
}

int8_t isHittingTank(int32_t x, int32_t y) {
	if(!tankDying && x >= tankPos && x <= tankPos + 15 && y >= TANK_Y && y <= TANK_Y + 8) {
		tankDying = 1;
		return 1;
	}
	return 0;
}

int8_t isHittingSomething(int32_t x, int32_t y) {
	if(isHittingAlien(x,y) || isHittingBunker(x,y) || isHittingSaucer(x,y) || isHittingTank(x,y)) {
		return 1;
	}
	return 0;
}


void screenState_updateBullets() {
	int8_t i;
	if(bullets[0][1]) {
		if((bullets[0][1] > 20) && (!isHittingSomething(bullets[0][0] + 1, bullets[0][1] - 3) && !isHittingSomething(bullets[0][0] + 2, bullets[0][1] - 3) && !isHittingSomething(bullets[0][0], bullets[0][1] - 3))){
			bullets[0][1] -= 3;
		} else{
			aliens_drawObject( bullets[0][0],  bullets[0][1], bullets[0][0], bullets[0][1], tank_bullet, BLACK);

			bullets[0][1] = 0;
		}
	}
	for(i = 1; i < 5; i++) {
		if(bullets[i][1] && (bullets[i][1] < ALIEN_BULLET_STOP) && !isHittingSomething(bullets[i][0] + 1, bullets[i][1] + 6 + 3) && !isHittingSomething(bullets[i][0] + 2, bullets[i][1] + 6 + 3) && !isHittingSomething(bullets[i][0], bullets[i][1] + 6 + 3)) {
			bullets[i][1] += 3;
		} else {
			switch (bulletTypes[i]){
				case 0:
					aliens_drawObject(bullets[i][0], bullets[i][1], bullets[i][0], bullets[i][1], alien_bullet_0, BLACK);
					break;
				case 1:
					aliens_drawObject(bullets[i][0], bullets[i][1], bullets[i][0], bullets[i][1], alien_bullet_1, BLACK);
					break;
				default:
					break;
			}
			bullets[i][0] = 0;
			bullets[i][1] = 0;
		}
	}
	drawBullets(WHITE);
}


void screenState_erodeBunker(int8_t bunker) {
	int8_t i;
	for(i = 0; i < 10; i++) {
		int8_t state = bunkers[bunker][i];
		if(state) {
			erodeChunk(i, state, bunker);
			bunkers[bunker][i]--;
			return;
		}
	}
}

void swarm_update() {
	static int16_t ticks = 0;
	if(ticks++ > SWARM_TICKS_TO_MOVE) {
		screenState_moveSwarm();
		ticks = 0;
	}
	if((rand() % 50) == 1){
		screenState_alienFire();
	}
}

void gameOver() {
	while(1);
}

void tank_update(int32_t currentButtonStateDebounced) {
	static int16_t ticks = 0;
	static int16_t dieSwitches = 0;
	if(tankDying) {
		if(ticks++ > SWITCH_DIE_TYPE) {
			ticks = 0;
			if(dieSwitches++ > DONE_DYING) {
				if(numLives > 0) {
					numLives--;
					tankDying = 0;
					dieSwitches = 0;
					screenState_moveTankRight();
				} else {
					gameOver();
				}
			}
		} else {
			aliens_killTank(tankPos, TANK_Y);
		}
	} else {
		if(RIGHT_BUTTON_BIT & currentButtonStateDebounced) {
			screenState_moveTankRight();
		}
		if(LEFT_BUTTON_BIT & currentButtonStateDebounced) {
			screenState_moveTankLeft();
		}
		if(SHOOT_BUTTON_MASK & currentButtonStateDebounced) {
			screenState_tankFire();
		}
	}
}

void saucer_update() {
	saucerOldPos = saucerPos;
	if(saucerMoving == 0) {
		int16_t random = rand() % 100;
		//xil_printf("Saucer Random: %d", random);
		if(random < 2) {
			//xil_printf("Sending saucer\r\n");
			if(random % 2) {
				//xil_printf("Sending saucer RIGHT\r\n");
				saucerMoving = SAUCER_MOVING_RIGHT;
				saucerPos = 0;
			} else {
				//xil_printf("Sending saucer LEFT\r\n");
				saucerMoving = SAUCER_MOVING_LEFT;
				saucerPos = 320 - SAUCER_WIDTH;
			}
			aliens_drawObject(saucerPos, SAUCER_HEIGHT, saucerPos, SAUCER_HEIGHT, saucer, RED);
		}
		return;
	}

	if(saucerMoving == SAUCER_MOVING_RIGHT) {
		if(saucerPos >= 320 - SAUCER_WIDTH) {
			saucerMoving = 0;
			aliens_drawObject(saucerPos, SAUCER_HEIGHT, saucerPos, SAUCER_HEIGHT, saucer, BLACK);
			return;
		} else {
			saucerPos += 1;
		}
	} else {
		if(saucerPos <= 0) {
			saucerMoving = 0;
			aliens_drawObject(saucerPos, SAUCER_HEIGHT, saucerPos, SAUCER_HEIGHT, saucer, BLACK);
			return;
		} else {
			saucerPos -= 1;
		}
	}
	aliens_drawObject(saucerPos, SAUCER_HEIGHT, saucerOldPos, SAUCER_HEIGHT, saucer, RED);
}

void score_update() {

}

void life_update() {

}

void screenState_update(int32_t currentButtonStateDebounced) {
	screenState_updateBullets();
	swarm_update();
	tank_update(currentButtonStateDebounced);
	saucer_update();
	score_update();
	life_update();
}




