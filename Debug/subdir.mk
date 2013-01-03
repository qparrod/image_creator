################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
<<<<<<< HEAD
../main.cpp \
../traitement.cpp 

OBJS += \
./main.o \
./traitement.o 

CPP_DEPS += \
./main.d \
./traitement.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
=======
/home/quentin/Documents/PROJET_IMAGE/main.cpp 

OBJS += \
./main.o 

CPP_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
main.o: /home/quentin/Documents/PROJET_IMAGE/main.cpp
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


