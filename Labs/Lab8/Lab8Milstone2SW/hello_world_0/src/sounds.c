#include "sounds.h"
#include "xac97_l.h"
#include "xparameters.h"
#include "xio.h"
#include <stdio.h>

#define NOT_IN_USE 10 //Parking spot for soundPlayingIndex
#define INITIAL_VOLUME 1200 //Initial voume setting
#define VOLUME_INCREMENT 100//How much the volume changes each time the change volume buttons are pressed
#define MIN_VOLUME 5000 //The lowest the volume can go
#define FREQUENCY 11025 //Our data all uses the same sampling rate
#define SAMPLES_TO_ADD 128 //Number of samples to push to FIFO each interrupt

static uint8_t * soundData; //Data for the sound currently playing
static uint32_t currentSample;//The last sample loaded into the AC97 FIFO
static uint32_t numberOfSamples;//Number of samples in sound currently playing

static uint8_t soundPlayingIndex = NOT_IN_USE; //Index of the sound currently playing

static int32_t volume = INITIAL_VOLUME;//Current volume level

extern uint8_t march1Data[];//March 1 sound data
extern uint32_t march1Samples;//March 1 sound data number of samples

extern uint8_t march2Data[];//March 2 sound data
extern uint32_t march2Samples;//March 2 sound data number of samples

extern uint8_t march3Data[];//March 3 sound data
extern uint32_t march3Samples;//March 3 sound data number of samples

extern uint8_t march4Data[];//March 4 sound data
extern uint32_t march4Samples;//March 4 sound data number of samples

extern uint8_t saucerFly1Data[];//Saucer flying sound 1
extern uint32_t saucerFly1Samples;//Number of samples

extern uint8_t saucerFly2Data[];//Saucer flying sound data 2
extern uint32_t saucerFly2Samples;//Number of samples

extern uint8_t tankExplodeData[];//Tank explosion sound data
extern uint32_t tankExplodeSamples;//Number of samples

extern uint8_t tankFireData[];//Tank firing sound data
extern uint32_t tankFireSamples;//Number of samples in that data

extern uint8_t saucerExplodeData[];//Saucer explosion sound data
extern uint32_t saucerExplodeSamples;//Number of samples in that data

//Initializes AC97
void sounds_init() {
	XAC97_HardReset(XPAR_AXI_AC97_0_BASEADDR);//Hard reset
	XAC97_AwaitCodecReady(XPAR_AXI_AC97_0_BASEADDR);//wait for codec

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_ExtendedAudioStat, 1);//Initialize hardware

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCM_DAC_Rate, FREQUENCY);//Set frequency

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVol, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_AuxOutVol, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVolMono, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCBeepVol, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCMOutVol, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_LineInVol, volume);//Set volume
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MicVol, volume);//Set volume

	XAC97_ClearFifos(XPAR_AXI_AC97_0_BASEADDR);//Clear the FIFO

	XAC97_mSetControl(XPAR_AXI_AC97_0_BASEADDR, AC97_ENABLE_IN_FIFO_INTERRUPT);//Enable FIFO interrupts
}

//Called at end of game to stop all sounds
void sounds_killSounds(){
	XAC97_ClearFifos(XPAR_AXI_AC97_0_BASEADDR);//Just clears the FIFO
}

//Changes the master volume
void sounds_VolumeChange(uint8_t oneForUpZeroForDown){
	if(oneForUpZeroForDown){//Volume up or down?
		volume -= VOLUME_INCREMENT;//Increase volume
		if(volume < 0){//Don't go above max volume
			volume = 0;
		}
	}else{
		volume += VOLUME_INCREMENT;//Decrease volume


		if(volume >= MIN_VOLUME){//Don't go below min volume
			volume = MIN_VOLUME;
		}
	}
	//We are just going to write the same volume to all the volume registers
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVol, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_AuxOutVol, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVolMono, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCBeepVol, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCMOutVol, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_LineInVol, volume);//Write volume to AC97
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MicVol, volume);//Write volume to AC97

}

//Interrupt handler for AC97 FIFO, called when half full
void sounds_ac97_interrupt_handler() {
	uint32_t i = 0;//For for loop
	for(i = 0; i < SAMPLES_TO_ADD; i++){//Let's put 128 in each time
		if(!(currentSample < numberOfSamples)){//If we are at the end of the sound, stop adding
			soundPlayingIndex = NOT_IN_USE;//Indicates that no sound is playing
			XAC97_mSetInFifoData(XPAR_AXI_AC97_0_BASEADDR, 0);//Write zeros for silence
		}else{
			XAC97_mSetInFifoData(XPAR_AXI_AC97_0_BASEADDR, soundData[currentSample]);//Otherwise write sound data to FIFO
			currentSample++;//Go onto the next sample
		}
	}
}

//Plays given sound
void sounds_playSound(sounds_soundType sound){
	//The following ifs are for sound proritization
	if(soundPlayingIndex == saucerFly2 && sound != saucerFly2 && sound != saucerExplode ){
		return;//Saucer flying 2 has precedence over everything exept saucer explosions of course
	}

	if(sound <= march4){//We do not want the alien swarm sound to cut off any other sounds
		if(soundPlayingIndex > march4 && soundPlayingIndex != NOT_IN_USE){//If a swarm sound and the playing sound is not a swarm sound
			return;//Do not play the swarm sound
		}
	}

	//Here we just load the sound data and number of samples, the interrupt handles writting the samples to the AC97 FIFO
	
	currentSample = 0;//Start at beginning
	soundPlayingIndex = sound;//Set currently playing sound
	switch(sound){//Write different data depending on which sound is played
	case march1://Marching sound 1
		soundData = march1Data;//Set sound data to be written to fifo
		numberOfSamples = march1Samples;//Set number of samples to write to fifo

		break;
	case march2://Marching sound 2
		soundData = march2Data;//Set sound data to be written to fifo
		numberOfSamples = march2Samples;//Set number of samples to write to fifo

		break;
	case march3://Marching sound 3
		soundData = march3Data;//Set sound data to be written to fifo
		numberOfSamples = march3Samples;//Set number of samples to write to fifo


		break;
	case march4://Marching sound 4
		soundData = march4Data;//Set sound data to be written to fifo
		numberOfSamples = march4Samples;//Set number of samples to write to fifo

		break;
	case tankFire://Tank firing sound
		soundData = tankFireData;//Set sound data to be written to fifo
		numberOfSamples = tankFireSamples;//Set number of samples to write to fifo


		break;
	case tankExplode://Tank explosion sound
		soundData = tankExplodeData;//Set sound data to be written to fifo
		numberOfSamples = tankExplodeSamples;//Set number of samples to write to fifo


		break;
	case saucerFly1://Saucer flying sound 1
		soundData = saucerFly1Data;//Set sound data to be written to fifo
		numberOfSamples = saucerFly1Samples;//Set number of samples to write to fifo


		break;
	case saucerFly2://Saucer flying sound 2
		soundData = saucerFly2Data;//Set sound data to be written to fifo
		numberOfSamples = saucerFly2Samples;//Set number of samples to write to fifo


		break;
	case saucerExplode://Saucer explosion sound
		soundData = saucerExplodeData;//Set sound data to be written to fifo
		numberOfSamples = saucerExplodeSamples;//Set number of samples to write to fifo

		break;
	default:
		//Should never be here
		break;
	}
}

