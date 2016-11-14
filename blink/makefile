# ----- Configuration ---------------------------------------------------------

PROJECT_NAME = blink

# ----- Source code------------------------------------------------------------

include sdk.mk

SYMBOLS += NDEBUG

# xXx
INCLUDE_DIRS += ../libs
SOURCE_FILES += $(wildcard ../libs/xXx/os/*.cpp)
SOURCE_FILES += $(wildcard ../libs/xXx/support/*.cpp)

# FreeRTOS
INCLUDE_DIRS += ../libs/xXx/thirdparty/FreeRTOS/Source/include
SOURCE_FILES += $(wildcard ../libs/xXx/thirdparty/FreeRTOS/Source/*.c)

# FreeRTOS (Portable)
INCLUDE_DIRS += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/GCC/ARM_CM0
SOURCE_FILES += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/GCC/ARM_CM0/port.c
SOURCE_FILES += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/MemMang/heap_4.c

# Project
INCLUDE_DIRS += src
INCLUDE_DIRS += src/config
SOURCE_FILES += $(wildcard src/*.c)
SOURCE_FILES += $(wildcard src/*.cpp)

# ----- Libraries -------------------------------------------------------------

# LIBRARIES +=

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -march=armv6-m
GCCFLAGS += -mtune=cortex-m0
GCCFLAGS += -mthumb

# ASMFLAGS +=

COMMON_CFLAGS += -g
COMMON_CFLAGS += -Og

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

# CPPFLAGS +=

# LDFLAGS +=

# ----- Rules -----------------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-

include ../libs/xXx/utils/rules.mk

download: $(EXECUTABLE)
	arm-none-eabi-gdb -q -x download.gdb $<
