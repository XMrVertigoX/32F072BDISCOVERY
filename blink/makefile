# ----- Configuration ---------------------------------------------------------

TOOLCHAIN_PREFIX = arm-none-eabi-
PROJECT_NAME     = blink

# ----- Source code------------------------------------------------------------

include sdk.mk

SYMBOLS += NDEBUG

INCLUDE_DIRS += ../libs
# SOURCE_FILES += $(wildcard ../libs/xXx/os/*.cpp)
# SOURCE_FILES += $(wildcard ../libs/xXx/support/*.cpp)

# INCLUDE_DIRS += ../libs/FreeRTOSv9.0.0/FreeRTOS/Source/include
# INCLUDE_DIRS += ../libs/FreeRTOSv9.0.0/FreeRTOS/Source/portable/GCC/ARM_CM0
# SOURCE_FILES += $(wildcard ../libs/FreeRTOSv9.0.0/FreeRTOS/Source/*.c)
# SOURCE_FILES += ../libs/FreeRTOSv9.0.0/FreeRTOS/Source/portable/GCC/ARM_CM0/port.c
# SOURCE_FILES += ../libs/FreeRTOSv9.0.0/FreeRTOS/Source/portable/MemMang/heap_3.c

INCLUDE_DIRS += src
INCLUDE_DIRS += src/config
SOURCE_FILES += src/main.cpp

# ----- Libraries -------------------------------------------------------------

# LIBRARIES +=

# ----- Flags -----------------------------------------------------------------

GCCFLAGS += -march=armv6-m
GCCFLAGS += -mtune=cortex-m0plus
GCCFLAGS += -mthumb

# ASMFLAGS += -x assembler-with-cpp

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
