#include "sounds.h"
#include "xac97_l.h"
#include "xparameters.h"
#include "xio.h"
#include <stdio.h>

uint8_t * soundData;
uint32_t currentSample;
uint32_t numberOfSamples;


extern uint8_t march1Data[];
extern uint32_t march1Samples;

extern uint8_t march2Data[];
extern uint32_t march2Samples;

extern uint8_t march3Data[];
extern uint32_t march3Samples;

extern uint8_t march4Data[];
extern uint32_t march4Samples;

extern uint8_t saucerFly1Data[];
extern uint32_t saucerFly1Samples;

extern uint8_t saucerFly2Data[];
extern uint32_t saucerFly2Samples;

extern uint8_t tankExplodeData[];
extern uint32_t tankExplodeSamples;

extern uint8_t tankFireData[];
extern uint32_t tankFireSamples;

extern uint8_t saucerExplodeData[];
extern uint32_t saucerExplodeSamples;


void sounds_init() {
	XAC97_HardReset(XPAR_AXI_AC97_0_BASEADDR);
	XAC97_AwaitCodecReady(XPAR_AXI_AC97_0_BASEADDR);

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_ExtendedAudioStat, 1);

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCM_DAC_Rate, 11025);

	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVol, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_AuxOutVol, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MasterVolMono, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCBeepVol, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_PCMOutVol, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_LineInVol, AC97_VOL_MAX);
	XAC97_WriteReg(XPAR_AXI_AC97_0_BASEADDR, AC97_MicVol, AC97_VOL_MAX);

	XAC97_ClearFifos(XPAR_AXI_AC97_0_BASEADDR);

	XAC97_mSetControl(XPAR_AXI_AC97_0_BASEADDR, AC97_ENABLE_IN_FIFO_INTERRUPT);
}


void ac97_interrupt_handler() {
	uint32_t i = 0;
	for(i = 0; i < 256; i++){
		//xil_printf("Sample is %d\r\n" ,soundData[currentSample]);

		if(currentSample >= numberOfSamples){
			break;
		}
		XAC97_mSetInFifoData(XPAR_AXI_AC97_0_BASEADDR, soundData[currentSample]);
		currentSample++;
	}
}

void sounds_playSound(sounds_soundType sound){
	currentSample = 0;//Start at beginning
	switch(sound){
	case march1:
		soundData = march1Data;
		numberOfSamples = march1Samples;

		break;
	case march2:
		soundData = march2Data;
		numberOfSamples = march2Samples;


		break;
	case march3:
		soundData = march3Data;
		numberOfSamples = march3Samples;


		break;
	case march4:
		soundData = march4Data;
		numberOfSamples = march4Samples;


		break;
	case tankFire:
		soundData = tankFireData;
		numberOfSamples = tankFireSamples;


		break;
	case tankExplode:
		soundData = tankExplodeData;
		numberOfSamples = tankExplodeSamples;


		break;
	case saucerFly1:
		soundData = saucerFly1Data;
		numberOfSamples = saucerFly1Samples;


		break;
	case saucerFly2:
		soundData = saucerFly2Data;
		numberOfSamples = saucerFly2Samples;


		break;
	case saucerExplode:
		soundData = saucerExplodeData;
		numberOfSamples = saucerExplodeSamples;


		break;
	default:
		//Should never be here
		break;
	}
}

