# ----- Configuration ---------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-
PROJECT_NAME     = blink

# ----- Source code------------------------------------------------------------

include sdk.mk

# SYMBOLS += NDEBUG

INCLUDE_DIRS += ../libs
SOURCE_FILES += $(wildcard ../libs/xXx/os/*.cpp)
SOURCE_FILES += $(wildcard ../libs/xXx/support/*.cpp)

INCLUDE_DIRS += ../libs/xXx/thirdparty/FreeRTOS/Source/include
INCLUDE_DIRS += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/GCC/ARM_CM0
SOURCE_FILES += $(wildcard ../libs/xXx/thirdparty/FreeRTOS/Source/*.c)
SOURCE_FILES += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/GCC/ARM_CM0/port.c
SOURCE_FILES += ../libs/xXx/thirdparty/FreeRTOS/Source/portable/MemMang/heap_3.c

INCLUDE_DIRS += src
INCLUDE_DIRS += src/config

SOURCE_FILES += src/main.cpp
SOURCE_FILES += src/blinktask.cpp

# ----- Libraries -------------------------------------------------------------

# LIBRARIES +=

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -march=armv6-m
GCCFLAGS += -mtune=cortex-m0plus
GCCFLAGS += -mthumb

# ASMFLAGS +=

COMMON_CFLAGS += -g
COMMON_CFLAGS += -Og

CFLAGS += -std=gnu11

CXXFLAGS += -std=gnu++14

# CPPFLAGS +=

# LDFLAGS +=

# ----- Rules -----------------------------------------------------------------

include ../libs/xXx/utils/rules.mk

download: $(EXECUTABLE)
	arm-none-eabi-gdb -q -x download.gdb $<
