################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BarberShop.cpp \
../src/BennyTheBarber.cpp \
../src/Customer.cpp 

OBJS += \
./src/BarberShop.o \
./src/BennyTheBarber.o \
./src/Customer.o 

CPP_DEPS += \
./src/BarberShop.d \
./src/BennyTheBarber.d \
./src/Customer.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


