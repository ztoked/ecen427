#include "stdint.h"

void thePITS_init();

void thePITS_setTicksCountDownFrom(uint32_t tickToCountDownFrom);

void thePITS_setCountEnableDisable(uint8_t enabled);

void thePITS_setInterruptsEnableDisable(uint8_t enabled);

void thePITS_setReloadEnableDisable(uint8_t enabled);

