################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/command.c \
../src/commands.c \
../src/main.c \
../src/reader.c \
../src/sampllllvm.c 

OBJS += \
./src/command.o \
./src/commands.o \
./src/main.o \
./src/reader.o \
./src/sampllllvm.o 

C_DEPS += \
./src/command.d \
./src/commands.d \
./src/main.d \
./src/reader.d \
./src/sampllllvm.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


