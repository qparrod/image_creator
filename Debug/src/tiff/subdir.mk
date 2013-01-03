################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/tiff/HeaderTiff.cpp \
../src/tiff/ImageTiff.cpp 

OBJS += \
./src/tiff/HeaderTiff.o \
./src/tiff/ImageTiff.o 

CPP_DEPS += \
./src/tiff/HeaderTiff.d \
./src/tiff/ImageTiff.d 


# Each subdirectory must supply rules for building sources it contributes
src/tiff/%.o: ../src/tiff/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


