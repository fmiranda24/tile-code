################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/generate_tiles.cpp \
../src/tile.cpp \
../src/tileGenerator.cpp 

OBJS += \
./src/generate_tiles.o \
./src/tile.o \
./src/tileGenerator.o 

CPP_DEPS += \
./src/generate_tiles.d \
./src/tile.d \
./src/tileGenerator.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


