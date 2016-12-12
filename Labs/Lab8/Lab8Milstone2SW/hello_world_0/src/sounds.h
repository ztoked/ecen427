/*
 * sounds.h
 *
 *  Created on: Oct 17, 2016
 *      Author: superman
 */
#include <stdint.h>
#ifndef SOUNDS_H_
#define SOUNDS_H_

typedef enum sounds_soundType{//One entry for every type of sound that can play
		march1,
		march2,
		march3,
		march4,
		tankFire,
		tankExplode,
		saucerFly1,
		saucerFly2,
		saucerExplode
}sounds_soundType;//Used for calls to sounds_playSound() function

void sounds_VolumeChange(uint8_t oneForUpZeroForDown);//Changes volume
void sounds_killSounds();//Stops all sound
void sounds_init();//Initializes AC97, call first
void sounds_playSound(sounds_soundType sound);//Plays given sound
void sounds_ac97_interrupt_handler();//AC97 FIFO interrupt handler

#endif /* SOUNDS_H_ */
