# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = blink2

# ----- Directories -----------------------------------------------------------

CMSIS        = ../libs/STM32Cube_FW_F0_V1.6.0/Drivers/CMSIS
CMSIS_DEVICE = $(CMSIS)/Device/ST/STM32F0xx
HAL_DRIVER   = ../libs/STM32Cube_FW_F0_V1.6.0/Drivers/STM32F0xx_HAL_Driver

# ----- Source code------------------------------------------------------------

SYMBOLS += STM32F072xB

INCLUDE_DIRS += $(CMSIS)/Include
INCLUDE_DIRS += $(CMSIS_DEVICE)/Include
SOURCE_FILES += $(CMSIS_DEVICE)/Source/Templates/system_stm32f0xx.c
SOURCE_FILES += $(CMSIS_DEVICE)/Source/Templates/gcc/startup_stm32f072xb.s

INCLUDE_DIRS += $(HAL_DRIVER)/Inc
SOURCE_FILES += $(filter-out %_template.c,$(wildcard $(HAL_DRIVER)/Src/*.c))

INCLUDE_DIRS += Inc
SOURCE_FILES += $(wildcard Src/*.c)

# ----- Libraries -------------------------------------------------------------

LIBRARY_DIRS += ../libs/STM32Cube_FW_F0_V1.6.0/Drivers/CMSIS/Lib/GCC

LIBRARIES += arm_cortexM0l_math

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -march=armv6-m
GCCFLAGS += -mtune=cortex-m0plus
GCCFLAGS += -mthumb

COMMON_CFLAGS += -g
COMMON_CFLAGS += -Og

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

# CPPFLAGS +=

LDFLAGS += -T STM32F072RB_FLASH.ld

# ----- Rules -----------------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-

include ../libs/xXx/utils/rules.mk

download: $(EXECUTABLE)
	arm-none-eabi-gdb -q -x download.gdb $<
