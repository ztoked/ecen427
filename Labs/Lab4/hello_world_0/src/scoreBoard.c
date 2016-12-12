#include "scoreBoard.h"
#include <stdint.h>
#include "screenState.h"
#include "aliens.h"

#define packWord14(b13,b12,b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b13 << 13) | (b12 << 12) | (b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord12(b11,b10,b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b11 << 11) | (b10 << 10) | (b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define packWord10(b9,b8,b7,b6,b5,b4,b3,b2,b1,b0) \
((b9  << 9 ) | (b8  << 8 ) |						  \
 (b7  << 7 ) | (b6  << 6 ) | (b5  << 5 ) | (b4  << 4 ) | (b3  << 3 ) | (b2  << 2 ) | (b1  << 1 ) | (b0  << 0 ) )

#define TANK_LIFES_START_X 252
#define LIFE_TANK_WIDTH 18
#define NUMBER_HEIGHT 14
#define WIDE_CHAR 14
#define MEDIUM_CHAR 12
#define NARROW_CHAR 10
#define WHITE  0xFFFFFFFF
#define GREEN  0x0000FF00
#define BLACK  0x00000000

#define SCORE_BEGIN_X 25
#define SCORE_BEGIN_Y 20

#define LIVES_BEGIN_X 400
#define LIFE_TANK_Y  SCORE_BEGIN_Y / 2 - 1

static uint8_t numLives = 2;

const int score_digit_0[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),

};

const int score1[NUMBER_HEIGHT] =
{
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,0,0,0,1,1,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score2[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score3[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score4[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};


const int score5[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score6[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score7[NUMBER_HEIGHT] =
{
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
		packWord12(0,0,1,1,1,1,1,1,1,1,0,0),
		packWord12(0,0,0,0,0,0,0,0,1,1,0,0),
		packWord12(0,0,0,0,0,0,0,0,1,1,0,0),
		packWord12(0,0,0,0,0,0,0,0,1,1,0,0),
		packWord12(0,0,0,0,0,0,0,0,1,1,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score8[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int score9[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreComma[NUMBER_HEIGHT] =
{
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,0,0,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,0,0,1,1,0,0,0,0),
		packWord12(0,0,0,0,1,1,0,0,0,0,0,0),
		packWord12(0,0,0,0,1,1,0,0,0,0,0,0),
};

const int scoreS[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreC[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreO[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),

};

const int scoreR[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreE[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreL[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreI[NUMBER_HEIGHT] =
{
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,1,1,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
		packWord10(0,0,0,0,0,0,0,0,0,0),
};

const int scoreV[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,0,0,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,0,0,1,1,0,0,0,0),
		packWord14(0,0,0,0,0,0,1,1,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,1,1,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreG[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,1,1,0,0,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreA[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,0,0,1,1,1,1,1,1,0,0,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,1,1,1,1,1,1,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,1,1,0,0,0,0,0,0,1,1,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};

const int scoreM[NUMBER_HEIGHT] =
{
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(1,1,1,1,1,1,0,0,1,1,1,1,0,0),
		packWord14(1,1,1,1,1,1,0,0,1,1,1,1,0,0),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(1,1,0,0,0,0,1,1,0,0,0,0,1,1),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
		packWord14(0,0,0,0,0,0,0,0,0,0,0,0,0,0),
};




void scoreBoard_drawObject(uint32_t x, uint32_t y, scoreBoard_objectId object, uint32_t color){
	int row = 0;
	int col = 0;
	int height;
	int width;
	int * objectData;
	//TODO: extend this switch for other types of aliens and objects!
	height = NUMBER_HEIGHT;

	switch(object){
	case scoreBoard_objectId_zero:
		width = WIDE_CHAR;
		objectData = (int *)score_digit_0;
		break;
	case scoreBoard_objectId_one:
		width = MEDIUM_CHAR;
		objectData = (int *)score1;
		break;
	case scoreBoard_objectId_two:
		width = WIDE_CHAR;
		objectData = (int *)score2;
		break;
	case scoreBoard_objectId_three:
		width = WIDE_CHAR;
		objectData = (int *)score3;
		break;
	case scoreBoard_objectId_four:
		width = WIDE_CHAR;
		objectData = (int *)score4;
		break;
	case scoreBoard_objectId_five:
		width = WIDE_CHAR;
		objectData = (int *)score5;
		break;
	case scoreBoard_objectId_six:
		width = WIDE_CHAR;
		objectData = (int *)score6;
		break;
	case scoreBoard_objectId_seven:
		width = MEDIUM_CHAR;
		objectData = (int *)score7;
		break;
	case scoreBoard_objectId_eight:
		width = WIDE_CHAR;
		objectData = (int *)score8;
		break;
	case scoreBoard_objectId_nine:
		width = WIDE_CHAR;
		objectData = (int *)score9;
		break;


	case scoreBoard_objectId_s:
		width = WIDE_CHAR;
		objectData = (int *)scoreS;
		break;
	case scoreBoard_objectId_c:
		width = WIDE_CHAR;
		objectData = (int *)scoreC;
		break;
	case scoreBoard_objectId_o:
		width = WIDE_CHAR;
		objectData = (int *)scoreO;
		break;
	case scoreBoard_objectId_r:
		width = WIDE_CHAR;
		objectData = (int *)scoreR;
		break;
	case scoreBoard_objectId_e:
		width = WIDE_CHAR;
		objectData = (int *)scoreE;
		break;
	case scoreBoard_objectId_comma:
		width = MEDIUM_CHAR;
		objectData = (int *)scoreComma;
		break;
	case scoreBoard_objectId_l:
		width = WIDE_CHAR;
		objectData = (int *)scoreL;
		break;
	case scoreBoard_objectId_i:
		width = NARROW_CHAR;
		objectData = (int *)scoreI;
		break;
	case scoreBoard_objectId_v:
		width = WIDE_CHAR;
		objectData = (int *)scoreV;
		break;
	default:
		//Do nothing for now
		break;
	}

	for (row = y; row < height + y; row++) {
		for (col = x; col < width + x; col++) {
			if ((objectData[row - y] & (1 << (width - 1 - col + x )))) {
				screenState_getFramePointer()[(row) * 640 + (col)] = color;
			} else {
				screenState_getFramePointer()[(row) * 640 + (col)] = 0x0;
			}
		}
	}
}

void scoreBoard_drawScoreBoard(){
	uint32_t i = 0;

	scoreBoard_drawObject(SCORE_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_s, WHITE);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_c, WHITE);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_o, WHITE);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_r, WHITE);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_e, WHITE);
	i++;
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_zero, GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_zero, GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_zero, GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_zero, GREEN);

	i = 0;
	scoreBoard_drawObject(LIVES_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_l, WHITE);
	i++;
	scoreBoard_drawObject(LIVES_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_i, WHITE);
	i++;
	scoreBoard_drawObject(LIVES_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_v, WHITE);
	i++;
	scoreBoard_drawObject(LIVES_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_e, WHITE);
	i++;
	scoreBoard_drawObject(LIVES_BEGIN_X + i * WIDE_CHAR,SCORE_BEGIN_Y, scoreBoard_objectId_s, WHITE);
	i = 0;
	aliens_drawObject(TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, tank,  GREEN);
	i++;
	aliens_drawObject(TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, tank,  GREEN);
	i++;
	aliens_drawObject(TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, TANK_LIFES_START_X + i * LIFE_TANK_WIDTH, LIFE_TANK_Y, tank,  GREEN);
}

scoreBoard_objectId getObject(uint8_t number) {
	switch(number) {
		case 0:
			return scoreBoard_objectId_zero;
		case 1:
			return scoreBoard_objectId_one;
		case 2:
			return scoreBoard_objectId_two;
		case 3:
			return scoreBoard_objectId_three;
		case 4:
			return scoreBoard_objectId_four;
		case 5:
			return scoreBoard_objectId_five;
		case 6:
			return scoreBoard_objectId_six;
		case 7:
			return scoreBoard_objectId_seven;
		case 8:
			return scoreBoard_objectId_eight;
		case 9:
			return scoreBoard_objectId_nine;
		default:
			break;
	}
	return scoreBoard_objectId_zero;
}

void scoreBoard_changeScore(int32_t score) {
	uint16_t i = 6;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, getObject(score/1000), GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, getObject(score/100), GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, getObject(score/10), GREEN);
	i++;
	scoreBoard_drawObject(SCORE_BEGIN_X + (i) * WIDE_CHAR,SCORE_BEGIN_Y, getObject(score%10), GREEN);
}

void scoreBoard_eraseLife() {
	aliens_drawObject(TANK_LIFES_START_X + numLives * LIFE_TANK_WIDTH, LIFE_TANK_Y, TANK_LIFES_START_X + numLives * LIFE_TANK_WIDTH, LIFE_TANK_Y, tank,  BLACK);
	numLives--;
}
