# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = blink

# ----- Source code------------------------------------------------------------

SYMBOLS += STM32F072xB

# CMSIS
INCLUDE_DIRS += Drivers/CMSIS/Include
INCLUDE_DIRS += Drivers/CMSIS/Device/ST/STM32F0xx/Include
SOURCE_FILES += Drivers/CMSIS/Device/ST/STM32F0xx/Source/Templates/system_stm32f0xx.c
SOURCE_FILES += Drivers/CMSIS/Device/ST/STM32F0xx/Source/Templates/gcc/startup_stm32f072xb.s

# Driver
INCLUDE_DIRS += Drivers/STM32F0xx_HAL_Driver/Inc
SOURCE_FILES += $(wildcard Drivers/STM32F0xx_HAL_Driver/Src/*.c)

# FreeRTOS
INCLUDE_DIRS += Middlewares/Third_Party/FreeRTOS/Source/include
SOURCE_FILES += $(wildcard Middlewares/Third_Party/FreeRTOS/Source/*.c)

# FreeRTOS (Portable)
INCLUDE_DIRS += Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0
SOURCE_FILES += Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM0/port.c
SOURCE_FILES += Middlewares/Third_Party/FreeRTOS/Source/portable/MemMang/heap_4.c

# FreeRTOS (CMSIS RTOS)
INCLUDE_DIRS += Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS
SOURCE_FILES += Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS/cmsis_os.c

# Libraries
INCLUDE_DIRS += ../libs
SOURCE_FILES += $(wildcard ../libs/xXx/os/*.cpp)
SOURCE_FILES += $(wildcard ../libs/xXx/support/*.cpp)

# STM32CubeMX
INCLUDE_DIRS += Inc
SOURCE_FILES += $(wildcard Src/*.c)

# Application
INCLUDE_DIRS += App
SOURCE_FILES += $(wildcard App/*.cpp)

# ----- Libraries -------------------------------------------------------------

# LIBRARY_DIRS +=

# LIBRARIES +=

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -mcpu=cortex-m0plus
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
