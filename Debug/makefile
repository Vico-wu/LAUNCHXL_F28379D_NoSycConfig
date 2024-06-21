################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./bsw/can/can_bsw.obj" \
"./bsw/device/F2837xD_CodeStartBranch.obj" \
"./bsw/device/device.obj" \
"./bsw/driverlib/adc.obj" \
"./bsw/driverlib/asysctl.obj" \
"./bsw/driverlib/can.obj" \
"./bsw/driverlib/cla.obj" \
"./bsw/driverlib/clb.obj" \
"./bsw/driverlib/cmpss.obj" \
"./bsw/driverlib/cputimer.obj" \
"./bsw/driverlib/dac.obj" \
"./bsw/driverlib/dcsm.obj" \
"./bsw/driverlib/dma.obj" \
"./bsw/driverlib/ecap.obj" \
"./bsw/driverlib/emif.obj" \
"./bsw/driverlib/epwm.obj" \
"./bsw/driverlib/eqep.obj" \
"./bsw/driverlib/flash.obj" \
"./bsw/driverlib/gpio.obj" \
"./bsw/driverlib/hrpwm.obj" \
"./bsw/driverlib/i2c.obj" \
"./bsw/driverlib/interrupt.obj" \
"./bsw/driverlib/ipc.obj" \
"./bsw/driverlib/mcbsp.obj" \
"./bsw/driverlib/memcfg.obj" \
"./bsw/driverlib/sci.obj" \
"./bsw/driverlib/sdfm.obj" \
"./bsw/driverlib/spi.obj" \
"./bsw/driverlib/sysctl.obj" \
"./bsw/driverlib/upp.obj" \
"./bsw/driverlib/usb.obj" \
"./bsw/driverlib/version.obj" \
"./bsw/driverlib/xbar.obj" \
"../2837x_FLASH_lnk_cpu1.cmd" \
$(GEN_CMDS__FLAG) \
-llibc.a \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include bsw/can/subdir_vars.mk
-include bsw/device/subdir_vars.mk
-include bsw/driverlib/subdir_vars.mk
-include subdir_rules.mk
-include bsw/can/subdir_rules.mk
-include bsw/device/subdir_rules.mk
-include bsw/driverlib/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
F28379D_NoSysConfig_Demo.out 

EXE_OUTPUTS__QUOTED += \
"F28379D_NoSysConfig_Demo.out" 


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "F28379D_NoSysConfig_Demo.out"

# Tool invocations
F28379D_NoSysConfig_Demo.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: "$@"'
	@echo 'Invoking: C2000 Linker'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --define=CPU1 --define=_FLASH --define=_LAUNCHXL_F28379D -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi -z -m"F28379D_NoSysConfig_Demo.map" --stack_size=0x200 --warn_sections -i"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/lib" -i"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --reread_libs --diag_wrap=off --display_error_number --xml_link_info="F28379D_NoSysConfig_Demo_linkInfo.xml" --rom_model -o "F28379D_NoSysConfig_Demo.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "bsw\can\can_bsw.obj" "bsw\device\F2837xD_CodeStartBranch.obj" "bsw\device\device.obj" "bsw\driverlib\adc.obj" "bsw\driverlib\asysctl.obj" "bsw\driverlib\can.obj" "bsw\driverlib\cla.obj" "bsw\driverlib\clb.obj" "bsw\driverlib\cmpss.obj" "bsw\driverlib\cputimer.obj" "bsw\driverlib\dac.obj" "bsw\driverlib\dcsm.obj" "bsw\driverlib\dma.obj" "bsw\driverlib\ecap.obj" "bsw\driverlib\emif.obj" "bsw\driverlib\epwm.obj" "bsw\driverlib\eqep.obj" "bsw\driverlib\flash.obj" "bsw\driverlib\gpio.obj" "bsw\driverlib\hrpwm.obj" "bsw\driverlib\i2c.obj" "bsw\driverlib\interrupt.obj" "bsw\driverlib\ipc.obj" "bsw\driverlib\mcbsp.obj" "bsw\driverlib\memcfg.obj" "bsw\driverlib\sci.obj" "bsw\driverlib\sdfm.obj" "bsw\driverlib\spi.obj" "bsw\driverlib\sysctl.obj" "bsw\driverlib\upp.obj" "bsw\driverlib\usb.obj" "bsw\driverlib\version.obj" "bsw\driverlib\xbar.obj" 
	-$(RM) "main.d" "bsw\can\can_bsw.d" "bsw\device\device.d" "bsw\driverlib\adc.d" "bsw\driverlib\asysctl.d" "bsw\driverlib\can.d" "bsw\driverlib\cla.d" "bsw\driverlib\clb.d" "bsw\driverlib\cmpss.d" "bsw\driverlib\cputimer.d" "bsw\driverlib\dac.d" "bsw\driverlib\dcsm.d" "bsw\driverlib\dma.d" "bsw\driverlib\ecap.d" "bsw\driverlib\emif.d" "bsw\driverlib\epwm.d" "bsw\driverlib\eqep.d" "bsw\driverlib\flash.d" "bsw\driverlib\gpio.d" "bsw\driverlib\hrpwm.d" "bsw\driverlib\i2c.d" "bsw\driverlib\interrupt.d" "bsw\driverlib\ipc.d" "bsw\driverlib\mcbsp.d" "bsw\driverlib\memcfg.d" "bsw\driverlib\sci.d" "bsw\driverlib\sdfm.d" "bsw\driverlib\spi.d" "bsw\driverlib\sysctl.d" "bsw\driverlib\upp.d" "bsw\driverlib\usb.d" "bsw\driverlib\version.d" "bsw\driverlib\xbar.d" 
	-$(RM) "bsw\device\F2837xD_CodeStartBranch.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

