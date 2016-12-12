#include <stdint.h>
typedef enum scoreBoard_objectId {
	scoreBoard_objectId_s,
	scoreBoard_objectId_c,
	scoreBoard_objectId_o,
	scoreBoard_objectId_r,
	scoreBoard_objectId_e,
	scoreBoard_objectId_comma,
	scoreBoard_objectId_zero,
	scoreBoard_objectId_one,
	scoreBoard_objectId_two,
	scoreBoard_objectId_three,
	scoreBoard_objectId_four,
	scoreBoard_objectId_five,
	scoreBoard_objectId_six,
	scoreBoard_objectId_seven,
	scoreBoard_objectId_eight,
	scoreBoard_objectId_nine,
	scoreBoard_objectId_l,
	scoreBoard_objectId_i,
	scoreBoard_objectId_v,
}scoreBoard_objectId;

void scoreBoard_drawScoreBoard();

void scoreBoard_changeScore(uint32_t score);

void scoreBoard_eraseLife();

void scoreBoard_printNumber(uint32_t score, uint32_t x, uint32_t y, uint32_t color);

void scoreBoard_gameOver();
