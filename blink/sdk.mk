# ----- DIRECTORIES -----------------------------------------------------------

SDK    = ../libs/STM32F072B-Discovery_FW_V1.0.1

CMSIS     = $(SDK)/Libraries/CMSIS
DRIVER    = $(SDK)/Libraries/STM32F0xx_StdPeriph_Driver
UTILITIES = $(SDK)/UTILITIES/STM32F072B-Discovery

# ----- SYMBOLS ---------------------------------------------------------------

SYMBOLS += STM32F072

# ----- CMSIS -----------------------------------------------------------------

INCLUDE_DIRS += $(CMSIS)/Include
INCLUDE_DIRS += $(CMSIS)/Device/Include
SOURCE_FILES += $(CMSIS)/Device/Source/Templates/gcc_ride7/startup_stm32f072.s
SOURCE_FILES += $(CMSIS)/Device/Source/Templates/system_stm32f0xx.c

# ----- DRIVER ----------------------------------------------------------------

INCLUDE_DIRS += $(DRIVER)/inc
SOURCE_FILES += $(wildcard $(DRIVER)/src/*.c)

# ----- UTILITIES -------------------------------------------------------------

INCLUDE_DIRS += $(UTILITIES)
SOURCE_FILES += $(wildcard $(UTILITIES)/*.c)

# ----- FLAGS -----------------------------------------------------------------

CPPFLAGS += -include "src/config/stm32f0xx_conf.h"

LDFLAGS  += -T STM32F072RB_FLASH.ld
