//This file has functions for drawing objects in the game

#include <stdint.h>

typedef enum objectId {
	alien_top,
	alien_middle,
	alien_bottom,
	tank,
	saucer,
	bunker,
	explosion,
	alien_bullet_0,
	alien_bullet_1,
	tank_bullet,
	bunker_damage0,
	bunker_damage1,
	bunker_damage2,
	bunker_damage3
}objectId;

typedef enum color {
	WHITE = 0xFFFFFFFF,
	GREEN = 0x0000FF00,
	BLACK = 0x00000000
}color;


//Draw an object on screen.
//NOTE x, y coordinates are not pixels but chunk of four pixels
//(aka 1,1 will print at pixel 2,2 and 5,5 will print at pixel 10,10)
void aliens_drawObject(uint32_t x, uint32_t y, objectId object, uint32_t color);

//Draw the alien swarm using the x,y values of the top left alien
//The array is to be able to draw the aliens that are alive
void aliens_drawSwarm(uint32_t x, uint32_t y, uint8_t alien_array[], uint32_t color);
