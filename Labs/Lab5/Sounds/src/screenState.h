#include <stdint.h>
//Setter for frame buffer
void screenState_setFramePointer(unsigned int * framePointer);
//Getter for frame buffer
unsigned int * screenState_getFramePointer();
//Initializer
void screenState_init();
//Moves the swarm of aliens
void screenState_moveSwarm();
//Sets aliens X position
void screenState_setSwarmX(int32_t swarmX);
//Get's the aliens X position
int32_t screenState_getSwarmX();
//Sets swarm y position
void screenState_setSwarmY(int32_t swarmY);
//Get swarm y position
int32_t screenState_getSwarmY();
//Get swarm array
int8_t * screenState_getSwarmArray();
//Move the tank right
void screenState_moveTankRight();
//Move tank left
void screenState_moveTankLeft();
//Kill the alien
void screenState_killAlien(int8_t alienToKill);
//Fire alien bullet
void screenState_alienFire();
//Fire tank bullet
void screenState_tankFire();
//Update bullets
void screenState_updateBullets();
//Erode Bunker
void screenState_erodeBunker(int8_t bunker);
//True if swarm is on the edge
int8_t screenState_isOnEdge();
//Updates entire screen
void screenState_update(int32_t currentButtonStateDebounced);
//Used to draw an object
void screenState_draw();
