################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/aliens.c \
../src/main.c \
../src/platform.c \
../src/scoreBoard.c \
../src/screenState.c 

LD_SRCS += \
../src/lscript.ld 

OBJS += \
./src/aliens.o \
./src/main.o \
./src/platform.o \
./src/scoreBoard.o \
./src/screenState.o 

C_DEPS += \
./src/aliens.d \
./src/main.d \
./src/platform.d \
./src/scoreBoard.d \
./src/screenState.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo Building file: $<
	@echo Invoking: MicroBlaze gcc compiler
	mb-gcc -Wall -O0 -g3 -c -fmessage-length=0 -I../../hello_world_bsp_0/microblaze_0/include -mlittle-endian -mxl-barrel-shift -mxl-pattern-compare -mcpu=v8.20.b -mno-xl-soft-mul -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo Finished building: $<
	@echo ' '


