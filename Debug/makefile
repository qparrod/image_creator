################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir.mk
<<<<<<< HEAD
-include src/tiff/subdir.mk
-include src/subdir.mk
=======
-include src/subdir.mk
-include lib/subdir.mk
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
<<<<<<< HEAD
all: img

# Tool invocations
img: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++  -o"img" $(OBJS) $(USER_OBJS) $(LIBS)
=======
all: image

# Tool invocations
image: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -L"/home/quentin/Documents/PROJET_IMAGE/lib" -o"image" $(OBJS) $(USER_OBJS) $(LIBS)
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
<<<<<<< HEAD
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) img
=======
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) image
>>>>>>> d78d64ac8b8338f8ac2b303f30856f9276217fd8
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
