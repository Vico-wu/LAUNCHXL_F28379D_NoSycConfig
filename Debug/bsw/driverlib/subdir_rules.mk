################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
bsw/driverlib/%.obj: ../bsw/driverlib/%.c $(GEN_OPTS) | $(GEN_FILES) $(GEN_MISC_FILES)
	@echo 'Building file: "$<"'
	@echo 'Invoking: C2000 Compiler'
	"C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/bin/cl2000" -v28 -ml -mt --cla_support=cla1 --float_support=fpu32 --tmu_support=tmu0 --vcu_support=vcu2 --include_path="C:/Users/WQU3WX/workspace_v12/F28379D_NoSysConfig_Demo" --include_path="C:/Users/WQU3WX/workspace_v12/F28379D_NoSysConfig_Demo/bsw/device" --include_path="C:/Users/WQU3WX/workspace_v12/F28379D_NoSysConfig_Demo/bsw/can" --include_path="C:/Users/WQU3WX/workspace_v12/F28379D_NoSysConfig_Demo/bsw/driverlib" --include_path="C:/ti/c2000/C2000Ware_5_02_00_00/driverlib/f2837xd/driverlib" --include_path="C:/ti/ccs1271/ccs/tools/compiler/ti-cgt-c2000_22.6.1.LTS/include" --define=CPU1 --define=_FLASH --define=_LAUNCHXL_F28379D -g --diag_warning=225 --diag_wrap=off --display_error_number --abi=coffabi --preproc_with_compile --preproc_dependency="bsw/driverlib/$(basename $(<F)).d_raw" --obj_directory="bsw/driverlib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


