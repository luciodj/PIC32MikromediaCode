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
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../Microchip/Graphics/Primitive.c ../Microchip/Common/TimeDelay.c ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c "../Microchip/MDD File System/FSIO.c" "../Microchip/MDD File System/SD-SPI.c" bitmaps.c ../Microchip/Graphics/GOLFontDefault.c ../uMB/drv_spi.c ../uMB/M25P80.c ../uMB/TouchScreen.c ../uMB/uMedia.c ../uMB/VS1053.c ../uMB/TouchGrid.c ../uMB/TouchScreenResistive.c Alarm.c solari.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1713430119/Primitive.o ${OBJECTDIR}/_ext/221508487/TimeDelay.o ${OBJECTDIR}/_ext/121592547/HX8347.o ${OBJECTDIR}/_ext/2054364014/FSIO.o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o ${OBJECTDIR}/bitmaps.o ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o ${OBJECTDIR}/_ext/1360937979/drv_spi.o ${OBJECTDIR}/_ext/1360937979/M25P80.o ${OBJECTDIR}/_ext/1360937979/TouchScreen.o ${OBJECTDIR}/_ext/1360937979/uMedia.o ${OBJECTDIR}/_ext/1360937979/VS1053.o ${OBJECTDIR}/_ext/1360937979/TouchGrid.o ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o ${OBJECTDIR}/Alarm.o ${OBJECTDIR}/solari.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1713430119/Primitive.o.d ${OBJECTDIR}/_ext/221508487/TimeDelay.o.d ${OBJECTDIR}/_ext/121592547/HX8347.o.d ${OBJECTDIR}/_ext/2054364014/FSIO.o.d ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d ${OBJECTDIR}/bitmaps.o.d ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d ${OBJECTDIR}/_ext/1360937979/drv_spi.o.d ${OBJECTDIR}/_ext/1360937979/M25P80.o.d ${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d ${OBJECTDIR}/_ext/1360937979/uMedia.o.d ${OBJECTDIR}/_ext/1360937979/VS1053.o.d ${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d ${OBJECTDIR}/Alarm.o.d ${OBJECTDIR}/solari.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1713430119/Primitive.o ${OBJECTDIR}/_ext/221508487/TimeDelay.o ${OBJECTDIR}/_ext/121592547/HX8347.o ${OBJECTDIR}/_ext/2054364014/FSIO.o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o ${OBJECTDIR}/bitmaps.o ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o ${OBJECTDIR}/_ext/1360937979/drv_spi.o ${OBJECTDIR}/_ext/1360937979/M25P80.o ${OBJECTDIR}/_ext/1360937979/TouchScreen.o ${OBJECTDIR}/_ext/1360937979/uMedia.o ${OBJECTDIR}/_ext/1360937979/VS1053.o ${OBJECTDIR}/_ext/1360937979/TouchGrid.o ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o ${OBJECTDIR}/Alarm.o ${OBJECTDIR}/solari.o

# Source Files
SOURCEFILES=../Microchip/Graphics/Primitive.c ../Microchip/Common/TimeDelay.c ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c ../Microchip/MDD File System/FSIO.c ../Microchip/MDD File System/SD-SPI.c bitmaps.c ../Microchip/Graphics/GOLFontDefault.c ../uMB/drv_spi.c ../uMB/M25P80.c ../uMB/TouchScreen.c ../uMB/uMedia.c ../uMB/VS1053.c ../uMB/TouchGrid.c ../uMB/TouchScreenResistive.c Alarm.c solari.c


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
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX460F512L
MP_LINKER_FILE_OPTION=
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1713430119/Primitive.o: ../Microchip/Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1713430119 
	@${RM} ${OBJECTDIR}/_ext/1713430119/Primitive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1713430119/Primitive.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1713430119/Primitive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1713430119/Primitive.o.d" -o ${OBJECTDIR}/_ext/1713430119/Primitive.o ../Microchip/Graphics/Primitive.c   
	
${OBJECTDIR}/_ext/221508487/TimeDelay.o: ../Microchip/Common/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/221508487 
	@${RM} ${OBJECTDIR}/_ext/221508487/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/_ext/221508487/TimeDelay.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/221508487/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/221508487/TimeDelay.o.d" -o ${OBJECTDIR}/_ext/221508487/TimeDelay.o ../Microchip/Common/TimeDelay.c   
	
${OBJECTDIR}/_ext/121592547/HX8347.o: ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/121592547 
	@${RM} ${OBJECTDIR}/_ext/121592547/HX8347.o.d 
	@${RM} ${OBJECTDIR}/_ext/121592547/HX8347.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/121592547/HX8347.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/121592547/HX8347.o.d" -o ${OBJECTDIR}/_ext/121592547/HX8347.o ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c   
	
${OBJECTDIR}/_ext/2054364014/FSIO.o: ../Microchip/MDD\ File\ System/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" -o ${OBJECTDIR}/_ext/2054364014/FSIO.o "../Microchip/MDD File System/FSIO.c"   
	
${OBJECTDIR}/_ext/2054364014/SD-SPI.o: ../Microchip/MDD\ File\ System/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" -o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o "../Microchip/MDD File System/SD-SPI.c"   
	
${OBJECTDIR}/bitmaps.o: bitmaps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/bitmaps.o.d 
	@${RM} ${OBJECTDIR}/bitmaps.o 
	@${FIXDEPS} "${OBJECTDIR}/bitmaps.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/bitmaps.o.d" -o ${OBJECTDIR}/bitmaps.o bitmaps.c   
	
${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o: ../Microchip/Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1713430119 
	@${RM} ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d" -o ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o ../Microchip/Graphics/GOLFontDefault.c   
	
${OBJECTDIR}/_ext/1360937979/drv_spi.o: ../uMB/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/drv_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/drv_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/drv_spi.o.d" -o ${OBJECTDIR}/_ext/1360937979/drv_spi.o ../uMB/drv_spi.c   
	
${OBJECTDIR}/_ext/1360937979/M25P80.o: ../uMB/M25P80.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/M25P80.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/M25P80.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/M25P80.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/M25P80.o.d" -o ${OBJECTDIR}/_ext/1360937979/M25P80.o ../uMB/M25P80.c   
	
${OBJECTDIR}/_ext/1360937979/TouchScreen.o: ../uMB/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreen.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchScreen.o ../uMB/TouchScreen.c   
	
${OBJECTDIR}/_ext/1360937979/uMedia.o: ../uMB/uMedia.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/uMedia.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/uMedia.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/uMedia.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/uMedia.o.d" -o ${OBJECTDIR}/_ext/1360937979/uMedia.o ../uMB/uMedia.c   
	
${OBJECTDIR}/_ext/1360937979/VS1053.o: ../uMB/VS1053.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/VS1053.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/VS1053.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/VS1053.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/VS1053.o.d" -o ${OBJECTDIR}/_ext/1360937979/VS1053.o ../uMB/VS1053.c   
	
${OBJECTDIR}/_ext/1360937979/TouchGrid.o: ../uMB/TouchGrid.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchGrid.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchGrid.o ../uMB/TouchGrid.c   
	
${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o: ../uMB/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o ../uMB/TouchScreenResistive.c   
	
${OBJECTDIR}/Alarm.o: Alarm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/Alarm.o.d 
	@${RM} ${OBJECTDIR}/Alarm.o 
	@${FIXDEPS} "${OBJECTDIR}/Alarm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/Alarm.o.d" -o ${OBJECTDIR}/Alarm.o Alarm.c   
	
${OBJECTDIR}/solari.o: solari.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/solari.o.d 
	@${RM} ${OBJECTDIR}/solari.o 
	@${FIXDEPS} "${OBJECTDIR}/solari.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD3=1 -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/solari.o.d" -o ${OBJECTDIR}/solari.o solari.c   
	
else
${OBJECTDIR}/_ext/1713430119/Primitive.o: ../Microchip/Graphics/Primitive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1713430119 
	@${RM} ${OBJECTDIR}/_ext/1713430119/Primitive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1713430119/Primitive.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1713430119/Primitive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1713430119/Primitive.o.d" -o ${OBJECTDIR}/_ext/1713430119/Primitive.o ../Microchip/Graphics/Primitive.c   
	
${OBJECTDIR}/_ext/221508487/TimeDelay.o: ../Microchip/Common/TimeDelay.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/221508487 
	@${RM} ${OBJECTDIR}/_ext/221508487/TimeDelay.o.d 
	@${RM} ${OBJECTDIR}/_ext/221508487/TimeDelay.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/221508487/TimeDelay.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/221508487/TimeDelay.o.d" -o ${OBJECTDIR}/_ext/221508487/TimeDelay.o ../Microchip/Common/TimeDelay.c   
	
${OBJECTDIR}/_ext/121592547/HX8347.o: ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/121592547 
	@${RM} ${OBJECTDIR}/_ext/121592547/HX8347.o.d 
	@${RM} ${OBJECTDIR}/_ext/121592547/HX8347.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/121592547/HX8347.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/121592547/HX8347.o.d" -o ${OBJECTDIR}/_ext/121592547/HX8347.o ../../Mikromedia/Microchip/Graphics/Drivers/HX8347.c   
	
${OBJECTDIR}/_ext/2054364014/FSIO.o: ../Microchip/MDD\ File\ System/FSIO.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/FSIO.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/2054364014/FSIO.o.d" -o ${OBJECTDIR}/_ext/2054364014/FSIO.o "../Microchip/MDD File System/FSIO.c"   
	
${OBJECTDIR}/_ext/2054364014/SD-SPI.o: ../Microchip/MDD\ File\ System/SD-SPI.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/2054364014 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d 
	@${RM} ${OBJECTDIR}/_ext/2054364014/SD-SPI.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/2054364014/SD-SPI.o.d" -o ${OBJECTDIR}/_ext/2054364014/SD-SPI.o "../Microchip/MDD File System/SD-SPI.c"   
	
${OBJECTDIR}/bitmaps.o: bitmaps.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/bitmaps.o.d 
	@${RM} ${OBJECTDIR}/bitmaps.o 
	@${FIXDEPS} "${OBJECTDIR}/bitmaps.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/bitmaps.o.d" -o ${OBJECTDIR}/bitmaps.o bitmaps.c   
	
${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o: ../Microchip/Graphics/GOLFontDefault.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1713430119 
	@${RM} ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d 
	@${RM} ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o.d" -o ${OBJECTDIR}/_ext/1713430119/GOLFontDefault.o ../Microchip/Graphics/GOLFontDefault.c   
	
${OBJECTDIR}/_ext/1360937979/drv_spi.o: ../uMB/drv_spi.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/drv_spi.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/drv_spi.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/drv_spi.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/drv_spi.o.d" -o ${OBJECTDIR}/_ext/1360937979/drv_spi.o ../uMB/drv_spi.c   
	
${OBJECTDIR}/_ext/1360937979/M25P80.o: ../uMB/M25P80.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/M25P80.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/M25P80.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/M25P80.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/M25P80.o.d" -o ${OBJECTDIR}/_ext/1360937979/M25P80.o ../uMB/M25P80.c   
	
${OBJECTDIR}/_ext/1360937979/TouchScreen.o: ../uMB/TouchScreen.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreen.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchScreen.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchScreen.o ../uMB/TouchScreen.c   
	
${OBJECTDIR}/_ext/1360937979/uMedia.o: ../uMB/uMedia.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/uMedia.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/uMedia.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/uMedia.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/uMedia.o.d" -o ${OBJECTDIR}/_ext/1360937979/uMedia.o ../uMB/uMedia.c   
	
${OBJECTDIR}/_ext/1360937979/VS1053.o: ../uMB/VS1053.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/VS1053.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/VS1053.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/VS1053.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/VS1053.o.d" -o ${OBJECTDIR}/_ext/1360937979/VS1053.o ../uMB/VS1053.c   
	
${OBJECTDIR}/_ext/1360937979/TouchGrid.o: ../uMB/TouchGrid.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchGrid.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchGrid.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchGrid.o ../uMB/TouchGrid.c   
	
${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o: ../uMB/TouchScreenResistive.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR}/_ext/1360937979 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d 
	@${RM} ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o.d" -o ${OBJECTDIR}/_ext/1360937979/TouchScreenResistive.o ../uMB/TouchScreenResistive.c   
	
${OBJECTDIR}/Alarm.o: Alarm.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/Alarm.o.d 
	@${RM} ${OBJECTDIR}/Alarm.o 
	@${FIXDEPS} "${OBJECTDIR}/Alarm.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/Alarm.o.d" -o ${OBJECTDIR}/Alarm.o Alarm.c   
	
${OBJECTDIR}/solari.o: solari.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} ${OBJECTDIR} 
	@${RM} ${OBJECTDIR}/solari.o.d 
	@${RM} ${OBJECTDIR}/solari.o 
	@${FIXDEPS} "${OBJECTDIR}/solari.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -I"." -I"../uMB" -I"../Microchip/Include" -MMD -MF "${OBJECTDIR}/solari.o.d" -o ${OBJECTDIR}/solari.o solari.c   
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mdebugger -D__MPLAB_DEBUGGER_ICD3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}           -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC024FF  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,--defsym=__MPLAB_DEBUGGER_ICD3=1,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map"
	${MP_CC_DIR}/xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/Alarm.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
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
