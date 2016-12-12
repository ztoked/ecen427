#include "aliens.h"
#include "screenState.h"

#define ALIEN_HEIGHT 8
#define ALIEN_WIDTH 12
#define SAUCER_HEIGHT 7
#define SAUCER_WIDTH 16
#define BUNKER_HEIGHT 18
#define BUNKER_WIDTH 24
#define EXPLOSION_HEIGHT 10
#define TANK_HEIGHT 8
#define TANK_WIDTH 15
#define BULLET_HEIGHT 5
#define BULLET_WIDTH 3
#define BUNKER_DAMAGE_DIMENSION 6


#define packWord32(b31,b30,b29,b28,b27,b26,b25,b24,b23,b22,b21,b20,b19,b18,b17,b16,b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b31 << 31) | (b30 << 30) | (b29 << 29) | (b28 << 28) | (b27 << 27) | (b26 << 26) | (b25 << 25) | (b24 << 24) |						  \
 (b23 << 23) | (b22 << 22) | (b21 << 21) | (b20 << 20) | (b19 << 19) | (b18 << 18) | (b17 << 17) | (b16 << 16) |						  \
 (b15 << 15) | (b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord16(b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b15 << 15) | (b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord15(b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord12(b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord24(b23,b22,b21,b20,b19,b18,b17,b16,b15,b14,b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b23 << 23) | (b22 << 22) | (b21 << 21) | (b20 << 20) | (b19 << 19) | (b18 << 18) | (b17 << 17) | (b16 << 16) |						  \
 (b15 << 15) | (b14 << 14) | (b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord6(b5,b4,b3,b2,b1,b0) \
((b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord3(b2,b1,b0) \
((b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

static const int saucer_16x7[] =
{
packWord16(0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0),
packWord16(0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0),
packWord16(0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0),
packWord16(0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0),
packWord16(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord16(0,0,1,1,1,0,0,1,1,0,0,1,1,1,0,0),
packWord16(0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0)
};

static const int alien_explosion_12x10[] =
{
packWord12(0,0,0,0,0,0,1,0,0,0,0,0),
packWord12(0,0,0,1,0,0,1,0,0,0,1,0),
packWord12(1,0,0,1,0,0,0,0,0,1,0,0),
packWord12(0,1,0,0,1,0,0,0,1,0,0,0),
packWord12(0,0,0,0,0,0,0,0,0,0,1,1),
packWord12(1,1,0,0,0,0,0,0,0,0,0,0),
packWord12(0,0,0,1,0,0,0,1,0,0,1,0),
packWord12(0,0,1,0,0,0,0,0,1,0,0,1),
packWord12(0,1,0,0,0,1,0,0,1,0,0,0),
packWord12(0,0,0,0,0,1,0,0,0,0,0,0)
};

static const int alien_top_in_12x8[] =
{
packWord12(0,0,0,0,0,1,1,0,0,0,0,0),
packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
packWord12(0,0,0,1,1,1,1,1,1,0,0,0),
packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
packWord12(0,0,0,1,0,1,1,0,1,0,0,0),
packWord12(0,0,1,0,0,0,0,0,0,1,0,0),
packWord12(0,0,0,1,0,0,0,0,1,0,0,0)
};

static const int alien_top_out_12x8[] =
{
packWord12(0,0,0,0,0,1,1,0,0,0,0,0),
packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
packWord12(0,0,0,1,1,1,1,1,1,0,0,0),
packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
packWord12(0,0,0,0,1,0,0,1,0,0,0,0),
packWord12(0,0,0,1,0,1,1,0,1,0,0,0),
packWord12(0,0,1,0,1,0,0,1,0,1,0,0)
};

static const int alien_middle_in_12x8[] =
{
packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
packWord12(0,0,0,0,1,0,0,0,1,0,0,0),
packWord12(0,0,0,1,1,1,1,1,1,1,0,0),
packWord12(0,0,1,1,0,1,1,1,0,1,1,0),
packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
packWord12(0,1,0,1,0,0,0,0,0,1,0,1),
packWord12(0,0,0,0,1,1,0,1,1,0,0,0)
};

static const int alien_middle_out_12x8[] =
{
packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
packWord12(0,1,0,0,1,0,0,0,1,0,0,1),
packWord12(0,1,0,1,1,1,1,1,1,1,0,1),
packWord12(0,1,1,1,0,1,1,1,0,1,1,1),
packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
packWord12(0,0,1,1,1,1,1,1,1,1,1,0),
packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
packWord12(0,0,1,0,0,0,0,0,0,0,1,0)
};

static const int alien_bottom_in_12x8[] =
{
packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
packWord12(0,1,1,1,1,1,1,1,1,1,1,0),
packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
packWord12(1,1,1,0,0,1,1,0,0,1,1,1),
packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
packWord12(0,0,1,1,1,0,0,1,1,1,0,0),
packWord12(0,1,1,0,0,1,1,0,0,1,1,0),
packWord12(0,0,1,1,0,0,0,0,1,1,0,0)
};

static const int alien_bottom_out_12x8[] =
{
packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
packWord12(0,1,1,1,1,1,1,1,1,1,1,0),
packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
packWord12(1,1,1,0,0,1,1,0,0,1,1,1),
packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
packWord12(0,0,0,1,1,0,0,1,1,0,0,0),
packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
packWord12(1,1,0,0,0,0,0,0,0,0,1,1)
};

static const int tank_15x8[] =
{
packWord15(0,0,0,0,0,0,0,1,0,0,0,0,0,0,0),
packWord15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
packWord15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
packWord15(0,1,1,1,1,1,1,1,1,1,1,1,1,1,0),
packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1)
};

static const int alien_bullet_0_3x5[] = {
packWord3(0,1,1),
packWord3(0,1,0),
packWord3(1,1,0),
packWord3(0,1,1),
packWord3(1,1,0)
};

static const int alien_bullet_1_3x5[] = {
packWord3(0,0,0),
packWord3(0,1,0),
packWord3(0,1,0),
packWord3(1,1,1),
packWord3(0,1,0)
};

static const int tank_bullet_3x5[] = {
packWord3(0,1,0),
packWord3(1,1,1),
packWord3(0,1,0),
packWord3(0,1,0),
packWord3(0,1,0)
};


// Shape of the entire bunker.
static const int bunker_24x18[] =
{
packWord24(0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0),
packWord24(0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0),
packWord24(0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0),
packWord24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1),
packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1)
};

// These are the blocks that comprise the bunker and each time a bullet
// strikes one of these blocks, you erod the block as you sequence through
// these patterns.
static const int bunkerDamage0_6x6[] = {
packWord6(0,1,1,0,0,0),
packWord6(0,0,0,0,0,1),
packWord6(1,1,0,1,0,0),
packWord6(1,0,0,0,0,0),
packWord6(0,0,1,1,0,0),
packWord6(0,0,0,0,1,0)
};

static const int bunkerDamage1_6x6[] = {
packWord6(1,1,1,0,1,0),
packWord6(1,0,1,0,0,1),
packWord6(1,1,0,1,1,1),
packWord6(1,0,0,0,0,0),
packWord6(0,1,1,1,0,1),
packWord6(0,1,1,0,1,0)
};

static const int bunkerDamage2_6x6[] = {
packWord6(1,1,1,1,1,1),
packWord6(1,0,1,1,0,1),
packWord6(1,1,0,1,1,1),
packWord6(1,1,0,1,1,0),
packWord6(0,1,1,1,0,1),
packWord6(1,1,1,1,1,1)
};

static const int S[] = {
packWord6(1,1,1,1,1,1),
packWord6(1,0,1,1,0,1),
packWord6(1,1,0,1,1,1),
packWord6(1,1,0,1,1,0),
packWord6(0,1,1,1,0,1),
packWord6(1,1,1,1,1,1)
};

static const int bunkerDamage3_6x6[] = {
packWord6(1,1,1,1,1,1),
packWord6(1,1,1,1,1,1),
packWord6(1,1,1,1,1,1),
packWord6(1,1,1,1,1,1),
packWord6(1,1,1,1,1,1),
packWord6(1,1,1,1,1,1)
};


void aliens_drawObject(uint32_t x, uint32_t y, objectId object, uint32_t color){
	int row = 0;
	int col = 0;
	int height;
	int width;
	int * objectData;
	//TODO: extend this switch for other types of aliens and objects!
	switch(object){
	case alien_top:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if(x%2) {
			objectData = (int *)alien_top_out_12x8;
		} else {
			objectData = (int *)alien_top_in_12x8;
		}
		break;
	case alien_middle:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if(x%2) {
			objectData = (int *)alien_middle_out_12x8;
		} else {
			objectData = (int *)alien_middle_in_12x8;
		}
		break;
	case alien_bottom:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if(x%2) {
			objectData = (int *)alien_bottom_out_12x8;
		} else {
			objectData = (int *)alien_bottom_in_12x8;
		}
		break;
	case tank:
		height = TANK_HEIGHT;
		width = TANK_WIDTH;
		objectData = (int *)tank_15x8;
		break;
	case saucer:
		height = SAUCER_HEIGHT;
		width = SAUCER_WIDTH;
		objectData = (int *)saucer_16x7;
		break;
	case bunker:
		height = BUNKER_HEIGHT;
		width = BUNKER_WIDTH;
		objectData = (int *)bunker_24x18;
		break;
	case explosion:
			height = EXPLOSION_HEIGHT;
			width = SAUCER_WIDTH;
			objectData = (int *)alien_explosion_12x10;
			break;
	case alien_bullet_0:
				height = BULLET_HEIGHT;
				width = BULLET_HEIGHT;
				objectData = (int *)alien_bullet_0_3x5;
				break;
	case alien_bullet_1:
				height = BULLET_HEIGHT;
				width = BULLET_HEIGHT;
				objectData = (int *)alien_bullet_1_3x5;
				break;
	case tank_bullet:
				height = BULLET_HEIGHT;
				width = BULLET_HEIGHT;
				objectData = (int *)tank_bullet_3x5;
				break;
	case bunker_damage0:
				height = BUNKER_DAMAGE_DIMENSION;
				width = BUNKER_DAMAGE_DIMENSION;
				objectData = (int *)bunkerDamage0_6x6;
				break;
	case bunker_damage1:
				height = BUNKER_DAMAGE_DIMENSION;
				width = BUNKER_DAMAGE_DIMENSION;
				objectData = (int *)bunkerDamage1_6x6;
				break;
	case bunker_damage2:
				height = BUNKER_DAMAGE_DIMENSION;
				width = BUNKER_DAMAGE_DIMENSION;
				objectData = (int *)bunkerDamage2_6x6;
				break;
	case bunker_damage3:
				height = BUNKER_DAMAGE_DIMENSION;
				width = BUNKER_DAMAGE_DIMENSION;
				objectData = (int *)bunkerDamage3_6x6;
				break;
	default:
		//Do nothing for now
		break;
	}

	

	for (row = y; row < height + y; row++) {
		for (col = x; col < width + x; col++) {
			if ((objectData[row - y] & (1 << (width - 1 - col + x )))) {

				//screenState_getFramePointer()[(row) * 640 + (col)] = color; // Green
				screenState_getFramePointer()[(row * 2) * 640 + (col * 2)] = color; // Green
				screenState_getFramePointer()[(row * 2 + 1) * 640 + (col * 2)] = color;
				screenState_getFramePointer()[(row * 2) * 640 + (col * 2 + 1)] = color;
				screenState_getFramePointer()[(row * 2 + 1) * 640 + (col * 2 + 1)] = color;

			} else {
				//screenState_getFramePointer()[(row) * 640 + (col)] = 0x0;
				screenState_getFramePointer()[(row * 2) * 640 + (col * 2)] = 0;
				screenState_getFramePointer()[(row * 2 + 1) * 640 + (col * 2)] = 0;
				screenState_getFramePointer()[(row * 2) * 640 + (col * 2 + 1)] = 0;
				screenState_getFramePointer()[(row * 2 + 1) * 640 + (col * 2 + 1)] = 0;
			}
		}
	}
}

//Draw the alien swarm using the x,y values of the top left alien
//The array is to be able to draw the aliens that are alive
void aliens_drawSwarm(uint32_t x, uint32_t y, uint8_t alien_array[], uint32_t color)
{
	uint16_t alienX = x;
	uint16_t alienY = y;
	uint16_t i = 0;
	for (i = 0; i < 55; i++)
	{
		if(i % 11 == 0 && i != 0)
		{
			alienX = x;
			alienY = y + i;
		}
		if(alien_array[i])
		{
			if(i / 11 == 0)
			{
				aliens_drawObject(alienX, alienY, alien_top, color);
			}
			if(i / 11 == 1 || i / 11 == 2)
			{
				aliens_drawObject(alienX, alienY, alien_middle, color);
			}
			if(i / 11 == 3 || i / 11 == 4)
			{
				aliens_drawObject(alienX, alienY, alien_bottom, color);
			}
		}
		alienX += 16;
	}
}




