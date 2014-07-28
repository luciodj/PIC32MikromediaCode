#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=mkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED="../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreen.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenAR1020.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenResistive.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/Beep.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST25VF016.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/cpld.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/drv_spi.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39LF400.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39VF040.c" "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/MCHP25LC256.c" ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c "../Microchip/MDD File System/FSIO.c" "../Microchip/MDD File System/SD-SPI.c" ../uMB/ADXL345.c Main.c Test/GDD_Screens.c Test/GDD_Resource.c Test/GDD_X_Event_Handler.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1281492746/TouchScreen.o ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o ${OBJECTDIR}/_ext/1281492746/Beep.o ${OBJECTDIR}/_ext/1281492746/SST25VF016.o ${OBJECTDIR}/_ext/1281492746/cpld.o ${OBJECTDIR}/_ext/1281492746/drv_spi.o ${OBJECTDIR}/_ext/1281492746/SST39LF400.o ${OBJECTDIR}/_ext/1281492746/SST39VF040.o ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o ${OBJECTDIR}/_ext/94801659/TimeDelay.o ${OBJECTDIR}/_ext/727548599/gfxepmp.o ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o ${OBJECTDIR}/_ext/727548599/TCON_Custom.o ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o ${OBJECTDIR}/_ext/727548599/drvTFT001.o ${OBJECTDIR}/_ext/727548599/drvTFT002.o ${OBJECTDIR}/_ext/727548599/HIT1270.o ${OBJECTDIR}/_ext/727548599/HX8347.o ${OBJECTDIR}/_ext/727548599/S1D13517.o ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o ${OBJECTDIR}/_ext/727548599/SSD1339.o ${OBJECTDIR}/_ext/727548599/SSD1926.o ${OBJECTDIR}/_ext/727548599/ST7529.o ${OBJECTDIR}/_ext/727548599/UC1610.o ${OBJECTDIR}/_ext/1612909467/GOL.o ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o ${OBJECTDIR}/_ext/1612909467/Palette.o ${OBJECTDIR}/_ext/1612909467/Primitive.o ${OBJECTDIR}/_ext/1612909467/Button.o ${OBJECTDIR}/_ext/1612909467/CheckBox.o ${OBJECTDIR}/_ext/1612909467/Meter.o ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o ${OBJECTDIR}/_ext/1612909467/Chart.o ${OBJECTDIR}/_ext/1612909467/RadioButton.o ${OBJECTDIR}/_ext/1612909467/ListBox.o ${OBJECTDIR}/_ext/1612909467/GroupBox.o ${OBJECTDIR}/_ext/1612909467/EditBox.o ${OBJECTDIR}/_ext/1612909467/Window.o ${OBJECTDIR}/_ext/1612909467/Slider.o ${OBJECTDIR}/_ext/1612909467/StaticText.o ${OBJECTDIR}/_ext/1612909467/RoundDial.o ${OBJECTDIR}/_ext/1612909467/Picture.o ${OBJECTDIR}/_ext/1612909467/ProgressBar.o ${OBJECTDIR}/_ext/1612909467/TextEntry.o ${OBJECTDIR}/_ext/2054364014/FSIO.o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o ${OBJECTDIR}/_ext/1360937979/ADXL345.o ${OBJECTDIR}/Main.o ${OBJECTDIR}/Test/GDD_Screens.o ${OBJECTDIR}/Test/GDD_Resource.o ${OBJECTDIR}/Test/GDD_X_Event_Handler.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d ${OBJECTDIR}/_ext/1281492746/Beep.o.d ${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d ${OBJECTDIR}/_ext/1281492746/cpld.o.d ${OBJECTDIR}/_ext/1281492746/drv_spi.o.d ${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d ${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d ${OBJECTDIR}/_ext/94801659/TimeDelay.o.d ${OBJECTDIR}/_ext/727548599/gfxepmp.o.d ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d ${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d ${OBJECTDIR}/_ext/727548599/drvTFT001.o.d ${OBJECTDIR}/_ext/727548599/drvTFT002.o.d ${OBJECTDIR}/_ext/727548599/HIT1270.o.d ${OBJECTDIR}/_ext/727548599/HX8347.o.d ${OBJECTDIR}/_ext/727548599/S1D13517.o.d ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d ${OBJECTDIR}/_ext/727548599/SSD1339.o.d ${OBJECTDIR}/_ext/727548599/SSD1926.o.d ${OBJECTDIR}/_ext/727548599/ST7529.o.d ${OBJECTDIR}/_ext/727548599/UC1610.o.d ${OBJECTDIR}/_ext/1612909467/GOL.o.d ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d ${OBJECTDIR}/_ext/1612909467/Palette.o.d ${OBJECTDIR}/_ext/1612909467/Primitive.o.d ${OBJECTDIR}/_ext/1612909467/Button.o.d ${OBJECTDIR}/_ext/1612909467/CheckBox.o.d ${OBJECTDIR}/_ext/1612909467/Meter.o.d ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d ${OBJECTDIR}/_ext/1612909467/Chart.o.d ${OBJECTDIR}/_ext/1612909467/RadioButton.o.d ${OBJECTDIR}/_ext/1612909467/ListBox.o.d ${OBJECTDIR}/_ext/1612909467/GroupBox.o.d ${OBJECTDIR}/_ext/1612909467/EditBox.o.d ${OBJECTDIR}/_ext/1612909467/Window.o.d ${OBJECTDIR}/_ext/1612909467/Slider.o.d ${OBJECTDIR}/_ext/1612909467/StaticText.o.d ${OBJECTDIR}/_ext/1612909467/RoundDial.o.d ${OBJECTDIR}/_ext/1612909467/Picture.o.d ${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d ${OBJECTDIR}/_ext/1612909467/TextEntry.o.d ${OBJECTDIR}/_ext/2054364014/FSIO.o.d ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d ${OBJECTDIR}/_ext/1360937979/ADXL345.o.d ${OBJECTDIR}/Main.o.d ${OBJECTDIR}/Test/GDD_Screens.o.d ${OBJECTDIR}/Test/GDD_Resource.o.d ${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1281492746/TouchScreen.o ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o ${OBJECTDIR}/_ext/1281492746/Beep.o ${OBJECTDIR}/_ext/1281492746/SST25VF016.o ${OBJECTDIR}/_ext/1281492746/cpld.o ${OBJECTDIR}/_ext/1281492746/drv_spi.o ${OBJECTDIR}/_ext/1281492746/SST39LF400.o ${OBJECTDIR}/_ext/1281492746/SST39VF040.o ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o ${OBJECTDIR}/_ext/94801659/TimeDelay.o ${OBJECTDIR}/_ext/727548599/gfxepmp.o ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o ${OBJECTDIR}/_ext/727548599/TCON_Custom.o ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o ${OBJECTDIR}/_ext/727548599/drvTFT001.o ${OBJECTDIR}/_ext/727548599/drvTFT002.o ${OBJECTDIR}/_ext/727548599/HIT1270.o ${OBJECTDIR}/_ext/727548599/HX8347.o ${OBJECTDIR}/_ext/727548599/S1D13517.o ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o ${OBJECTDIR}/_ext/727548599/SSD1339.o ${OBJECTDIR}/_ext/727548599/SSD1926.o ${OBJECTDIR}/_ext/727548599/ST7529.o ${OBJECTDIR}/_ext/727548599/UC1610.o ${OBJECTDIR}/_ext/1612909467/GOL.o ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o ${OBJECTDIR}/_ext/1612909467/Palette.o ${OBJECTDIR}/_ext/1612909467/Primitive.o ${OBJECTDIR}/_ext/1612909467/Button.o ${OBJECTDIR}/_ext/1612909467/CheckBox.o ${OBJECTDIR}/_ext/1612909467/Meter.o ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o ${OBJECTDIR}/_ext/1612909467/Chart.o ${OBJECTDIR}/_ext/1612909467/RadioButton.o ${OBJECTDIR}/_ext/1612909467/ListBox.o ${OBJECTDIR}/_ext/1612909467/GroupBox.o ${OBJECTDIR}/_ext/1612909467/EditBox.o ${OBJECTDIR}/_ext/1612909467/Window.o ${OBJECTDIR}/_ext/1612909467/Slider.o ${OBJECTDIR}/_ext/1612909467/StaticText.o ${OBJECTDIR}/_ext/1612909467/RoundDial.o ${OBJECTDIR}/_ext/1612909467/Picture.o ${OBJECTDIR}/_ext/1612909467/ProgressBar.o ${OBJECTDIR}/_ext/1612909467/TextEntry.o ${OBJECTDIR}/_ext/2054364014/FSIO.o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o ${OBJECTDIR}/_ext/1360937979/ADXL345.o ${OBJECTDIR}/Main.o ${OBJECTDIR}/Test/GDD_Screens.o ${OBJECTDIR}/Test/GDD_Resource.o ${OBJECTDIR}/Test/GDD_X_Event_Handler.o

# Source Files
SOURCEFILES=../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreen.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenAR1020.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenResistive.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/Beep.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST25VF016.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/cpld.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/drv_spi.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39LF400.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39VF040.c ../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/MCHP25LC256.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c ../Microchip/MDD File System/FSIO.c ../Microchip/MDD File System/SD-SPI.c ../uMB/ADXL345.c Main.c Test/GDD_Screens.c Test/GDD_Resource.c Test/GDD_X_Event_Handler.c


CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=24FJ256GB110
MP_LINKER_FILE_OPTION=,--script=p24FJ256GB110.gld
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1281492746/TouchScreen.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreen.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreen.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreen.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreenAR1020.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenAR1020.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenResistive.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/Beep.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/Beep.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/Beep.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/Beep.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/Beep.c"  -o ${OBJECTDIR}/_ext/1281492746/Beep.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/Beep.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/Beep.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST25VF016.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST25VF016.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST25VF016.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST25VF016.c"  -o ${OBJECTDIR}/_ext/1281492746/SST25VF016.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/cpld.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/cpld.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/cpld.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/cpld.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/cpld.c"  -o ${OBJECTDIR}/_ext/1281492746/cpld.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/cpld.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/cpld.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/drv_spi.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/drv_spi.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/drv_spi.c"  -o ${OBJECTDIR}/_ext/1281492746/drv_spi.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/drv_spi.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/drv_spi.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST39LF400.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST39LF400.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39LF400.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39LF400.c"  -o ${OBJECTDIR}/_ext/1281492746/SST39LF400.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST39VF040.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST39VF040.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39VF040.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39VF040.c"  -o ${OBJECTDIR}/_ext/1281492746/SST39VF040.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/MCHP25LC256.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/MCHP25LC256.c"  -o ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/94801659/TimeDelay.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/94801659 
	@${RM} ${OBJECTDIR}/_ext/94801659/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/_ext/94801659/TimeDelay.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c  -o ${OBJECTDIR}/_ext/94801659/TimeDelay.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/94801659/TimeDelay.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/94801659/TimeDelay.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/gfxepmp.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/gfxepmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/gfxepmp.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c  -o ${OBJECTDIR}/_ext/727548599/gfxepmp.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/gfxepmp.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/gfxepmp.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c  -o ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c  -o ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_Custom.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_Custom.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c  -o ${OBJECTDIR}/_ext/727548599/TCON_Custom.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_HX8238.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c  -o ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_HX8257.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c  -o ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c  -o ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/drvTFT001.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT001.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT001.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c  -o ${OBJECTDIR}/_ext/727548599/drvTFT001.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/drvTFT001.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/drvTFT001.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/drvTFT002.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT002.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT002.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c  -o ${OBJECTDIR}/_ext/727548599/drvTFT002.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/drvTFT002.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/drvTFT002.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/HIT1270.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/HIT1270.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/HIT1270.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c  -o ${OBJECTDIR}/_ext/727548599/HIT1270.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/HIT1270.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/HIT1270.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/HX8347.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/HX8347.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/HX8347.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c  -o ${OBJECTDIR}/_ext/727548599/HX8347.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/HX8347.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/HX8347.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/S1D13517.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/S1D13517.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/S1D13517.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c  -o ${OBJECTDIR}/_ext/727548599/S1D13517.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/S1D13517.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/S1D13517.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c  -o ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SSD1339.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1339.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1339.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c  -o ${OBJECTDIR}/_ext/727548599/SSD1339.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SSD1339.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SSD1339.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SSD1926.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1926.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1926.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c  -o ${OBJECTDIR}/_ext/727548599/SSD1926.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SSD1926.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SSD1926.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/ST7529.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/ST7529.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/ST7529.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c  -o ${OBJECTDIR}/_ext/727548599/ST7529.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/ST7529.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/ST7529.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/UC1610.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/UC1610.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/UC1610.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c  -o ${OBJECTDIR}/_ext/727548599/UC1610.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/UC1610.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/UC1610.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOL.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOL.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOL.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c  -o ${OBJECTDIR}/_ext/1612909467/GOL.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOL.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOL.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c  -o ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c  -o ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Palette.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Palette.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c  -o ${OBJECTDIR}/_ext/1612909467/Palette.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Palette.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Palette.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Primitive.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Primitive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Primitive.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c  -o ${OBJECTDIR}/_ext/1612909467/Primitive.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Primitive.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Primitive.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Button.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Button.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c  -o ${OBJECTDIR}/_ext/1612909467/Button.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Button.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Button.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/CheckBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/CheckBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/CheckBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c  -o ${OBJECTDIR}/_ext/1612909467/CheckBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/CheckBox.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/CheckBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Meter.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Meter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Meter.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c  -o ${OBJECTDIR}/_ext/1612909467/Meter.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Meter.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Meter.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/DigitalMeter.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c  -o ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Chart.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Chart.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c  -o ${OBJECTDIR}/_ext/1612909467/Chart.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Chart.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Chart.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/RadioButton.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RadioButton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RadioButton.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c  -o ${OBJECTDIR}/_ext/1612909467/RadioButton.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/RadioButton.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/RadioButton.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/ListBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ListBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ListBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c  -o ${OBJECTDIR}/_ext/1612909467/ListBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/ListBox.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/ListBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GroupBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GroupBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GroupBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c  -o ${OBJECTDIR}/_ext/1612909467/GroupBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GroupBox.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GroupBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/EditBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/EditBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/EditBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c  -o ${OBJECTDIR}/_ext/1612909467/EditBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/EditBox.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/EditBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Window.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Window.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Window.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c  -o ${OBJECTDIR}/_ext/1612909467/Window.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Window.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Window.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Slider.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Slider.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c  -o ${OBJECTDIR}/_ext/1612909467/Slider.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Slider.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Slider.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/StaticText.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/StaticText.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/StaticText.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c  -o ${OBJECTDIR}/_ext/1612909467/StaticText.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/StaticText.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/StaticText.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/RoundDial.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RoundDial.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RoundDial.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c  -o ${OBJECTDIR}/_ext/1612909467/RoundDial.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/RoundDial.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/RoundDial.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Picture.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Picture.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Picture.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c  -o ${OBJECTDIR}/_ext/1612909467/Picture.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Picture.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Picture.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/ProgressBar.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ProgressBar.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c  -o ${OBJECTDIR}/_ext/1612909467/ProgressBar.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/TextEntry.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/TextEntry.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/TextEntry.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c  -o ${OBJECTDIR}/_ext/1612909467/TextEntry.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/TextEntry.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/TextEntry.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/2054364014/FSIO.o: ../Microchip/MDD\ File\ System/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../Microchip/MDD File System/FSIO.c"  -o ${OBJECTDIR}/_ext/2054364014/FSIO.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/2054364014/FSIO.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/2054364014/SD-SPI.o: ../Microchip/MDD\ File\ System/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../Microchip/MDD File System/SD-SPI.c"  -o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937979/ADXL345.o: ../uMB/ADXL345.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/ADXL345.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/ADXL345.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../uMB/ADXL345.c  -o ${OBJECTDIR}/_ext/1360937979/ADXL345.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1360937979/ADXL345.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/ADXL345.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Main.o: Main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/Main.o.d 
	@${RM} ${OBJECTDIR}/Main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Main.c  -o ${OBJECTDIR}/Main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Main.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Main.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_Screens.o: Test/GDD_Screens.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_Screens.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_Screens.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_Screens.c  -o ${OBJECTDIR}/Test/GDD_Screens.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_Screens.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_Screens.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_Resource.o: Test/GDD_Resource.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_Resource.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_Resource.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_Resource.c  -o ${OBJECTDIR}/Test/GDD_Resource.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_Resource.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_Resource.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_X_Event_Handler.o: Test/GDD_X_Event_Handler.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_X_Event_Handler.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_X_Event_Handler.c  -o ${OBJECTDIR}/Test/GDD_X_Event_Handler.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d"      -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1    -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
else
${OBJECTDIR}/_ext/1281492746/TouchScreen.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreen.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreen.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreen.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreen.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreenAR1020.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenAR1020.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreenAR1020.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/TouchScreenResistive.c"  -o ${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/TouchScreenResistive.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/Beep.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/Beep.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/Beep.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/Beep.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/Beep.c"  -o ${OBJECTDIR}/_ext/1281492746/Beep.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/Beep.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/Beep.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST25VF016.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST25VF016.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST25VF016.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST25VF016.c"  -o ${OBJECTDIR}/_ext/1281492746/SST25VF016.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST25VF016.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/cpld.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/cpld.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/cpld.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/cpld.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/cpld.c"  -o ${OBJECTDIR}/_ext/1281492746/cpld.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/cpld.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/cpld.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/drv_spi.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/drv_spi.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/drv_spi.c"  -o ${OBJECTDIR}/_ext/1281492746/drv_spi.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/drv_spi.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/drv_spi.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST39LF400.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST39LF400.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39LF400.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39LF400.c"  -o ${OBJECTDIR}/_ext/1281492746/SST39LF400.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST39LF400.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/SST39VF040.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/SST39VF040.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/SST39VF040.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/SST39VF040.c"  -o ${OBJECTDIR}/_ext/1281492746/SST39VF040.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/SST39VF040.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o: ../../../MAL/microchip_solutions_v2013-02-15/Board\ Support\ Package/MCHP25LC256.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1281492746 
	@${RM} ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d 
	@${RM} ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../../../MAL/microchip_solutions_v2013-02-15/Board Support Package/MCHP25LC256.c"  -o ${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1281492746/MCHP25LC256.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/94801659/TimeDelay.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/94801659 
	@${RM} ${OBJECTDIR}/_ext/94801659/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/_ext/94801659/TimeDelay.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Common/TimeDelay.c  -o ${OBJECTDIR}/_ext/94801659/TimeDelay.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/94801659/TimeDelay.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/94801659/TimeDelay.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/gfxepmp.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/gfxepmp.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/gfxepmp.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/gfxepmp.c  -o ${OBJECTDIR}/_ext/727548599/gfxepmp.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/gfxepmp.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/gfxepmp.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxDrv.c  -o ${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/mchpGfxDrv.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/mchpGfxLCC.c  -o ${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/mchpGfxLCC.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_Custom.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_Custom.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_Custom.c  -o ${OBJECTDIR}/_ext/727548599/TCON_Custom.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_Custom.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_HX8238.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8238.c  -o ${OBJECTDIR}/_ext/727548599/TCON_HX8238.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_HX8238.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_HX8257.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_HX8257.c  -o ${OBJECTDIR}/_ext/727548599/TCON_HX8257.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_HX8257.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/TCON_SSD1289.c  -o ${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/TCON_SSD1289.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/drvTFT001.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT001.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT001.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT001.c  -o ${OBJECTDIR}/_ext/727548599/drvTFT001.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/drvTFT001.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/drvTFT001.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/drvTFT002.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT002.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/drvTFT002.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/drvTFT002.c  -o ${OBJECTDIR}/_ext/727548599/drvTFT002.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/drvTFT002.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/drvTFT002.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/HIT1270.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/HIT1270.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/HIT1270.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HIT1270.c  -o ${OBJECTDIR}/_ext/727548599/HIT1270.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/HIT1270.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/HIT1270.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/HX8347.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/HX8347.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/HX8347.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/HX8347.c  -o ${OBJECTDIR}/_ext/727548599/HX8347.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/HX8347.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/HX8347.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/S1D13517.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/S1D13517.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/S1D13517.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/S1D13517.c  -o ${OBJECTDIR}/_ext/727548599/S1D13517.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/S1D13517.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/S1D13517.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SH1101A_SSD1303.c  -o ${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SH1101A_SSD1303.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SSD1339.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1339.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1339.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1339.c  -o ${OBJECTDIR}/_ext/727548599/SSD1339.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SSD1339.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SSD1339.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/SSD1926.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1926.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/SSD1926.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/SSD1926.c  -o ${OBJECTDIR}/_ext/727548599/SSD1926.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/SSD1926.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/SSD1926.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/ST7529.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/ST7529.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/ST7529.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/ST7529.c  -o ${OBJECTDIR}/_ext/727548599/ST7529.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/ST7529.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/ST7529.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/727548599/UC1610.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/727548599 
	@${RM} ${OBJECTDIR}/_ext/727548599/UC1610.o.d 
	@${RM} ${OBJECTDIR}/_ext/727548599/UC1610.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Drivers/UC1610.c  -o ${OBJECTDIR}/_ext/727548599/UC1610.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/727548599/UC1610.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/727548599/UC1610.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOL.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOL.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOL.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOL.c  -o ${OBJECTDIR}/_ext/1612909467/GOL.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOL.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOL.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLFontDefault.c  -o ${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOLFontDefault.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GOLSchemeDefault.c  -o ${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GOLSchemeDefault.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Palette.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Palette.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Palette.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Palette.c  -o ${OBJECTDIR}/_ext/1612909467/Palette.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Palette.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Palette.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Primitive.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Primitive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Primitive.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Primitive.c  -o ${OBJECTDIR}/_ext/1612909467/Primitive.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Primitive.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Primitive.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Button.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Button.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Button.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Button.c  -o ${OBJECTDIR}/_ext/1612909467/Button.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Button.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Button.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/CheckBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/CheckBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/CheckBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/CheckBox.c  -o ${OBJECTDIR}/_ext/1612909467/CheckBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/CheckBox.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/CheckBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Meter.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Meter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Meter.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Meter.c  -o ${OBJECTDIR}/_ext/1612909467/Meter.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Meter.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Meter.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/DigitalMeter.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/DigitalMeter.c  -o ${OBJECTDIR}/_ext/1612909467/DigitalMeter.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/DigitalMeter.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Chart.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Chart.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Chart.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Chart.c  -o ${OBJECTDIR}/_ext/1612909467/Chart.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Chart.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Chart.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/RadioButton.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RadioButton.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RadioButton.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RadioButton.c  -o ${OBJECTDIR}/_ext/1612909467/RadioButton.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/RadioButton.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/RadioButton.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/ListBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ListBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ListBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ListBox.c  -o ${OBJECTDIR}/_ext/1612909467/ListBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/ListBox.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/ListBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/GroupBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GroupBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/GroupBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/GroupBox.c  -o ${OBJECTDIR}/_ext/1612909467/GroupBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/GroupBox.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/GroupBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/EditBox.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/EditBox.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/EditBox.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/EditBox.c  -o ${OBJECTDIR}/_ext/1612909467/EditBox.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/EditBox.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/EditBox.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Window.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Window.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Window.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Window.c  -o ${OBJECTDIR}/_ext/1612909467/Window.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Window.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Window.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Slider.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Slider.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Slider.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Slider.c  -o ${OBJECTDIR}/_ext/1612909467/Slider.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Slider.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Slider.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/StaticText.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/StaticText.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/StaticText.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/StaticText.c  -o ${OBJECTDIR}/_ext/1612909467/StaticText.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/StaticText.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/StaticText.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/RoundDial.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RoundDial.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/RoundDial.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/RoundDial.c  -o ${OBJECTDIR}/_ext/1612909467/RoundDial.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/RoundDial.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/RoundDial.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/Picture.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Picture.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/Picture.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/Picture.c  -o ${OBJECTDIR}/_ext/1612909467/Picture.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/Picture.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/Picture.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/ProgressBar.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/ProgressBar.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/ProgressBar.c  -o ${OBJECTDIR}/_ext/1612909467/ProgressBar.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/ProgressBar.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1612909467/TextEntry.o: ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1612909467 
	@${RM} ${OBJECTDIR}/_ext/1612909467/TextEntry.o.d 
	@${RM} ${OBJECTDIR}/_ext/1612909467/TextEntry.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../../../MAL/microchip_solutions_v2013-02-15/Microchip/Graphics/TextEntry.c  -o ${OBJECTDIR}/_ext/1612909467/TextEntry.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1612909467/TextEntry.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1612909467/TextEntry.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/2054364014/FSIO.o: ../Microchip/MDD\ File\ System/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../Microchip/MDD File System/FSIO.c"  -o ${OBJECTDIR}/_ext/2054364014/FSIO.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/2054364014/FSIO.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/2054364014/SD-SPI.o: ../Microchip/MDD\ File\ System/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  "../Microchip/MDD File System/SD-SPI.c"  -o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/_ext/1360937979/ADXL345.o: ../uMB/ADXL345.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/ADXL345.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/ADXL345.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  ../uMB/ADXL345.c  -o ${OBJECTDIR}/_ext/1360937979/ADXL345.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1360937979/ADXL345.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/ADXL345.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Main.o: Main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/Main.o.d 
	@${RM} ${OBJECTDIR}/Main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Main.c  -o ${OBJECTDIR}/Main.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Main.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Main.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_Screens.o: Test/GDD_Screens.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_Screens.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_Screens.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_Screens.c  -o ${OBJECTDIR}/Test/GDD_Screens.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_Screens.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_Screens.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_Resource.o: Test/GDD_Resource.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_Resource.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_Resource.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_Resource.c  -o ${OBJECTDIR}/Test/GDD_Resource.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_Resource.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_Resource.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
${OBJECTDIR}/Test/GDD_X_Event_Handler.o: Test/GDD_X_Event_Handler.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/Test 
	@${RM} ${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d 
	@${RM} ${OBJECTDIR}/Test/GDD_X_Event_Handler.o 
	${MP_CC} $(MP_EXTRA_CC_PRE)  Test/GDD_X_Event_Handler.c  -o ${OBJECTDIR}/Test/GDD_X_Event_Handler.o  -c -mcpu=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d"        -g -omf=elf -O0 -I"." -I"../Board Support Package" -I"../Microchip/Include" -I"../uMB" -I"Test" -msmart-io=1 -Wall -msfr-warn=off
	@${FIXDEPS} "${OBJECTDIR}/Test/GDD_X_Event_Handler.o.d" $(SILENT)  -rsi ${MP_CC_DIR}../ 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemblePreproc
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -omf=elf -Wl,,--defsym=__MPLAB_BUILD=1,--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_PK3=1,$(MP_LINKER_FILE_OPTION),--heap=1024,--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--no-force-link,--smart-io$(MP_EXTRA_LD_POST) 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -o dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -mcpu=$(MP_PROCESSOR_OPTION)        -omf=elf -Wl,,--defsym=__MPLAB_BUILD=1,$(MP_LINKER_FILE_OPTION),--heap=1024,--stack=16,--check-sections,--data-init,--pack-data,--handles,--isr,--no-gc-sections,--fill-upper=0,--stackguard=16,--no-force-link,--smart-io$(MP_EXTRA_LD_POST) 
	${MP_CC_DIR}/xc16-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/7.Solution.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} -a  -omf=elf 
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell "${PATH_TO_IDE_BIN}"mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
