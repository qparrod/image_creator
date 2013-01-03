################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
<<<<<<< HEAD
../src/Image.cpp \
../src/bmp.cpp \
../src/headerbmp.cpp \
../src/imagebmp.cpp \
../src/line.cpp \
../src/pixel.cpp 

OBJS += \
./src/Image.o \
=======
/home/quentin/Documents/PROJET_IMAGE/src/bmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/headerbmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/imagebmp.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/line.cpp \
/home/quentin/Documents/PROJET_IMAGE/src/pixel.cpp 

OBJS += \
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
./src/bmp.o \
./src/headerbmp.o \
./src/imagebmp.o \
./src/line.o \
./src/pixel.o 

CPP_DEPS += \
<<<<<<< HEAD
./src/Image.d \
=======
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
./src/bmp.d \
./src/headerbmp.d \
./src/imagebmp.d \
./src/line.d \
./src/pixel.d 


# Each subdirectory must supply rules for building sources it contributes
<<<<<<< HEAD
src/%.o: ../src/%.cpp
=======
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
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


