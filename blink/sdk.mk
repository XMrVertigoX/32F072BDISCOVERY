SDK   = ../libs/STM32F0xx_StdPeriph_Lib_V1.5.0

CMSIS     = $(SDK)/Libraries/CMSIS
DRIVER    = $(SDK)/Libraries/STM32F0xx_StdPeriph_Driver
TEMPLATES = $(SDK)/Projects/STM32F0xx_StdPeriph_Templates

# -----------------------------------------------------------------------------

SYMBOLS += STM32F072

# -----------------------------------------------------------------------------

INCLUDE_DIRS += $(CMSIS)/Include
INCLUDE_DIRS += $(CMSIS)/Device/ST/STM32F0xx/Include
SOURCE_FILES += $(CMSIS)/Device/ST/STM32F0xx/Source/Templates/gcc_ride7/startup_stm32f072.s

INCLUDE_DIRS += $(DRIVER)/inc
SOURCE_FILES += $(wildcard $(DRIVER)/src/*.c)

SOURCE_FILES += $(TEMPLATES)/system_stm32f0xx.c

# -----------------------------------------------------------------------------

CPPFLAGS += -include "src/config/stm32f0xx_conf.h"

LDFLAGS += -T $(TEMPLATES)/TrueSTUDIO/STM32F072/STM32F072VB_FLASH.ld
