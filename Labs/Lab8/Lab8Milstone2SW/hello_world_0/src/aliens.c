#include "aliens.h"
#include "screenState.h"
#include <stdio.h>

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
static int8_t Type = 1;

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

static const int saucer_16x7[] = {
		packWord16(0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0),
		packWord16(0,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0),
		packWord16(0,0,1,1,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord16(0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0),
		packWord16(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
		packWord16(0,0,1,1,1,0,0,1,1,0,0,1,1,1,0,0),
		packWord16(0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0) };

static const int alien_explosion_12x10[] = {
		packWord12(0,0,0,0,0,0,1,0,0,0,0,0),
		packWord12(0,0,0,1,0,0,1,0,0,0,1,0),
		packWord12(1,0,0,1,0,0,0,0,0,1,0,0),
		packWord12(0,1,0,0,1,0,0,0,1,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,1,1),
		packWord12(1,1,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,1,0,0,0,1,0,0,1,0),
		packWord12(0,0,1,0,0,0,0,0,1,0,0,1),
		packWord12(0,1,0,0,0,1,0,0,1,0,0,0),
		packWord12(0,0,0,0,0,1,0,0,0,0,0,0) };

static const int alien_top_in_12x8[] = {
		packWord12(0,0,0,0,0,1,1,0,0,0,0,0),
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,0,0,1,1,1,1,1,1,0,0,0),
		packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
		packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
		packWord12(0,0,0,1,0,1,1,0,1,0,0,0),
		packWord12(0,0,1,0,0,0,0,0,0,1,0,0),
		packWord12(0,0,0,1,0,0,0,0,1,0,0,0) };

static const int alien_top_out_12x8[] = {
		packWord12(0,0,0,0,0,1,1,0,0,0,0,0),
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,0,0,1,1,1,1,1,1,0,0,0),
		packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
		packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
		packWord12(0,0,0,0,1,0,0,1,0,0,0,0),
		packWord12(0,0,0,1,0,1,1,0,1,0,0,0),
		packWord12(0,0,1,0,1,0,0,1,0,1,0,0) };

static const int alien_middle_in_12x8[] = {
		packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
		packWord12(0,0,0,0,1,0,0,0,1,0,0,0),
		packWord12(0,0,0,1,1,1,1,1,1,1,0,0),
		packWord12(0,0,1,1,0,1,1,1,0,1,1,0),
		packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(0,1,0,1,0,0,0,0,0,1,0,1),
		packWord12(0,0,0,0,1,1,0,1,1,0,0,0) };

static const int alien_middle_out_12x8[] = {
		packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
		packWord12(0,1,0,0,1,0,0,0,1,0,0,1),
		packWord12(0,1,0,1,1,1,1,1,1,1,0,1),
		packWord12(0,1,1,1,0,1,1,1,0,1,1,1),
		packWord12(0,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(0,0,1,1,1,1,1,1,1,1,1,0),
		packWord12(0,0,0,1,0,0,0,0,0,1,0,0),
		packWord12(0,0,1,0,0,0,0,0,0,0,1,0) };

static const int alien_bottom_in_12x8[] = {
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,1,1,1,1,1,1,1,1,1,1,0),
		packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(1,1,1,0,0,1,1,0,0,1,1,1),
		packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(0,0,1,1,1,0,0,1,1,1,0,0),
		packWord12(0,1,1,0,0,1,1,0,0,1,1,0),
		packWord12(0,0,1,1,0,0,0,0,1,1,0,0) };

static const int alien_bottom_out_12x8[] = {
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,1,1,1,1,1,1,1,1,1,1,0),
		packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(1,1,1,0,0,1,1,0,0,1,1,1),
		packWord12(1,1,1,1,1,1,1,1,1,1,1,1),
		packWord12(0,0,0,1,1,0,0,1,1,0,0,0),
		packWord12(0,0,1,1,0,1,1,0,1,1,0,0),
		packWord12(1,1,0,0,0,0,0,0,0,0,1,1) };

static const int tank_15x8[] = {
		packWord15(0,0,0,0,0,0,0,1,0,0,0,0,0,0,0),
		packWord15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
		packWord15(0,0,0,0,0,0,1,1,1,0,0,0,0,0,0),
		packWord15(0,1,1,1,1,1,1,1,1,1,1,1,1,1,0),
		packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
		packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
		packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1),
		packWord15(1,1,1,1,1,1,1,1,1,1,1,1,1,1,1) };

static const int tankDamage1_15x8[] = {
		packWord15(0,1,0,0,0,0,0,1,0,0,0,0,0,1,0),
		packWord15(0,0,0,0,1,0,0,0,0,0,0,0,0,0,0),
		packWord15(0,0,1,0,0,0,0,1,0,0,0,0,0,1,0),
		packWord15(0,0,0,0,0,0,1,0,0,0,0,1,0,0,1),
		packWord15(0,1,0,0,0,1,1,0,0,1,0,0,0,0,0),
		packWord15(0,0,0,0,1,1,1,1,1,1,1,0,0,1,0),
		packWord15(0,0,0,1,1,1,1,1,1,1,1,1,0,0,0),
		packWord15(0,1,1,1,1,1,1,1,1,1,1,1,1,1,0) };

static const int tankDamage0_15x8[] = {
		packWord15(0,0,0,0,0,1,0,0,0,0,0,0,0,0,0),
		packWord15(0,0,0,1,0,0,0,0,1,0,0,1,0,0,0),
		packWord15(0,0,0,0,0,1,0,1,0,0,1,0,1,0,0),
		packWord15(0,0,0,1,0,0,0,0,0,0,0,0,0,1,0),
		packWord15(0,0,0,0,0,0,1,0,1,1,0,0,0,0,0),
		packWord15(0,1,0,0,1,1,1,1,1,1,1,1,0,0,0),
		packWord15(0,0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord15(0,1,1,1,1,1,1,1,1,1,1,1,1,1,0) };

static const int alien_bullet_0_3x5[] = {
		packWord3(0,1,1),
		packWord3(0,1,0),
		packWord3(1,1,0),
		packWord3(0,1,1),
		packWord3(1,1,0) };

static const int alien_bullet_1_EVEN_3x5[] = {
		packWord3(0,1,0),
		packWord3(0,1,0),
		packWord3(0,1,0),
		packWord3(1,1,1),
		packWord3(0,1,0) };

static const int alien_bullet_1_ODD_3x5[] = {
		packWord3(0,1,0),
		packWord3(1,1,1),
		packWord3(0,1,0),
		packWord3(0,1,0),
		packWord3(0,1,0) };

static const int alien_bullet_2_EVEN_3x5[] = {
		packWord3(1,0,0),
		packWord3(0,1,0),
		packWord3(0,0,1),
		packWord3(0,1,0),
		packWord3(1,0,0) };

static const int alien_bullet_2_ODD_3x5[] = {
		packWord3(0,0,1),
		packWord3(0,1,0),
		packWord3(1,0,0),
		packWord3(0,1,0),
		packWord3(0,0,1) };

static const int tank_bullet_3x5[] = {
		packWord3(0,1,0),
		packWord3(1,1,1),
		packWord3(0,1,0),
		packWord3(0,1,0),
		packWord3(0,1,0) };

static const int alien_black_bitmap[] = {
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0) };

// Shape of the entire bunker.
static const int bunker_24x18[] = {
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
		packWord24(1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1) };

// These are the blocks that comprise the bunker and each time a bullet
// strikes one of these blocks, you erod the block as you sequence through
// these patterns.
static const int bunkerDamage0_6x6[] = {
		packWord6(0,1,1,0,0,0),
		packWord6(0,0,0,0,0,1),
		packWord6(1,1,0,1,0,0),
		packWord6(1,0,0,0,0,0),
		packWord6(0,0,1,1,0,0),
		packWord6(0,0,0,0,1,0) };

static const int bunkerDamage1_6x6[] = {
		packWord6(1,1,1,0,1,0),
		packWord6(1,0,1,0,0,1),
		packWord6(1,1,0,1,1,1),
		packWord6(1,0,0,0,0,0),
		packWord6(0,1,1,1,0,1),
		packWord6(0,1,1,0,1,0) };

static const int bunkerDamage2_6x6[] = {
		packWord6(1,1,1,1,1,1),
		packWord6(1,0,1,1,0,1),
		packWord6(1,1,0,1,1,1),
		packWord6(1,1,0,1,1,0),
		packWord6(0,1,1,1,0,1),
		packWord6(1,1,1,1,1,1) };

static const int S[] = {
		packWord6(1,1,1,1,1,1),
		packWord6(1,0,1,1,0,1),
		packWord6(1,1,0,1,1,1),
		packWord6(1,1,0,1,1,0),
		packWord6(0,1,1,1,0,1),
		packWord6(1,1,1,1,1,1) };

static const int bunkerDamage3_6x6[] = {
		packWord6(1,1,1,1,1,1),
		packWord6(1,1,1,1,1,1),
		packWord6(1,1,1,1,1,1),
		packWord6(1,1,1,1,1,1),
		packWord6(1,1,1,1,1,1),
		packWord6(1,1,1,1,1,1) };

static int32_t min(int32_t a, int32_t b) {
	if (a < b) {
		return a;
	} else {
		return b;
	}
}

static int32_t max(int32_t a, int32_t b) {
	if (a > b) {
		return a;
	} else {
		return b;
	}
}

static void drawPixel(int32_t x, int32_t y, int32_t color) {
	//screenState_getFramePointer()[y * 640 + (x)] = color;
	screenState_getFramePointer()[(y * 2) * 640 + (x * 2)] = color;
	screenState_getFramePointer()[(y * 2 + 1) * 640 + (x * 2)] = color;
	screenState_getFramePointer()[(y * 2) * 640 + (x * 2 + 1)] = color;
	screenState_getFramePointer()[(y * 2 + 1) * 640 + (x * 2 + 1)] = color;

}
void aliens_drawObject(int32_t x, int32_t y, int32_t oldX, int32_t oldY,
	objectId object, int32_t color, uint8_t fillBackGround) {
	int height;
	int width;
	int * objectData;
	int * objectDataOld;
	switch (object) {
	case alien_top:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if (x % 2) {
			objectData = (int *) alien_top_out_12x8;
			objectDataOld = (int *) alien_top_in_12x8;
		} else {
			objectData = (int *) alien_top_in_12x8;
			objectDataOld = (int *) alien_top_out_12x8;
		}
		break;
	case alien_middle:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if (x % 2) {
			objectData = (int *) alien_middle_out_12x8;
			objectDataOld = (int *) alien_middle_in_12x8;

		} else {
			objectData = (int *) alien_middle_in_12x8;
			objectDataOld = (int *) alien_middle_out_12x8;
		}
		break;
	case alien_bottom:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		if (x % 2) {
			objectData = (int *) alien_bottom_out_12x8;
			objectDataOld = (int *) alien_bottom_in_12x8;

		} else {
			objectData = (int *) alien_bottom_in_12x8;
			objectDataOld = (int *) alien_bottom_out_12x8;
		}
		break;
	case tank:
		height = TANK_HEIGHT;
		width = TANK_WIDTH;
		objectData = (int *) tank_15x8;
		break;
	case tankDamage1:
		height = TANK_HEIGHT;
		width = TANK_WIDTH;
		objectData = (int *) tankDamage1_15x8;
		break;
	case tankDamage0:
		height = TANK_HEIGHT;
		width = TANK_WIDTH;
		objectData = (int *) tankDamage0_15x8;
		break;
	case saucer:
		height = SAUCER_HEIGHT;
		width = SAUCER_WIDTH;
		objectData = (int *) saucer_16x7;
		break;
	case bunker:
		height = BUNKER_HEIGHT;
		width = BUNKER_WIDTH;
		objectData = (int *) bunker_24x18;
		break;
	case explosion:
		height = EXPLOSION_HEIGHT;
		width = ALIEN_WIDTH;
		objectData = (int *) alien_explosion_12x10;
		break;
	case alien_bullet_0:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) alien_bullet_0_3x5;
		break;
	case alien_bullet_1_EVEN:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) alien_bullet_1_EVEN_3x5;
		break;
	case alien_bullet_1_ODD:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) alien_bullet_1_ODD_3x5;
		break;
	case tank_bullet:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) tank_bullet_3x5;
		break;
	case bunker_damage0:
		height = BUNKER_DAMAGE_DIMENSION;
		width = BUNKER_DAMAGE_DIMENSION;
		objectData = (int *) bunkerDamage0_6x6;
		break;
	case bunker_damage1:
		height = BUNKER_DAMAGE_DIMENSION;
		width = BUNKER_DAMAGE_DIMENSION;
		objectData = (int *) bunkerDamage1_6x6;
		break;
	case bunker_damage2:
		height = BUNKER_DAMAGE_DIMENSION;
		width = BUNKER_DAMAGE_DIMENSION;
		objectData = (int *) bunkerDamage2_6x6;
		break;
	case bunker_damage3:
		height = BUNKER_DAMAGE_DIMENSION;
		width = BUNKER_DAMAGE_DIMENSION;
		objectData = (int *) bunkerDamage3_6x6;
		break;
	case alien_black:
		height = ALIEN_HEIGHT;
		width = ALIEN_WIDTH;
		objectData = (int *) alien_black_bitmap;
		break;
	case alien_bullet_2_EVEN:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) alien_bullet_2_EVEN_3x5;
		break;
	case alien_bullet_2_ODD:
		height = BULLET_HEIGHT;
		width = BULLET_HEIGHT;
		objectData = (int *) alien_bullet_2_ODD_3x5;
		break;
	default:
		//Do nothing for now
		break;
	}

	int32_t i;
	int32_t j;

	if (screenState_isOnEdge()) {
		objectDataOld = objectData;
	}

	int32_t startx;
	int32_t starty;
	int32_t endx;
	int32_t endy;

	//Find out where the start for x is
	startx = min(oldX, x);

	//Find out where the start for y is
	starty = min(oldY, y);

	//Find out end of y
	endy = max(oldY, y) + height;

	//Find out end x
	endx = max(oldX, x) + width;
	if(endx > 320){
		return;
	}

	for (i = starty; i < endy; i++) {
		for (j = startx; j < endx; j++) {

			int32_t currentNewYBitmapLookup = i - y;
			int32_t currentNewXBitmapLookup = j - x;

			int32_t currentOldYBitmapLookup = i - oldY;
			int32_t currentOldXBitmapLookup = j - oldX;

			//A pixel can either be part of new object, old object, both, or neither

			//If part of new object
			if (currentNewYBitmapLookup >= 0 && currentNewXBitmapLookup >= 0
					&& currentNewYBitmapLookup < height
					&& currentNewXBitmapLookup < width) {
				if (objectData[currentNewYBitmapLookup] & (1 << (width - 1
						- currentNewXBitmapLookup))) {
					//Draw new object
					if (screenState_getFramePointer()[(i * 2) * 640 + (j * 2)]
							!= color) { //Only draw this color if the pixel isn't already this color
						drawPixel(j, i, color);
					}
				} else if(fillBackGround){
					drawPixel(j, i, 0);
				}
				continue;
			}
			if(!fillBackGround){
				continue;
			}
			//If part of old object (and only)
			if (currentOldYBitmapLookup >= 0 && currentOldXBitmapLookup >= 0
					&& currentOldYBitmapLookup < height
					&& currentOldXBitmapLookup < width) {
				if (objectDataOld[currentOldYBitmapLookup] & (1 << (width - 1
						- currentOldXBitmapLookup))) {
					//Clear it
					drawPixel(j, i, 0);
					continue;
				}
			}
			drawPixel(j, i, 0);
		}
	}
}

void getAlienCoords(uint32_t alienIndex, int32_t * x, int32_t * y){
	*y = ((alienIndex / 11) * 11) + screenState_getSwarmY() + 10;
	*x = ((alienIndex % 11) * 16) + screenState_getSwarmX();
}

//Draw the alien swarm using the x,y values of the top left alien
//The array is to be able to draw the aliens that are alive
void aliens_drawSwarm(int32_t x, int32_t y, int32_t oldX, int32_t oldY,
	int8_t alien_array[], int32_t color) {
	int16_t alienX = x;
	int16_t alienY = y;
	int16_t oldAlienX = oldX;
	int16_t oldAlienY = oldY;
	int16_t i = 0;

	int16_t oldRightMostX = oldX + 16 * 10;

	int16_t rightMostX = x + 16 * 10;
	int16_t bottomY = y + 54;
	alienX = rightMostX;
	alienY = bottomY;
	oldAlienX = oldRightMostX;
	oldAlienY = oldY + 54;

	for (i = 54; i >= 0; i--) {
		if (alien_array[i])//If it's not ed
		{
			if (i / 11 == 0)//Top row
			{
				aliens_drawObject(alienX, alienY, oldAlienX, oldAlienY,
						alien_top, color, 1);
			}
			if (i / 11 == 1 || i / 11 == 2)//Middle
			{
				aliens_drawObject(alienX, alienY, oldAlienX, oldAlienY,
						alien_middle, color, 1);
			}
			if (i / 11 == 3 || i / 11 == 4)//Bottom
			{
				aliens_drawObject(alienX, alienY, oldAlienX, oldAlienY,
						alien_bottom, color, 1);
			}
		}
		alienX -= 16;
		oldAlienX -= 16;

		if (i % 11 == 0)//If a new row
		{
			alienX = rightMostX;
			oldAlienX = oldRightMostX;

			alienY -= 11;
			oldAlienY -= 11;

		}
	}
}

void aliens_killTank(int32_t x, int32_t y) {
	if(Type) {
		aliens_drawObject(x, y, x, y, tankDamage1, GREEN, 1);
		Type = 0;
	} else {
		aliens_drawObject(x, y, x, y, tankDamage0, GREEN, 1);
		Type = 1;
	}
}

