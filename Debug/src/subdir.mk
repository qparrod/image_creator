################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
/home/quentin/Documents/PROJET_IMAGE/src/bmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/headerbmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/imagebmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/line.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/pixel.cpp 

OBJS += \
./src/bmp.o \
./src/headerbmp.o \
./src/imagebmp.o \
./src/line.o \
./src/pixel.o 

CPP_DEPS += \
./src/bmp.d \
./src/headerbmp.d \
./src/imagebmp.d \
./src/line.d \
./src/pixel.d 


# Each subdirectory must supply rules for building sources it contributes
src/bmp.o: /home/quentin/Documents/PROJET_IMAGE/src/bmp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/headerbmp.o: /home/quentin/Documents/PROJET_IMAGE/src/headerbmp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/imagebmp.o: /home/quentin/Documents/PROJET_IMAGE/src/imagebmp.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/line.o: /home/quentin/Documents/PROJET_IMAGE/src/line.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/pixel.o: /home/quentin/Documents/PROJET_IMAGE/src/pixel.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


