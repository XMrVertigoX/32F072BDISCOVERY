# ----- DIRECTORIES -----------------------------------------------------------

SDK    = ../libs/STM32F0xx_StdPeriph_Lib_V1.5.0

CMSIS  = $(SDK)/Libraries/CMSIS
DEVICE = $(CMSIS)/Device/ST/STM32F0xx
DRIVER = $(SDK)/Libraries/STM32F0xx_StdPeriph_Driver
# TEMPLATES    = $(SDK)/Projects/STM32F0xx_StdPeriph_Templates

# ----- SYMBOLS ---------------------------------------------------------------

SYMBOLS += STM32F072

# ----- CMSIS -----------------------------------------------------------------

INCLUDE_DIRS += $(CMSIS)/Include
INCLUDE_DIRS += $(DEVICE)/Include
# SOURCE_FILES += $(DEVICE)/Source/Templates/gcc_ride7/startup_stm32f072.s
# SOURCE_FILES += $(DEVICE)/Source/Templates/system_stm32f0xx.c

# ----- DRIVER ----------------------------------------------------------------

INCLUDE_DIRS += $(DRIVER)/inc
SOURCE_FILES += $(wildcard $(DRIVER)/src/*.c)

# ----- FLAGS -----------------------------------------------------------------

CPPFLAGS += -include "src/config/stm32f0xx_conf.h"

LDFLAGS  += -T STM32F072RB_Flash.ld
