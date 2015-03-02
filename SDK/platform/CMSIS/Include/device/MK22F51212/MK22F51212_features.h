/*
** ###################################################################
**     Version:             rev. 2.8, 2014-10-14
**     Build:               b141105
**
**     Abstract:
**         Chip specific module features.
**
**     Copyright (c) 2014 Freescale Semiconductor, Inc.
**     All rights reserved.
**
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**
**     http:                 www.freescale.com
**     mail:                 support@freescale.com
**
**     Revisions:
**     - rev. 1.0 (2013-07-23)
**         Initial version.
**     - rev. 1.1 (2013-09-17)
**         RM rev. 0.4 update.
**     - rev. 2.0 (2013-10-29)
**         Register accessor macros added to the memory map.
**         Symbols for Processor Expert memory map compatibility added to the memory map.
**         Startup file for gcc has been updated according to CMSIS 3.2.
**         System initialization updated.
**     - rev. 2.1 (2013-10-30)
**         Definition of BITBAND macros updated to support peripherals with 32-bit acces disabled.
**     - rev. 2.2 (2013-12-20)
**         Update according to reference manual rev. 0.6,
**     - rev. 2.3 (2014-01-13)
**         Update according to reference manual rev. 0.61,
**     - rev. 2.4 (2014-01-30)
**         Added single maximum value generation and a constrain to varying feature values that only numbers can have maximum.
**     - rev. 2.5 (2014-02-10)
**         The declaration of clock configurations has been moved to separate header file system_MK22F51212.h
**     - rev. 2.6 (2014-05-06)
**         Update according to reference manual rev. 1.0,
**         Update of system and startup files.
**         Module access macro module_BASES replaced by module_BASE_PTRS.
**     - rev. 2.7 (2014-08-28)
**         Update of system files - default clock configuration changed.
**         Update of startup files - possibility to override DefaultISR added.
**     - rev. 2.8 (2014-10-14)
**         Interrupt INT_LPTimer renamed to INT_LPTMR0, interrupt INT_Watchdog renamed to INT_WDOG_EWM.
**
** ###################################################################
*/

#if !defined(__FSL_MK22F51212_FEATURES_H__)
#define __FSL_MK22F51212_FEATURES_H__

/* ADC16 module features */

/* @brief Has Programmable Gain Amplifier (PGA) in ADC (register PGA). */
#define FSL_FEATURE_ADC16_HAS_PGA (0)
/* @brief Has PGA chopping control in ADC (bit PGA[PGACHPb] or PGA[PGACHP]). */
#define FSL_FEATURE_ADC16_HAS_PGA_CHOPPING (0)
/* @brief Has PGA offset measurement mode in ADC (bit PGA[PGAOFSM]). */
#define FSL_FEATURE_ADC16_HAS_PGA_OFFSET_MEASUREMENT (0)
/* @brief Has DMA support (bit SC2[DMAEN] or SC4[DMAEN]). */
#define FSL_FEATURE_ADC16_HAS_DMA (1)
/* @brief Has differential mode (bitfield SC1x[DIFF]). */
#define FSL_FEATURE_ADC16_HAS_DIFF_MODE (1)
/* @brief Has FIFO (bit SC4[AFDEP]). */
#define FSL_FEATURE_ADC16_HAS_FIFO (0)
/* @brief FIFO size if available (bitfield SC4[AFDEP]). */
#define FSL_FEATURE_ADC16_FIFO_SIZE (0)
/* @brief Has channel set a/b multiplexor (bitfield CFG2[MUXSEL]). */
#define FSL_FEATURE_ADC16_HAS_MUX_SELECT (1)
/* @brief Has HW trigger masking (bitfield SC5[HTRGMASKE]. */
#define FSL_FEATURE_ADC16_HAS_HW_TRIGGER_MASK (0)
/* @brief Has calibration feature (bit SC3[CAL] and registers CLPx, CLMx). */
#define FSL_FEATURE_ADC16_HAS_CALIBRATION (1)
/* @brief Has HW averaging (bit SC3[AVGE]). */
#define FSL_FEATURE_ADC16_HAS_HW_AVERAGE (1)
/* @brief Has offset correction (register OFS). */
#define FSL_FEATURE_ADC16_HAS_OFFSET_CORRECTION (1)
/* @brief Maximum ADC resolution. */
#define FSL_FEATURE_ADC16_MAX_RESOLUTION (16)
/* @brief Number of SC1x and Rx register pairs (conversion control and result registers). */
#define FSL_FEATURE_ADC16_CONVERSION_CONTROL_COUNT (2)

/* CMP module features */

/* @brief Has Trigger mode in CMP (register bit field CR1[TRIGM]). */
#define FSL_FEATURE_CMP_HAS_TRIGGER_MODE (1)
/* @brief Has Window mode in CMP (register bit field CR1[WE]). */
#define FSL_FEATURE_CMP_HAS_WINDOW_MODE (1)
/* @brief Has External sample supported in CMP (register bit field CR1[SE]). */
#define FSL_FEATURE_CMP_HAS_EXTERNAL_SAMPLE_SUPPORT (1)
/* @brief Has DMA support in CMP (register bit field SCR[DMAEN]). */
#define FSL_FEATURE_CMP_HAS_DMA (1)
/* @brief Has Pass Through mode in CMP (register bit field MUXCR[PSTM]). */
#define FSL_FEATURE_CMP_HAS_PASS_THROUGH_MODE (0)
/* @brief Has DAC Test function in CMP (register DACTEST). */
#define FSL_FEATURE_CMP_HAS_DAC_TEST (0)

/* CRC module features */

/* @brief Has data register with name CRC */
#define FSL_FEATURE_CRC_HAS_CRC_REG (0)

/* DAC module features */

/* @brief Define the size of hardware buffer */
#define FSL_FEATURE_DAC_BUFFER_SIZE (16)
/* @brief Define whether the buffer supports watermark event detection or not. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_DETECTION (1)
/* @brief Define whether the buffer supports watermark selection detection or not. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_SELECTION (1)
/* @brief Define whether the buffer supports watermark event 1 word before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_1_WORD (1)
/* @brief Define whether the buffer supports watermark event 2 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_2_WORDS (1)
/* @brief Define whether the buffer supports watermark event 3 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_3_WORDS (1)
/* @brief Define whether the buffer supports watermark event 4 words before buffer upper limit. */
#define FSL_FEATURE_DAC_HAS_WATERMARK_4_WORDS (1)
/* @brief Define whether FIFO buffer mode is available or not. */
#define FSL_FEATURE_DAC_HAS_BUFFER_FIFO_MODE (1)
/* @brief Define whether swing buffer mode is available or not.. */
#define FSL_FEATURE_DAC_HAS_BUFFER_SWING_MODE (1)

/* EDMA module features */

/* @brief Number of DMA channels (related to number of registers TCD, DCHPRI, bit fields ERQ[ERQn], EEI[EEIn], INT[INTn], ERR[ERRn], HRS[HRSn] and bit field widths ES[ERRCHN], CEEI[CEEI], SEEI[SEEI], CERQ[CERQ], SERQ[SERQ], CDNE[CDNE], SSRT[SSRT], CERR[CERR], CINT[CINT], TCDn_CITER_ELINKYES[LINKCH], TCDn_CSR[MAJORLINKCH], TCDn_BITER_ELINKYES[LINKCH]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_MODULE_CHANNEL (16)
/* @brief Total number of DMA channels on all modules. */
#define FSL_FEATURE_EDMA_DMAMUX_CHANNELS (HW_DMA_INSTANCE_COUNT * 16)
/* @brief Number of DMA channel groups (register bit fields CR[ERGA], CR[GRPnPRI], ES[GPE], DCHPRIn[GRPPRI]). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_CHANNEL_GROUP_COUNT (1)
/* @brief Number of DMA channels with asynchronous request capability (register EARS). (Valid only for eDMA modules.) */
#define FSL_FEATURE_EDMA_ASYNCHRO_REQUEST_CHANNEL_COUNT (16)

/* DMAMUX module features */

/* @brief Number of DMA channels (related to number of register CHCFGn). */
#define FSL_FEATURE_DMAMUX_MODULE_CHANNEL (16)
/* @brief Total number of DMA channels on all modules. */
#define FSL_FEATURE_DMAMUX_DMAMUX_CHANNELS (HW_DMAMUX_INSTANCE_COUNT * 16)
/* @brief Has the periodic trigger capability for the triggered DMA channel 0 (register bit CHCFG0[TRIG]). */
#define FSL_FEATURE_DMAMUX_HAS_TRIG (1)

/* EWM module features */

/* @brief Has clock prescaler (register CLKPRESCALER). */
#define FSL_FEATURE_EWM_HAS_PRESCALER  (1)

/* FLEXBUS module features */

/* No feature definitions */

/* FLASH module features */

/* @brief Is of type FTFA. */
#define FSL_FEATURE_FLASH_IS_FTFA (1)
/* @brief Is of type FTFE. */
#define FSL_FEATURE_FLASH_IS_FTFE (0)
/* @brief Is of type FTFL. */
#define FSL_FEATURE_FLASH_IS_FTFL (0)
/* @brief Has flags indicating the status of the FlexRAM (register bits FCNFG[EEERDY], FCNFG[RAMRDY] and FCNFG[PFLSH]). */
#define FSL_FEATURE_FLASH_HAS_FLEX_RAM_FLAGS (0)
/* @brief Has program flash swapping status flag (register bit FCNFG[SWAP]). */
#define FSL_FEATURE_FLASH_HAS_PFLASH_SWAPPING_STATUS_FLAG (0)
/* @brief Has EEPROM region protection (register FEPROT). */
#define FSL_FEATURE_FLASH_HAS_EEROM_REGION_PROTECTION (0)
/* @brief Has data flash region protection (register FDPROT). */
#define FSL_FEATURE_FLASH_HAS_DATA_FLASH_REGION_PROTECTION (0)
/* @brief Has flash access control (registers XACCHn, SACCHn, where n is a number, FACSS and FACSN). */
#define FSL_FEATURE_FLASH_HAS_ACCESS_CONTROL (1)
/* @brief Has flash cache control in FMC module. */
#define FSL_FEATURE_FLASH_HAS_FMC_FLASH_CACHE_CONTROLS (1)
/* @brief Has flash cache control in MCM module. */
#define FSL_FEATURE_FLASH_HAS_MCM_FLASH_CACHE_CONTROLS (0)
/* @brief P-Flash block count. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_COUNT (2)
/* @brief P-Flash block size. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_SIZE (262144)
/* @brief P-Flash sector size. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_SECTOR_SIZE (2048)
/* @brief P-Flash write unit size. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_WRITE_UNIT_SIZE (4)
/* @brief P-Flash data path width. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_DATA_PATH_WIDTH (8)
/* @brief P-Flash block swap feature. */
#define FSL_FEATURE_FLASH_HAS_PFLASH_BLOCK_SWAP (0)
/* @brief Has FlexNVM memory. */
#define FSL_FEATURE_FLASH_HAS_FLEX_NVM (0)
/* @brief FlexNVM block count. */
#define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_COUNT (0)
/* @brief FlexNVM block size. */
#define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SIZE (0)
/* @brief FlexNVM sector size. */
#define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_SECTOR_SIZE (0)
/* @brief FlexNVM write unit size. */
#define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_WRITE_UNIT_SIZE (0)
/* @brief FlexNVM data path width. */
#define FSL_FEATURE_FLASH_FLEX_BLOCK_DATA_PATH_WIDTH (0)
/* @brief FlexNVM start address. (Valid only if FlexNVM is available.) */
#define FSL_FEATURE_FLASH_FLEX_NVM_START_ADDRESS (0x00000000)
/* @brief Has FlexRAM memory. */
#define FSL_FEATURE_FLASH_HAS_FLEX_RAM (0)
/* @brief FlexRAM size. */
#define FSL_FEATURE_FLASH_FLEX_RAM_SIZE (0)
/* @brief FlexRAM start address. (Valid only if FlexRAM is available.) */
#define FSL_FEATURE_FLASH_FLEX_RAM_START_ADDRESS (0x00000000)
/* @brief Has 0x00 Read 1s Block command. */
#define FSL_FEATURE_FLASH_HAS_READ_1S_BLOCK_CMD (1)
/* @brief Has 0x01 Read 1s Section command. */
#define FSL_FEATURE_FLASH_HAS_READ_1S_SECTION_CMD (1)
/* @brief Has 0x02 Program Check command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_CHECK_CMD (1)
/* @brief Has 0x03 Read Resource command. */
#define FSL_FEATURE_FLASH_HAS_READ_RESOURCE_CMD (1)
/* @brief Has 0x06 Program Longword command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_LONGWORD_CMD (1)
/* @brief Has 0x07 Program Phrase command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_PHRASE_CMD (0)
/* @brief Has 0x08 Erase Flash Block command. */
#define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_BLOCK_CMD (1)
/* @brief Has 0x09 Erase Flash Sector command. */
#define FSL_FEATURE_FLASH_HAS_ERASE_FLASH_SECTOR_CMD (1)
/* @brief Has 0x0B Program Section command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_SECTION_CMD (0)
/* @brief Has 0x40 Read 1s All Blocks command. */
#define FSL_FEATURE_FLASH_HAS_READ_1S_ALL_BLOCKS_CMD (1)
/* @brief Has 0x41 Read Once command. */
#define FSL_FEATURE_FLASH_HAS_READ_ONCE_CMD (1)
/* @brief Has 0x43 Program Once command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_ONCE_CMD (1)
/* @brief Has 0x44 Erase All Blocks command. */
#define FSL_FEATURE_FLASH_HAS_ERASE_ALL_BLOCKS_CMD (1)
/* @brief Has 0x45 Verify Backdoor Access Key command. */
#define FSL_FEATURE_FLASH_HAS_VERIFY_BACKDOOR_ACCESS_KEY_CMD (1)
/* @brief Has 0x46 Swap Control command. */
#define FSL_FEATURE_FLASH_HAS_SWAP_CONTROL_CMD (0)
/* @brief Has 0x80 Program Partition command. */
#define FSL_FEATURE_FLASH_HAS_PROGRAM_PARTITION_CMD (0)
/* @brief Has 0x81 Set FlexRAM Function command. */
#define FSL_FEATURE_FLASH_HAS_SET_FLEXRAM_FUNCTION_CMD (0)
/* @brief P-Flash Erase/Read 1st all block command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_BLOCK_CMD_ADDRESS_ALIGMENT (4)
/* @brief P-Flash Erase sector command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_SECTOR_CMD_ADDRESS_ALIGMENT (8)
/* @brief P-Flash Rrogram/Verify section command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_SECTION_CMD_ADDRESS_ALIGMENT (8)
/* @brief P-Flash Read resource command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_RESOURCE_CMD_ADDRESS_ALIGMENT (4)
/* @brief P-Flash Program check command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_CHECK_CMD_ADDRESS_ALIGMENT (4)
/* @brief P-Flash Program check command address alignment. */
#define FSL_FEATURE_FLASH_PFLASH_SWAP_CONTROL_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM Erase/Read 1st all block command address alignment. */
#define FSL_FEATURE_FLASH_FLEX_NVM_BLOCK_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM Erase sector command address alignment. */
#define FSL_FEATURE_FLASH_FLEX_NVM_SECTOR_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM Rrogram/Verify section command address alignment. */
#define FSL_FEATURE_FLASH_FLEX_NVM_SECTION_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM Read resource command address alignment. */
#define FSL_FEATURE_FLASH_FLEX_NVM_RESOURCE_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM Program check command address alignment. */
#define FSL_FEATURE_FLASH_FLEX_NVM_CHECK_CMD_ADDRESS_ALIGMENT (0)
/* @brief FlexNVM partition code 0000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0000 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0001 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0010 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0011 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0100 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0101 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0110 (0xFFFFFFFF)
/* @brief FlexNVM partition code 0111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_0111 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1000 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1000 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1001 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1001 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1010 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1010 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1011 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1011 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1100 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1100 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1101 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1101 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1110 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1110 (0xFFFFFFFF)
/* @brief FlexNVM partition code 1111 mapping to data flash size in bytes (0xFFFFFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_DFLASH_SIZE_FOR_DEPART_1111 (0xFFFFFFFF)
/* @brief Emulated eeprom size code 0000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0000 (0xFFFF)
/* @brief Emulated eeprom size code 0001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0001 (0xFFFF)
/* @brief Emulated eeprom size code 0010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0010 (0xFFFF)
/* @brief Emulated eeprom size code 0011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0011 (0xFFFF)
/* @brief Emulated eeprom size code 0100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0100 (0xFFFF)
/* @brief Emulated eeprom size code 0101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0101 (0xFFFF)
/* @brief Emulated eeprom size code 0110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0110 (0xFFFF)
/* @brief Emulated eeprom size code 0111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_0111 (0xFFFF)
/* @brief Emulated eeprom size code 1000 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1000 (0xFFFF)
/* @brief Emulated eeprom size code 1001 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1001 (0xFFFF)
/* @brief Emulated eeprom size code 1010 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1010 (0xFFFF)
/* @brief Emulated eeprom size code 1011 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1011 (0xFFFF)
/* @brief Emulated eeprom size code 1100 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1100 (0xFFFF)
/* @brief Emulated eeprom size code 1101 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1101 (0xFFFF)
/* @brief Emulated eeprom size code 1110 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1110 (0xFFFF)
/* @brief Emulated eeprom size code 1111 mapping to emulated eeprom size in bytes (0xFFFF = reserved). */
#define FSL_FEATURE_FLASH_FLEX_NVM_EEPROM_SIZE_FOR_EEESIZE_1111 (0xFFFF)

/* FTM module features */

/* @brief Bus clock is the source clock for the module. */
#define FSL_FEATURE_FTM_BUS_CLOCK (1)
/* @brief Number of channels. */
#define FSL_FEATURE_FTM_CHANNEL_COUNT (8)
#define FSL_FEATURE_FTM_CHANNEL_COUNTn(x) \
    ((x) == 0 ? (8) : \
    ((x) == 1 ? (2) : \
    ((x) == 2 ? (2) : \
    ((x) == 3 ? (8) : (-1)))))
/* @brief Has counter reset by the selected input capture event (register bits C0SC[ICRST], C1SC[ICRST], ...). */
#define FSL_FEATURE_FTM_HAS_COUNTER_RESET_BY_CAPTURE_EVENT (1)

/* I2C module features */

/* @brief Has System Management Bus support (registers SMB, A2, SLTL and SLTH). */
#define FSL_FEATURE_I2C_HAS_SMBUS (1)
/* @brief Maximum supported baud rate in kilobit per second. */
#define FSL_FEATURE_I2C_MAX_BAUD_KBPS (400)
/* @brief Is affected by errata with ID 6070 (repeat start cannot be generated if the F[MULT] bit field is set to a non-zero value). */
#define FSL_FEATURE_I2C_HAS_ERRATA_6070 (0)
/* @brief Has DMA support (register bit C1[DMAEN]). */
#define FSL_FEATURE_I2C_HAS_DMA_SUPPORT (1)
/* @brief Has I2C bus start and stop detection (register bits FLT[SSIE], FLT[STARTF] and FLT[STOPF]). */
#define FSL_FEATURE_I2C_HAS_START_STOP_DETECT (1)
/* @brief Has I2C bus stop detection (register bits FLT[STOPIE] and FLT[STOPF]). */
#define FSL_FEATURE_I2C_HAS_STOP_DETECT (0)
/* @brief Has I2C bus stop hold off (register bit FLT[SHEN]). */
#define FSL_FEATURE_I2C_HAS_STOP_HOLD_OFF (1)
/* @brief Maximum width of the glitch filter in number of bus clocks. */
#define FSL_FEATURE_I2C_MAX_GLITCH_FILTER_WIDTH (15)
/* @brief Has control of the drive capability of the I2C pins. */
#define FSL_FEATURE_I2C_HAS_HIGH_DRIVE_SELECTION (1)
/* @brief Has double buffering support (register S2). */
#define FSL_FEATURE_I2C_HAS_DOUBLE_BUFFERING (0)

/* SAI module features */

/* @brief Receive/transmit FIFO size in item count (register bit fields TCSR[FRDE], TCSR[FRIE], TCSR[FRF], TCR1[TFW], RCSR[FRDE], RCSR[FRIE], RCSR[FRF], RCR1[RFW], registers TFRn, RFRn). */
#define FSL_FEATURE_SAI_FIFO_COUNT (8)
/* @brief Receive/transmit channel number (register bit fields TCR3[TCE], RCR3[RCE], registers TDRn and RDRn). */
#define FSL_FEATURE_SAI_CHANNEL_COUNT (1)
/* @brief Maximum words per frame (register bit fields TCR3[WDFL], TCR4[FRSZ], TMR[TWM], RCR3[WDFL], RCR4[FRSZ], RMR[RWM]). */
#define FSL_FEATURE_SAI_MAX_WORDS_PER_FRAME (16)
/* @brief Has support of combining multiple data channel FIFOs into single channel FIFO (register bit fields TCR3[CFR], TCR4[FCOMB], TFR0[WCP], TFR1[WCP], RCR3[CFR], RCR4[FCOMB], RFR0[RCP], RFR1[RCP]). */
#define FSL_FEATURE_SAI_HAS_FIFO_COMBINE_MODE (0)
/* @brief Has packing of 8-bit and 16-bit data into each 32-bit FIFO word (register bit fields TCR4[FPACK], RCR4[FPACK]). */
#define FSL_FEATURE_SAI_HAS_FIFO_PACKING (1)
/* @brief Configures when the SAI will continue transmitting after a FIFO error has been detected (register bit fields TCR4[FCONT], RCR4[FCONT]). */
#define FSL_FEATURE_SAI_HAS_FIFO_FUNCTION_AFTER_ERROR (1)
/* @brief Configures if the frame sync is generated internally, a frame sync is only generated when the FIFO warning flag is clear or continuously (register bit fields TCR4[ONDEM], RCR4[ONDEM]). */
#define FSL_FEATURE_SAI_HAS_ON_DEMAND_MODE (1)
/* @brief Simplified bit clock source and asynchronous/synchronous mode selection (register bit fields TCR2[CLKMODE], RCR2[CLKMODE]), in comparison with the exclusively implemented TCR2[SYNC,BCS,BCI,MSEL], RCR2[SYNC,BCS,BCI,MSEL]. */
#define FSL_FEATURE_SAI_HAS_CLOCKING_MODE (0)
/* @brief Has register for configuration of the MCLK divide ratio (register bit fields MDR[FRACT], MDR[DIVIDE]). */
#define FSL_FEATURE_SAI_HAS_MCLKDIV_REGISTER (1)
/* @brief Ihe interrupt source number */
#define FSL_FEATURE_SAI_INT_SOURCE_NUM (2)

/* LLWU module features */

#if defined(CPU_MK22FN512CAP12) || defined(CPU_MK22FN512VDC12) || defined(CPU_MK22FN512VLL12)
    /* @brief Maximum number of pins connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN (16)
    /* @brief Has pins 8-15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_EXTERNAL_PIN_GROUP2 (1)
    /* @brief Maximum number of internal modules connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE (8)
    /* @brief Number of digital filters. */
    #define FSL_FEATURE_LLWU_HAS_PIN_FILTER (2)
    /* @brief Has MF5 register. */
    #define FSL_FEATURE_LLWU_HAS_MF (0)
    /* @brief Has possibility to enable reset in low leakage power mode and enable digital filter for RESET pin (register LLWU_RST). */
    #define FSL_FEATURE_LLWU_HAS_RESET_ENABLE (0)
    /* @brief Has external pin 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN0 (1)
    /* @brief Has external pin 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN1 (1)
    /* @brief Has external pin 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN2 (1)
    /* @brief Has external pin 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN3 (1)
    /* @brief Has external pin 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN4 (1)
    /* @brief Has external pin 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN5 (1)
    /* @brief Has external pin 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN6 (1)
    /* @brief Has external pin 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN7 (1)
    /* @brief Has external pin 8 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN8 (1)
    /* @brief Has external pin 9 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN9 (1)
    /* @brief Has external pin 10 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN10 (1)
    /* @brief Has external pin 11 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN11 (1)
    /* @brief Has external pin 12 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN12 (1)
    /* @brief Has external pin 13 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN13 (1)
    /* @brief Has external pin 14 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN14 (1)
    /* @brief Has external pin 15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN15 (1)
    /* @brief Has external pin 16 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN16 (0)
    /* @brief Has external pin 17 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN17 (0)
    /* @brief Has external pin 18 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN18 (0)
    /* @brief Has external pin 19 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN19 (0)
    /* @brief Has external pin 20 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN20 (0)
    /* @brief Has external pin 21 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN21 (0)
    /* @brief Has external pin 22 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN22 (0)
    /* @brief Has external pin 23 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN23 (0)
    /* @brief Has external pin 24 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN24 (0)
    /* @brief Has external pin 25 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN25 (0)
    /* @brief Has external pin 26 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN26 (0)
    /* @brief Has external pin 27 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN27 (0)
    /* @brief Has external pin 28 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN28 (0)
    /* @brief Has external pin 29 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN29 (0)
    /* @brief Has external pin 30 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN30 (0)
    /* @brief Has external pin 31 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN31 (0)
    /* @brief Has internal module 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE0 (1)
    /* @brief Has internal module 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE1 (1)
    /* @brief Has internal module 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE2 (1)
    /* @brief Has internal module 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE3 (0)
    /* @brief Has internal module 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE4 (0)
    /* @brief Has internal module 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE5 (1)
    /* @brief Has internal module 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE6 (0)
    /* @brief Has internal module 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE7 (1)
#elif defined(CPU_MK22FN512VLH12) || defined(CPU_MK22FN512VMP12)
    /* @brief Maximum number of pins connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN (16)
    /* @brief Has pins 8-15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_EXTERNAL_PIN_GROUP2 (1)
    /* @brief Maximum number of internal modules connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE (8)
    /* @brief Number of digital filters. */
    #define FSL_FEATURE_LLWU_HAS_PIN_FILTER (2)
    /* @brief Has MF5 register. */
    #define FSL_FEATURE_LLWU_HAS_MF (0)
    /* @brief Has possibility to enable reset in low leakage power mode and enable digital filter for RESET pin (register LLWU_RST). */
    #define FSL_FEATURE_LLWU_HAS_RESET_ENABLE (0)
    /* @brief Has external pin 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN0 (1)
    /* @brief Has external pin 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN1 (0)
    /* @brief Has external pin 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN2 (0)
    /* @brief Has external pin 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN3 (1)
    /* @brief Has external pin 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN4 (1)
    /* @brief Has external pin 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN5 (1)
    /* @brief Has external pin 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN6 (1)
    /* @brief Has external pin 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN7 (1)
    /* @brief Has external pin 8 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN8 (1)
    /* @brief Has external pin 9 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN9 (1)
    /* @brief Has external pin 10 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN10 (1)
    /* @brief Has external pin 11 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN11 (1)
    /* @brief Has external pin 12 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN12 (1)
    /* @brief Has external pin 13 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN13 (1)
    /* @brief Has external pin 14 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN14 (1)
    /* @brief Has external pin 15 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN15 (1)
    /* @brief Has external pin 16 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN16 (0)
    /* @brief Has external pin 17 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN17 (0)
    /* @brief Has external pin 18 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN18 (0)
    /* @brief Has external pin 19 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN19 (0)
    /* @brief Has external pin 20 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN20 (0)
    /* @brief Has external pin 21 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN21 (0)
    /* @brief Has external pin 22 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN22 (0)
    /* @brief Has external pin 23 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN23 (0)
    /* @brief Has external pin 24 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN24 (0)
    /* @brief Has external pin 25 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN25 (0)
    /* @brief Has external pin 26 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN26 (0)
    /* @brief Has external pin 27 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN27 (0)
    /* @brief Has external pin 28 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN28 (0)
    /* @brief Has external pin 29 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN29 (0)
    /* @brief Has external pin 30 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN30 (0)
    /* @brief Has external pin 31 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_EXTERNAL_PIN31 (0)
    /* @brief Has internal module 0 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE0 (1)
    /* @brief Has internal module 1 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE1 (1)
    /* @brief Has internal module 2 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE2 (1)
    /* @brief Has internal module 3 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE3 (0)
    /* @brief Has internal module 4 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE4 (0)
    /* @brief Has internal module 5 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE5 (1)
    /* @brief Has internal module 6 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE6 (0)
    /* @brief Has internal module 7 connected to LLWU device. */
    #define FSL_FEATURE_LLWU_HAS_INTERNAL_MODULE7 (1)
#endif

/* LPTMR module features */

/* No feature definitions */

/* LPUART module features */

/* @brief Has receive FIFO overflow detection (bit field CFIFO[RXOFE]). */
#define FSL_FEATURE_LPUART_HAS_IRQ_EXTENDED_FUNCTIONS (0)
/* @brief Has low power features (can be enabled in wait mode via register bit C1[DOZEEN] or CTRL[DOZEEN] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_LOW_POWER_UART_SUPPORT (1)
/* @brief Has extended data register ED (or extra flags in the DATA register if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_EXTENDED_DATA_REGISTER_FLAGS (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_HAS_FIFO (0)
/* @brief Has 32-bit register MODIR */
#define FSL_FEATURE_LPUART_HAS_MODIR (1)
/* @brief Hardware flow control (RTS, CTS) is supported. */
#define FSL_FEATURE_LPUART_HAS_MODEM_SUPPORT (1)
/* @brief Infrared (modulation) is supported. */
#define FSL_FEATURE_LPUART_HAS_IR_SUPPORT (1)
/* @brief 2 bits long stop bit is available. */
#define FSL_FEATURE_LPUART_HAS_STOP_BIT_CONFIG_SUPPORT (1)
/* @brief Maximal data width without parity bit. */
#define FSL_FEATURE_LPUART_HAS_10BIT_DATA_SUPPORT (1)
/* @brief Baud rate fine adjustment is available. */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_FINE_ADJUST_SUPPORT (0)
/* @brief Baud rate oversampling is available (has bit fields C4[OSR], C5[BOTHEDGE], C5[RESYNCDIS] or BAUD[OSR], BAUD[BOTHEDGE], BAUD[RESYNCDIS] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BAUD_RATE_OVER_SAMPLING_SUPPORT (1)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_RX_RESYNC_SUPPORT (1)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_LPUART_HAS_BOTH_EDGE_SAMPLING_SUPPORT (1)
/* @brief Peripheral type. */
#define FSL_FEATURE_LPUART_IS_SCI (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_LPUART_FIFO_SIZE (0)
/* @brief Maximal data width without parity bit. */
#define FSL_FEATURE_LPUART_MAX_DATA_WIDTH_WITH_NO_PARITY (10)
/* @brief Maximal data width with parity bit. */
#define FSL_FEATURE_LPUART_MAX_DATA_WIDTH_WITH_PARITY (9)
/* @brief Supports two match addresses to filter incoming frames. */
#define FSL_FEATURE_LPUART_HAS_ADDRESS_MATCHING (1)
/* @brief Has transmitter/receiver DMA enable bits C5[TDMAE]/C5[RDMAE] (or BAUD[TDMAE]/BAUD[RDMAE] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_DMA_ENABLE (1)
/* @brief Has transmitter/receiver DMA select bits C4[TDMAS]/C4[RDMAS], resp. C5[TDMAS]/C5[RDMAS] if IS_SCI = 0. */
#define FSL_FEATURE_LPUART_HAS_DMA_SELECT (0)
/* @brief Data character bit order selection is supported (bit field S2[MSBF] or STAT[MSBF] if the registers are 32-bit wide). */
#define FSL_FEATURE_LPUART_HAS_BIT_ORDER_SELECT (1)
/* @brief Has smart card (ISO7816 protocol) support and no improved smart card support. */
#define FSL_FEATURE_LPUART_HAS_SMART_CARD_SUPPORT (0)
/* @brief Has improved smart card (ISO7816 protocol) support. */
#define FSL_FEATURE_LPUART_HAS_IMPROVED_SMART_CARD_SUPPORT (0)
/* @brief Has local operation network (CEA709.1-B protocol) support. */
#define FSL_FEATURE_LPUART_HAS_LOCAL_OPERATION_NETWORK_SUPPORT (0)
/* @brief Has 32-bit registers (BAUD, STAT, CTRL, DATA, MATCH, MODIR) instead of 8-bit (BDH, BDL, C1, S1, D, etc.). */
#define FSL_FEATURE_LPUART_HAS_32BIT_REGISTERS (1)
/* @brief Lin break detect available (has bit BDH[LBKDIE]). */
#define FSL_FEATURE_LPUART_HAS_LIN_BREAK_DETECT (0)
/* @brief UART stops in Wait mode available (has bit C1[UARTSWAI]). */
#define FSL_FEATURE_LPUART_HAS_WAIT_MODE_OPERATION (0)

/* MCG module features */

/* @brief PRDIV base value (divider of register bit field [PRDIV] zero value). */
#define FSL_FEATURE_MCG_PLL_PRDIV_BASE (1)
/* @brief Maximum PLL external reference divider value (max. value of register bit field C5[PRVDIV]). */
#define FSL_FEATURE_MCG_PLL_PRDIV_MAX (24)
/* @brief VCO divider base value (multiply factor of register bit field C6[VDIV] zero value). */
#define FSL_FEATURE_MCG_PLL_VDIV_BASE (24)
/* @brief PLL reference clock low range. OSCCLK/PLL_R. */
#define FSL_FEATURE_MCG_PLL_REF_MIN (2000000)
/* @brief PLL reference clock high range. OSCCLK/PLL_R. */
#define FSL_FEATURE_MCG_PLL_REF_MAX (4000000)
/* @brief The PLL clock is divided by 2 before VCO divider. */
#define FSL_FEATURE_MCG_HAS_PLL_INTERNAL_DIV (0)
/* @brief FRDIV supports 1280. */
#define FSL_FEATURE_MCG_FRDIV_SUPPORT_1280 (1)
/* @brief FRDIV supports 1536. */
#define FSL_FEATURE_MCG_FRDIV_SUPPORT_1536 (1)
/* @brief Is PLL clock divided by 2 before MCG PLL/FLL clock selection in the SIM module. */
#define FSL_FEATURE_MCG_HAS_PLL_EXTRA_DIV (0)
/* @brief Has 32kHz RTC external reference clock (register bits C8[LOCS1], C8[CME1], C8[LOCRE1] and RTC module are present). */
#define FSL_FEATURE_MCG_HAS_RTC_32K (1)
/* @brief Has PLL1 external reference clock (registers C10, C11, C12, S2). */
#define FSL_FEATURE_MCG_HAS_PLL1 (0)
/* @brief Has 48MHz internal oscillator. */
#define FSL_FEATURE_MCG_HAS_IRC_48M (1)
/* @brief Has OSC1 external oscillator (registers C10, C11, C12, S2). */
#define FSL_FEATURE_MCG_HAS_OSC1 (0)
/* @brief Has fast internal reference clock fine trim (register bit C2[FCFTRIM]). */
#define FSL_FEATURE_MCG_HAS_FCFTRIM (1)
/* @brief Has PLL loss of lock reset (register bit C8[LOLRE]). */
#define FSL_FEATURE_MCG_HAS_LOLRE (1)
/* @brief Has MCG OSC clock selection (register bit C7[OSCSEL]). */
#define FSL_FEATURE_MCG_USE_OSCSEL (1)
/* @brief Has PLL external reference selection (register bits C5[PLLREFSEL0] and C11[PLLREFSEL1]). */
#define FSL_FEATURE_MCG_USE_PLLREFSEL (0)
/* @brief TBD */
#define FSL_FEATURE_MCG_USE_SYSTEM_CLOCK (0)
/* @brief Has phase-locked loop (PLL) (register C5 and bits C6[VDIV], C6[PLLS], C6[LOLIE0], S[PLLST], S[LOCK0], S[LOLS]). */
#define FSL_FEATURE_MCG_HAS_PLL (1)
/* @brief PLL/OSC related register bit fields have PLL/OSC index in their name. */
#define FSL_FEATURE_MCG_HAS_PLL_OSC_INDEX (0)
/* @brief Has frequency-locked loop (FLL) (register ATCVH, ATCVL and bits C1[IREFS], C1[FRDIV]). */
#define FSL_FEATURE_MCG_HAS_FLL (1)
/* @brief Has PLL external to MCG (register C9). */
#define FSL_FEATURE_MCG_HAS_EXTERNAL_PLL (0)
/* @brief Has crystal oscillator or external reference clock low power controls (register bits C2[HGO], C2[RANGE]). */
#define FSL_FEATURE_MCG_HAS_EXT_REF_LOW_POWER_CONTROL (1)
/* @brief Has PLL/FLL selection as MCG output (register bit C6[PLLS]). */
#define FSL_FEATURE_MCG_HAS_PLL_FLL_SELECTION (1)
/* @brief Has PLL output selection (PLL0/PLL1, PLL/external PLL) (register bit C11[PLLCS]). */
#define FSL_FEATURE_MCG_HAS_PLL_OUTPUT_SELECTION (0)
/* @brief Has automatic trim machine (registers ATCVH, ATCVL and bits SC[ATMF], SC[ATMS], SC[ATME]). */
#define FSL_FEATURE_MCG_HAS_AUTO_TRIM_MACHINE (1)
/* @brief Has external clock monitor (register bit C6[CME]). */
#define FSL_FEATURE_MCG_HAS_EXTERNAL_CLOCK_MONITOR (1)
/* @brief Has low frequency internal reference clock (IRC) (registers LTRIMRNG, LFRIM, LSTRIM and bit MC[LIRC_DIV2]). */
#define FSL_FEATURE_MCG_HAS_LOW_FREQ_IRC (0)
/* @brief Has high frequency internal reference clock (IRC) (registers HCTRIM, HTTRIM, HFTRIM and bit MC[HIRCEN]). */
#define FSL_FEATURE_MCG_HAS_HIGH_FREQ_IRC (0)

/* interrupt module features */

/* @brief Lowest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MIN (-14)
/* @brief Highest interrupt request number. */
#define FSL_FEATURE_INTERRUPT_IRQ_MAX (85)

/* OSC module features */

/* @brief Has OSC1 external oscillator. */
#define FSL_FEATURE_OSC_HAS_OSC1 (0)
/* @brief Has OSC0 external oscillator. */
#define FSL_FEATURE_OSC_HAS_OSC0 (0)
/* @brief Has OSC external oscillator (without index). */
#define FSL_FEATURE_OSC_HAS_OSC (1)
/* @brief Number of OSC external oscillators. */
#define FSL_FEATURE_OSC_OSC_COUNT (1)
/* @brief Has external reference clock divider (register bit field DIV[ERPS]). */
#define FSL_FEATURE_OSC_HAS_EXT_REF_CLOCK_DIVIDER (1)

/* PDB module features */

/* @brief Define the count of supporting ADC pre-trigger for each channel. */
#define FSL_FEATURE_PDB_ADC_PRE_CHANNEL_COUNT (2)

/* PIT module features */

/* @brief Number of channels (related to number of registers LDVALn, CVALn, TCTRLn, TFLGn). */
#define FSL_FEATURE_PIT_TIMER_COUNT (4)
/* @brief Has lifetime timer (related to existence of registers LTMR64L and LTMR64H). */
#define FSL_FEATURE_PIT_HAS_LIFETIME_TIMER (0)
/* @brief Has chain mode (related to existence of register bit field TCTRLn[CHN]). */
#define FSL_FEATURE_PIT_HAS_CHAIN_MODE (1)
/* @brief Has shared interrupt handler (has not individual interrupt handler for each channel). */
#define FSL_FEATURE_PIT_HAS_SHARED_IRQ_HANDLER (0)

/* PMC module features */

/* @brief Has Bandgap Enable In VLPx Operation support. */
#define FSL_FEATURE_PMC_HAS_BGEN (1)
/* @brief Has Bandgap Buffer Drive Select. */
#define FSL_FEATURE_PMC_HAS_BGBDS (0)

/* PORT module features */

/* @brief Has control lock (register bit PCR[LK]). */
#define FSL_FEATURE_PORT_HAS_PIN_CONTROL_LOCK (1)
/* @brief Has open drain control (register bit PCR[ODE]). */
#define FSL_FEATURE_PORT_HAS_OPEN_DRAIN (1)
/* @brief Has digital filter (registers DFER, DFCR and DFWR). */
#define FSL_FEATURE_PORT_HAS_DIGITAL_FILTER (1)
/* @brief Has DMA request (register bit field PCR[IRQC] values). */
#define FSL_FEATURE_PORT_HAS_DMA_REQUEST (1)
/* @brief Has pull resistor selection (register bit PCR[PS]). */
#define FSL_FEATURE_PORT_HAS_PULL_SELECTION (1)
/* @brief Has separate pull resistor enable registers (PUEL and PUEH). */
#define FSL_FEATURE_PORT_HAS_PULL_ENABLE_REGISTER (0)
/* @brief Has slew rate control (register bit PCR[SRE]). */
#define FSL_FEATURE_PORT_HAS_SLEW_RATE (1)
/* @brief Has passive filter (register bit field PCR[PFE]). */
#define FSL_FEATURE_PORT_HAS_PASSIVE_FILTER (1)
/* @brief Has drive strength control (register bit PCR[DSE]). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH (1)
/* @brief Has separate drive strength register (HDRVE). */
#define FSL_FEATURE_PORT_HAS_DRIVE_STRENGTH_REGISTER (0)
/* @brief Has glitch filter (register IOFLT). */
#define FSL_FEATURE_PORT_HAS_GLITCH_FILTER (0)

/* GPIO module features */

/* @brief Has fast (single cycle) access capability via a dedicated memory region. */
#define FSL_FEATURE_GPIO_HAS_FAST_GPIO (0)
/* @brief Has port input disable register (PIDR). */
#define FSL_FEATURE_GPIO_HAS_INPUT_DISABLE (0)
/* @brief Has dedicated interrupt vector. */
#define FSL_FEATURE_GPIO_HAS_INTERRUPT_VECTOR (1)

/* RCM module features */

/* @brief Has Loss-of-Lock Reset support. */
#define FSL_FEATURE_RCM_HAS_LOL (1)
/* @brief Has Loss-of-Clock Reset support. */
#define FSL_FEATURE_RCM_HAS_LOC (1)
/* @brief Has JTAG generated Reset support. */
#define FSL_FEATURE_RCM_HAS_JTAG (1)
/* @brief Has EzPort generated Reset support. */
#define FSL_FEATURE_RCM_HAS_EZPORT (1)
/* @brief Has bit-field indicating EZP_MS_B pin state during last reset. */
#define FSL_FEATURE_RCM_HAS_EZPMS (1)
/* @brief Has boot ROM configuration, MR[BOOTROM], FM[FORCEROM] */
#define FSL_FEATURE_RCM_HAS_BOOTROM (0)
/* @brief Has sticky system reset status register RCM_SSRS0 and RCM_SSRS1. */
#define FSL_FEATURE_RCM_HAS_SSRS (1)

/* RTC module features */

/* @brief Has wakeup pin (bit field CR[WPS]). */
#define FSL_FEATURE_RTC_HAS_WAKEUP_PIN (1)
/* @brief Has low power features (registers MER, MCLR and MCHR). */
#define FSL_FEATURE_RTC_HAS_MONOTONIC (0)
/* @brief Has read/write access control (registers WAR and RAR). */
#define FSL_FEATURE_RTC_HAS_ACCESS_CONTROL (1)
/* @brief Has security features (registers TTSR, MER, MCLR and MCHR). */
#define FSL_FEATURE_RTC_HAS_SECURITY (1)

/* SIM module features */

/* @brief Has USB FS divider. */
#define FSL_FEATURE_SIM_USBFS_USE_SPECIAL_DIVIDER (0)
/* @brief Is PLL clock divided by 2 before MCG PLL/FLL clock selection. */
#define FSL_FEATURE_SIM_PLLCLK_USE_SPECIAL_DIVIDER (0)
/* @brief Has RAM size specification (register bit field SOPT1[RAMSIZE]). */
#define FSL_FEATURE_SIM_OPT_HAS_RAMSIZE (1)
/* @brief Has 32k oscillator clock output (register bit SOPT1[OSC32KOUT]). */
#define FSL_FEATURE_SIM_OPT_HAS_OSC32K_OUT (1)
/* @brief Has 32k oscillator clock selection (register bit field SOPT1[OSC32KSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_OSC32K_SELECTION (1)
/* @brief 32k oscillator clock selection width (width of register bit field SOPT1[OSC32KSEL]). */
#define FSL_FEATURE_SIM_OPT_OSC32K_SELECTION_WIDTH (2)
/* @brief Has RTC clock output selection (register bit SOPT2[RTCCLKOUTSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_RTC_CLOCK_OUT_SELECTION (1)
/* @brief Has USB voltage regulator (register bits SOPT1[USBVSTBY], SOPT1[USBSSTBY], SOPT1[USBREGEN], SOPT1CFG[URWE], SOPT1CFG[UVSWE], SOPT1CFG[USSWE]). */
#define FSL_FEATURE_SIM_OPT_HAS_USB_VOLTAGE_REGULATOR (1)
/* @brief USB has integrated PHY (register bits USBPHYCTL[USBVREGSEL], USBPHYCTL[USBVREGPD], USBPHYCTL[USB3VOUTTRG], USBPHYCTL[USBDISILIM], SOPT2[USBSLSRC], SOPT2[USBREGEN]). */
#define FSL_FEATURE_SIM_OPT_HAS_USB_PHY (0)
/* @brief Has PTD7 pad drive strength control (register bit SOPT2[PTD7PAD]). */
#define FSL_FEATURE_SIM_OPT_HAS_PTD7PAD (0)
/* @brief Has FlexBus security level selection (register bit SOPT2[FBSL]). */
#define FSL_FEATURE_SIM_OPT_HAS_FBSL (1)
/* @brief Has number of FlexBus hold cycle before FlexBus can release bus (register bit SOPT6[PCR]). */
#define FSL_FEATURE_SIM_OPT_HAS_PCR (0)
/* @brief Has number of NFC hold cycle in case of FlexBus request (register bit SOPT6[MCC]). */
#define FSL_FEATURE_SIM_OPT_HAS_MCC (0)
/* @brief Has UART open drain enable (register bits UARTnODE, where n is a number, in register SOPT5). */
#define FSL_FEATURE_SIM_OPT_HAS_ODE (0)
/* @brief Number of LPUART modules (number of register bits LPUARTn, where n is a number, in register SCGC5). */
#define FSL_FEATURE_SIM_OPT_LPUART_COUNT (1)
/* @brief Number of UART modules (number of register bits UARTn, where n is a number, in register SCGC4). */
#define FSL_FEATURE_SIM_OPT_UART_COUNT (3)
/* @brief Has UART0 open drain enable (register bit SOPT5[UART0ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_ODE (0)
/* @brief Has UART1 open drain enable (register bit SOPT5[UART1ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_ODE (0)
/* @brief Has UART2 open drain enable (register bit SOPT5[UART2ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART2_ODE (0)
/* @brief Has LPUART0 open drain enable (register bit SOPT5[LPUART0ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_ODE (0)
/* @brief Has LPUART1 open drain enable (register bit SOPT5[LPUART1ODE]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_ODE (0)
/* @brief Has CMT/UART pad drive strength control (register bit SOPT2[CMTUARTPAD]). */
#define FSL_FEATURE_SIM_OPT_HAS_CMTUARTPAD (0)
/* @brief Has LPUART0 transmit data source selection (register bit SOPT5[LPUART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_TX_SRC (0)
/* @brief Has LPUART0 receive data source selection (register bit SOPT5[LPUART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0_RX_SRC (1)
/* @brief Has LPUART1 transmit data source selection (register bit SOPT5[LPUART1TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_TX_SRC (0)
/* @brief Has LPUART1 receive data source selection (register bit SOPT5[LPUART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1_RX_SRC (0)
/* @brief Has UART0 transmit data source selection (register bit SOPT5[UART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_TX_SRC (1)
/* @brief UART0 transmit data source selection width (width of register bit SOPT5[UART0TXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART0_TX_SRC_WIDTH (2)
/* @brief Has UART0 receive data source selection (register bit SOPT5[UART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0_RX_SRC (1)
/* @brief UART0 receive data source selection width (width of register bit SOPT5[UART0RXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART0_RX_SRC_WIDTH (2)
/* @brief Has UART1 transmit data source selection (register bit SOPT5[UART1TXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_TX_SRC (1)
/* @brief Has UART1 receive data source selection (register bit SOPT5[UART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART1_RX_SRC (1)
/* @brief UART1 receive data source selection width (width of register bit SOPT5[UART1RXSRC]). */
#define FSL_FEATURE_SIM_OPT_UART1_RX_SRC_WIDTH (2)
/* @brief Has FTM module(s) configuration. */
#define FSL_FEATURE_SIM_OPT_HAS_FTM (1)
/* @brief Number of FTM modules. */
#define FSL_FEATURE_SIM_OPT_FTM_COUNT (4)
/* @brief Number of FTM triggers with selectable source. */
#define FSL_FEATURE_SIM_OPT_FTM_TRIGGER_COUNT (2)
/* @brief Has FTM0 triggers source selection (register bits SOPT4[FTM0TRGnSRC], where n is a number). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM0_TRIGGER (1)
/* @brief Has FTM3 triggers source selection (register bits SOPT4[FTM3TRGnSRC], where n is a number). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM3_TRIGGER (1)
/* @brief Has FTM1 channel 0 input capture source selection (register bit SOPT4[FTM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM1_CHANNELS (1)
/* @brief Has FTM2 channel 0 input capture source selection (register bit SOPT4[FTM2CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM2_CHANNELS (1)
/* @brief Has FTM3 channel 0 input capture source selection (register bit SOPT4[FTM3CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM3_CHANNELS (0)
/* @brief Has FTM2 channel 1 input capture source selection (register bit SOPT4[FTM2CH1SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM2_CHANNEL1 (1)
/* @brief Number of configurable FTM0 fault detection input (number of register bits SOPT4[FTM0FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM0_FAULT_COUNT (2)
/* @brief Number of configurable FTM1 fault detection input (number of register bits SOPT4[FTM1FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM1_FAULT_COUNT (1)
/* @brief Number of configurable FTM2 fault detection input (number of register bits SOPT4[FTM2FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM2_FAULT_COUNT (1)
/* @brief Number of configurable FTM3 fault detection input (number of register bits SOPT4[FTM3FLTn], where n is a number starting from zero). */
#define FSL_FEATURE_SIM_OPT_FTM3_FAULT_COUNT (1)
/* @brief Has FTM hardware trigger 0 software synchronization (register bit SOPT8[FTMnSYNCBIT], where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM_TRIGGER_SYNC (1)
/* @brief Has FTM channels output source selection (register bit SOPT8[FTMxOCHnSRC], where x is a module instance index and n is a channel index). */
#define FSL_FEATURE_SIM_OPT_HAS_FTM_CHANNELS_OUTPUT_SRC (1)
/* @brief Has TPM module(s) configuration. */
#define FSL_FEATURE_SIM_OPT_HAS_TPM (0)
/* @brief The highest TPM module index. */
#define FSL_FEATURE_SIM_OPT_MAX_TPM_INDEX (0)
/* @brief Has TPM module with index 0. */
#define FSL_FEATURE_SIM_OPT_HAS_TPM0 (0)
/* @brief Has TPM0 clock selection (register bit field SOPT4[TPM0CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM0_CLK_SEL (0)
/* @brief Is TPM channels configuration in the SOPT4 (not SOPT9) register (register bits TPMnCH0SRC, TPMnCLKSEL, where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM_CHANNELS_CONFIG_IN_SOPT4_REG (0)
/* @brief Has TPM1 channel 0 input capture source selection (register bit field SOPT4[TPM1CH0SRC] or SOPT9[TPM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM1_CH0_SRC_SELECTION (0)
/* @brief Has TPM1 clock selection (register bit field SOPT4[TPM1CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM1_CLK_SEL (0)
/* @brief TPM1 channel 0 input capture source selection width (width of register bit field SOPT4[TPM1CH0SRC] or SOPT9[TPM1CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_TPM1_CH0_SRC_SELECTION_WIDTH (0)
/* @brief Has TPM2 channel 0 input capture source selection (register bit field SOPT4[TPM2CH0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM2_CH0_SRC_SELECTION (0)
/* @brief Has TPM2 clock selection (register bit field SOPT4[TPM2CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPM2_CLK_SEL (0)
/* @brief Has PLL/FLL clock selection (register bit field SOPT2[PLLFLLSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_PLL_FLL_SELECTION (1)
/* @brief PLL/FLL clock selection width (width of register bit field SOPT2[PLLFLLSEL]). */
#define FSL_FEATURE_SIM_OPT_PLL_FLL_SELECTION_WIDTH (1)
/* @brief Has NFC clock source selection (register bit SOPT2[NFCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_NFCSRC (0)
/* @brief Has eSDHC clock source selection (register bit SOPT2[ESDHCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_ESDHCSRC (0)
/* @brief Has SDHC clock source selection (register bit SOPT2[SDHCSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_SDHCSRC (0)
/* @brief Has LCDC clock source selection (register bits SOPT2[LCDCSRC], SOPT2[LCDC_CLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_LCDCSRC (0)
/* @brief Has ENET timestamp clock source selection (register bit SOPT2[TIMESRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TIMESRC (0)
/* @brief Has ENET RMII clock source selection (register bit SOPT2[RMIISRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_RMIISRC (0)
/* @brief Has USB clock source selection (register bit SOPT2[USBSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBSRC (1)
/* @brief Has USB FS clock source selection (register bit SOPT2[USBFSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBFSRC (0)
/* @brief Has USB HS clock source selection (register bit SOPT2[USBHSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_USBHSRC (0)
/* @brief Has LPUART clock source selection (register bit SOPT2[LPUARTSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUARTSRC (1)
/* @brief Has LPUART0 clock source selection (register bit SOPT2[LPUART0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART0SRC (0)
/* @brief Has LPUART1 clock source selection (register bit SOPT2[LPUART1SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_LPUART1SRC (0)
/* @brief Has FLEXIOSRC clock source selection (register bit SOPT2[FLEXIOSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_FLEXIOSRC (0)
/* @brief Has UART0 clock source selection (register bit SOPT2[UART0SRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_UART0SRC (0)
/* @brief Has TPM clock source selection (register bit SOPT2[TPMSRC]). */
#define FSL_FEATURE_SIM_OPT_HAS_TPMSRC (0)
/* @brief Has debug trace clock selection (register bit SOPT2[TRACECLKSEL]). */
#define FSL_FEATURE_SIM_OPT_HAS_TRACE_CLKSEL (1)
/* @brief Number of ADC modules (register bits SOPT7[ADCnTRGSEL], SOPT7[ADCnPRETRGSEL], SOPT7[ADCnALTTRGSEL], where n is a module instance index). */
#define FSL_FEATURE_SIM_OPT_ADC_COUNT (2)
/* @brief Has clock 2 output divider (register bit field CLKDIV1[OUTDIV2]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV2 (1)
/* @brief Has clock 3 output divider (register bit field CLKDIV1[OUTDIV3]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV3 (1)
/* @brief Has clock 4 output divider (register bit field CLKDIV1[OUTDIV4]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV4 (1)
/* @brief Clock 4 output divider width (width of register bit field CLKDIV1[OUTDIV4]). */
#define FSL_FEATURE_SIM_DIVIDER_OUTDIV4_WIDTH (4)
/* @brief Has clock 5 output divider (register bit field CLKDIV1[OUTDIV5]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_OUTDIV5 (0)
/* @brief Has USB clock divider (register bit field CLKDIV2[USBDIV] and CLKDIV2[USBFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBDIV (1)
/* @brief Has USB FS clock divider (register bit field CLKDIV2[USBFSDIV] and CLKDIV2[USBFSFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBFSDIV (0)
/* @brief Has USB HS clock divider (register bit field CLKDIV2[USBHSDIV] and CLKDIV2[USBHSFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_USBHSDIV (0)
/* @brief Has PLL/FLL clock divider (register bit field CLKDIV3[PLLFLLDIV] and CLKDIV3[PLLFLLFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_PLLFLLDIV (0)
/* @brief Has LCDC clock divider (register bit field CLKDIV3[LCDCDIV] and CLKDIV3[LCDCFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_LCDCDIV (0)
/* @brief Has trace clock divider (register bit field CLKDIV4[TRACEDIV] and CLKDIV4[TRACEFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_TRACEDIV (0)
/* @brief Has NFC clock divider (register bit field CLKDIV4[NFCDIV] and CLKDIV4[NFCFRAC]). */
#define FSL_FEATURE_SIM_DIVIDER_HAS_NFCDIV (0)
/* @brief Has Kinetis family ID (register bit field SDID[FAMILYID]). */
#define FSL_FEATURE_SIM_SDID_HAS_FAMILYID (1)
/* @brief Has Kinetis family ID (register bit field SDID[FAMID]). */
#define FSL_FEATURE_SIM_SDID_HAS_FAMID (1)
/* @brief Has Kinetis sub-family ID (register bit field SDID[SUBFAMID]). */
#define FSL_FEATURE_SIM_SDID_HAS_SUBFAMID (1)
/* @brief Has Kinetis series ID (register bit field SDID[SERIESID]). */
#define FSL_FEATURE_SIM_SDID_HAS_SERIESID (1)
/* @brief Has device die ID (register bit field SDID[DIEID]). */
#define FSL_FEATURE_SIM_SDID_HAS_DIEID (1)
/* @brief Has system SRAM size specifier (register bit field SDID[SRAMSIZE]). */
#define FSL_FEATURE_SIM_SDID_HAS_SRAMSIZE (0)
/* @brief Has flash mode (register bit FCFG1[FLASHDOZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FLASHDOZE (1)
/* @brief Has flash disable (register bit FCFG1[FLASHDIS]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FLASHDIS (1)
/* @brief Has FTFE disable (register bit FCFG1[FTFDIS]). */
#define FSL_FEATURE_SIM_FCFG_HAS_FTFDIS (0)
/* @brief Has FlexNVM size specifier (register bit field FCFG1[NVMSIZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_NVMSIZE (0)
/* @brief Has EEPROM size specifier (register bit field FCFG1[EESIZE]). */
#define FSL_FEATURE_SIM_FCFG_HAS_EESIZE (0)
/* @brief Has FlexNVM partition (register bit field FCFG1[DEPART]). */
#define FSL_FEATURE_SIM_FCFG_HAS_DEPART (0)
/* @brief Maximum flash address block 0 address specifier (register bit field FCFG2[MAXADDR0]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR0 (1)
/* @brief Maximum flash address block 1 address specifier (register bit field FCFG2[MAXADDR1]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR1 (1)
/* @brief Maximum flash address block 0 or 1 address specifier (register bit field FCFG2[MAXADDR01]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR01 (0)
/* @brief Maximum flash address block 2 or 3 address specifier (register bit field FCFG2[MAXADDR23]). */
#define FSL_FEATURE_SIM_FCFG_HAS_MAXADDR23 (0)
/* @brief Has program flash availability specifier (register bit FCFG2[PFLSH]). */
#define FSL_FEATURE_SIM_FCFG_HAS_PFLSH (0)
/* @brief Has program flash swapping (register bit FCFG2[SWAPPFLSH]). */
#define FSL_FEATURE_SIM_FCFG_HAS_PFLSH_SWAP (0)
/* @brief Has miscellanious control register (register MCR). */
#define FSL_FEATURE_SIM_HAS_MISC_CONTROLS (0)
/* @brief Has COP watchdog (registers COPC and SRVCOP). */
#define FSL_FEATURE_SIM_HAS_COP_WATCHDOG (0)
/* @brief Has COP watchdog stop (register bits COPC[COPSTPEN], COPC[COPDBGEN] and COPC[COPCLKSEL]). */
#define FSL_FEATURE_SIM_HAS_COP_STOP (0)

/* SMC module features */

/* @brief Has partial stop option (register bit STOPCTRL[PSTOPO]). */
#define FSL_FEATURE_SMC_HAS_PSTOPO (1)
/* @brief Has LPO power option (register bit STOPCTRL[LPOPO]). */
#define FSL_FEATURE_SMC_HAS_LPOPO (0)
/* @brief Has POR power option (register bit STOPCTRL[PORPO] or VLLSCTRL[PORPO]). */
#define FSL_FEATURE_SMC_HAS_PORPO (1)
/* @brief Has low power wakeup on interrupt (register bit PMCTRL[LPWUI]). */
#define FSL_FEATURE_SMC_HAS_LPWUI (0)
/* @brief Has LLS or VLLS mode control (register bit STOPCTRL[LLSM]). */
#define FSL_FEATURE_SMC_HAS_LLS_SUBMODE (1)
/* @brief Has VLLS mode control (register bit VLLSCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_USE_VLLSCTRL_REG (0)
/* @brief Has VLLS mode control (register bit STOPCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_USE_STOPCTRL_VLLSM (0)
/* @brief Has RAM partition 2 power option (register bit STOPCTRL[RAM2PO]). */
#define FSL_FEATURE_SMC_HAS_RAM2_POWER_OPTION (0)
/* @brief Has high speed run mode (register bit PMPROT[AHSRUN]). */
#define FSL_FEATURE_SMC_HAS_HIGH_SPEED_RUN_MODE (1)
/* @brief Has low leakage stop mode (register bit PMPROT[ALLS]). */
#define FSL_FEATURE_SMC_HAS_LOW_LEAKAGE_STOP_MODE (1)
/* @brief Has stop submode 0(state VLLS0 of register bit STOPCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_HAS_STOP_SUBMODE0 (1)
/* @brief Has stop submode 2(state VLLS2 of register bit STOPCTRL[VLLSM]). */
#define FSL_FEATURE_SMC_HAS_STOP_SUBMODE2 (1)

/* DSPI module features */

#if defined(CPU_MK22FN512CAP12) || defined(CPU_MK22FN512VLH12) || defined(CPU_MK22FN512VMP12)
    /* @brief Receive/transmit FIFO size in number of items. */
    #define FSL_FEATURE_DSPI_FIFO_SIZE (4)
    #define FSL_FEATURE_DSPI_FIFO_SIZEn(x) \
        ((x) == 0 ? (4) : \
        ((x) == 1 ? (1) : (-1)))
    /* @brief Maximum transfer data width in bits. */
    #define FSL_FEATURE_DSPI_MAX_DATA_WIDTH (16)
    /* @brief Maximum number of chip select pins. (Reflects the width of register bit field PUSHR[PCS].) */
    #define FSL_FEATURE_DSPI_MAX_CHIP_SELECT_COUNT (6)
    /* @brief Number of chip select pins. */
    #define FSL_FEATURE_DSPI_CHIP_SELECT_COUNT (5)
    /* @brief Has chip select strobe capability on the PCS5 pin. */
    #define FSL_FEATURE_DSPI_HAS_CHIP_SELECT_STROBE (1)
    /* @brief Has 16-bit data transfer support. */
    #define FSL_FEATURE_DSPI_16BIT_TRANSFERS (1)
    /* @brief Has separate DMA RX and TX requests. */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) \
        ((x) == 0 ? (1) : \
        ((x) == 1 ? (0) : (-1)))
#elif defined(CPU_MK22FN512VDC12) || defined(CPU_MK22FN512VLL12)
    /* @brief Receive/transmit FIFO size in number of items. */
    #define FSL_FEATURE_DSPI_FIFO_SIZE (4)
    #define FSL_FEATURE_DSPI_FIFO_SIZEn(x) \
        ((x) == 0 ? (4) : \
        ((x) == 1 ? (1) : (-1)))
    /* @brief Maximum transfer data width in bits. */
    #define FSL_FEATURE_DSPI_MAX_DATA_WIDTH (16)
    /* @brief Maximum number of chip select pins. (Reflects the width of register bit field PUSHR[PCS].) */
    #define FSL_FEATURE_DSPI_MAX_CHIP_SELECT_COUNT (6)
    /* @brief Number of chip select pins. */
    #define FSL_FEATURE_DSPI_CHIP_SELECT_COUNT (6)
    /* @brief Has chip select strobe capability on the PCS5 pin. */
    #define FSL_FEATURE_DSPI_HAS_CHIP_SELECT_STROBE (1)
    /* @brief Has 16-bit data transfer support. */
    #define FSL_FEATURE_DSPI_16BIT_TRANSFERS (1)
    /* @brief Has separate DMA RX and TX requests. */
    #define FSL_FEATURE_DSPI_HAS_SEPARATE_DMA_RX_TX_REQn(x) \
        ((x) == 0 ? (1) : \
        ((x) == 1 ? (0) : (-1)))
#endif

/* UART module features */

/* @brief Has receive FIFO overflow detection (bit field CFIFO[RXOFE]). */
#define FSL_FEATURE_UART_HAS_IRQ_EXTENDED_FUNCTIONS (1)
/* @brief Has low power features (can be enabled in wait mode via register bit C1[DOZEEN] or CTRL[DOZEEN] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_LOW_POWER_UART_SUPPORT (0)
/* @brief Has extended data register ED (or extra flags in the DATA register if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_EXTENDED_DATA_REGISTER_FLAGS (1)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_UART_HAS_FIFO (1)
/* @brief Hardware flow control (RTS, CTS) is supported. */
#define FSL_FEATURE_UART_HAS_MODEM_SUPPORT (1)
/* @brief Infrared (modulation) is supported. */
#define FSL_FEATURE_UART_HAS_IR_SUPPORT (1)
/* @brief 2 bits long stop bit is available. */
#define FSL_FEATURE_UART_HAS_STOP_BIT_CONFIG_SUPPORT (0)
/* @brief Maximal data width without parity bit. */
#define FSL_FEATURE_UART_HAS_10BIT_DATA_SUPPORT (0)
/* @brief Baud rate fine adjustment is available. */
#define FSL_FEATURE_UART_HAS_BAUD_RATE_FINE_ADJUST_SUPPORT (1)
/* @brief Baud rate oversampling is available (has bit fields C4[OSR], C5[BOTHEDGE], C5[RESYNCDIS] or BAUD[OSR], BAUD[BOTHEDGE], BAUD[RESYNCDIS] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_BAUD_RATE_OVER_SAMPLING_SUPPORT (0)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_UART_HAS_RX_RESYNC_SUPPORT (0)
/* @brief Baud rate oversampling is available. */
#define FSL_FEATURE_UART_HAS_BOTH_EDGE_SAMPLING_SUPPORT (0)
/* @brief Peripheral type. */
#define FSL_FEATURE_UART_IS_SCI (0)
/* @brief Capacity (number of entries) of the transmit/receive FIFO (or zero if no FIFO is available). */
#define FSL_FEATURE_UART_FIFO_SIZE (8)
/* @brief Maximal data width without parity bit. */
#define FSL_FEATURE_UART_MAX_DATA_WIDTH_WITH_NO_PARITY (9)
/* @brief Maximal data width with parity bit. */
#define FSL_FEATURE_UART_MAX_DATA_WIDTH_WITH_PARITY (10)
/* @brief Supports two match addresses to filter incoming frames. */
#define FSL_FEATURE_UART_HAS_ADDRESS_MATCHING (1)
/* @brief Has transmitter/receiver DMA enable bits C5[TDMAE]/C5[RDMAE] (or BAUD[TDMAE]/BAUD[RDMAE] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_DMA_ENABLE (0)
/* @brief Has transmitter/receiver DMA select bits C4[TDMAS]/C4[RDMAS], resp. C5[TDMAS]/C5[RDMAS] if IS_SCI = 0. */
#define FSL_FEATURE_UART_HAS_DMA_SELECT (1)
/* @brief Data character bit order selection is supported (bit field S2[MSBF] or STAT[MSBF] if the registers are 32-bit wide). */
#define FSL_FEATURE_UART_HAS_BIT_ORDER_SELECT (1)
/* @brief Has smart card (ISO7816 protocol) support and no improved smart card support. */
#define FSL_FEATURE_UART_HAS_SMART_CARD_SUPPORT (1)
/* @brief Has improved smart card (ISO7816 protocol) support. */
#define FSL_FEATURE_UART_HAS_IMPROVED_SMART_CARD_SUPPORT (1)
/* @brief Has local operation network (CEA709.1-B protocol) support. */
#define FSL_FEATURE_UART_HAS_LOCAL_OPERATION_NETWORK_SUPPORT (0)
/* @brief Has 32-bit registers (BAUD, STAT, CTRL, DATA, MATCH, MODIR) instead of 8-bit (BDH, BDL, C1, S1, D, etc.). */
#define FSL_FEATURE_UART_HAS_32BIT_REGISTERS (0)
/* @brief Lin break detect available (has bit BDH[LBKDIE]). */
#define FSL_FEATURE_UART_HAS_LIN_BREAK_DETECT (1)
/* @brief UART stops in Wait mode available (has bit C1[UARTSWAI]). */
#define FSL_FEATURE_UART_HAS_WAIT_MODE_OPERATION (1)

/* USB module features */

/* No feature definitions */

/* VREF module features */

/* @brief Has chop oscillator (bit TRM[CHOPEN]) */
#define FSL_FEATURE_VREF_HAS_CHOP_OSC (1)
/* @brief Has second order curvature compensation (bit SC[ICOMPEN]) */
#define FSL_FEATURE_VREF_HAS_COMPENSATION (1)
/* @brief Describes the set of SC[MODE_LV] bitfield values */
#define FSL_FEATURE_VREF_MODE_LV_TYPE (1)
/* @brief Module has also low reference (registers VREFL/VREFH) */
#define FSL_FEATURE_VREF_HAS_LOW_REFERENCE (0)

/* WDOG module features */

/* @brief Watchdog is available. */
#define FSL_FEATURE_WDOG_HAS_WATCHDOG (1)

#endif /* __FSL_MK22F51212_FEATURES_H__ */

/*******************************************************************************
 * EOF
 ******************************************************************************/
