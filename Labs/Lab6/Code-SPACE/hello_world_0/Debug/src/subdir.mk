################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/aliens.c \
../src/main.c \
../src/march1.c \
../src/march2.c \
../src/march3.c \
../src/march4.c \
../src/marching.c \
../src/platform.c \
../src/saucerExplode.c \
../src/saucerFly1.c \
../src/saucerFly2.c \
../src/saucerFlying.c \
../src/scoreBoard.c \
../src/screenState.c \
../src/sounds.c \
../src/tankExplode.c \
../src/tankFire.c \
../src/thePITS.c \
../src/xac97_l.c 

LD_SRCS += \
../src/lscript.ld 

OBJS += \
./src/aliens.o \
./src/main.o \
./src/march1.o \
./src/march2.o \
./src/march3.o \
./src/march4.o \
./src/marching.o \
./src/platform.o \
./src/saucerExplode.o \
./src/saucerFly1.o \
./src/saucerFly2.o \
./src/saucerFlying.o \
./src/scoreBoard.o \
./src/screenState.o \
./src/sounds.o \
./src/tankExplode.o \
./src/tankFire.o \
./src/thePITS.o \
./src/xac97_l.o 

C_DEPS += \
./src/aliens.d \
./src/main.d \
./src/march1.d \
./src/march2.d \
./src/march3.d \
./src/march4.d \
./src/marching.d \
./src/platform.d \
./src/saucerExplode.d \
./src/saucerFly1.d \
./src/saucerFly2.d \
./src/saucerFlying.d \
./src/scoreBoard.d \
./src/screenState.d \
./src/sounds.d \
./src/tankExplode.d \
./src/tankFire.d \
./src/thePITS.d \
./src/xac97_l.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: MicroBlaze gcc compiler
	mb-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../hello_world_bsp_0/microblaze_0/include -mlittle-endian -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.20.b -mno-xl-soft-mul -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '


