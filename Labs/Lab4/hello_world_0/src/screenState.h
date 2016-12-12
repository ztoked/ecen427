#include <stdint.h>

void screenState_setFramePointer(unsigned int * framePointer);

unsigned int * screenState_getFramePointer();

void screenState_init();

void screenState_moveSwarm();

void screenState_setSwarmX(int32_t swarmX);

int32_t screenState_getSwarmX();

void screenState_setSwarmY(int32_t swarmY);

int32_t screenState_getSwarmY();

int8_t * screenState_getSwarmArray();

void screenState_moveTankRight();

void screenState_moveTankLeft();

void screenState_killAlien(int8_t alienToKill);

void screenState_alienFire();

void screenState_tankFire();

void screenState_updateBullets();

void screenState_erodeBunker(int8_t bunker);

int8_t screenState_isOnEdge();


//NEW
void screenState_update(int32_t currentButtonStateDebounced);
void screenState_draw();

