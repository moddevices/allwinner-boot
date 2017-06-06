/*
**********************************************************************************************************************
*											        eGon
*						           the Embedded GO-ON Bootloader System
*									       eGON power sub-system
*
*						  Copyright(C), 2006-2010, SoftWinners Microelectronic Co., Ltd.
*                                           All Rights Reserved
*
* File    : axp_i.h
*
* By      : Jerry
*
* Version : V2.00
*
* Date	  :
*
* Descript:
**********************************************************************************************************************
*/
#ifndef   _AXP_I_H_
#define   _AXP_I_H_

#define DCDC2_VALUE_FOR_BOOT    (1425)      //define dcdc2 for boot
#define AXP20_ADDR              (0x68>>1)
#define AXP19_ADDR              (0x68>>1)
#define AXP18_ADDR              (0x2C>>1)

#define PMU_TYPE_NONE           (0)
#define PMU_TYPE_AXP189         (1)
#define PMU_TYPE_AXP199         (2)
#define PMU_TYPE_AXP209			(3)
//AXP18X REG DEFINE
#define   BOOT_POWER_STATUS                        (0x00)
#define   BOOT_POWER_IPS_SET                       (0x01)
#define   BOOT_POWER_ONOFF                         (0x02)
#define   BOOT_POWER_CHARGE1                       (0x03)
#define   BOOT_POWER_CHARGE2                       (0x04)
#define   BOOT_POWER_PEK                           (0x05)
#define   BOOT_POWER_INTEN1                        (0x06)
#define   BOOT_POWER_INTEN2                        (0x07)
#define   BOOT_POWER_INTEN3                        (0x08)
#define   BOOT_POWER_INTSTS1                       (0x09)
#define   BOOT_POWER_INTSTS2                       (0x0A)
#define   BOOT_POWER_INTSTS3                       (0x0B)
#define   BOOT_POWER_VENDER_USED1                  (0x0C)
#define   BOOT_POWER_DCDCCTL                       (0x0D)
#define   BOOT_POWER_DC12OUT_VOL                   (0x0E)
#define   BOOT_POWER_LDOOUT_VOL                    (0x0F)
#define   BOOT_POWER_SW_CTL                        (0x10)
#define   BOOT_POWER_BATTERY_VOL                   (0x11)
#define   BOOT_POWER_BATTERY_CURRENT               (0x12)
#define   BOOT_POWER_DCIN_VOL                      (0x13)
#define   BOOT_POWER_DCIN_CURRENT                  (0x14)
#define   BOOT_POWER_ADCSW_CTL                     (0x15)
#define   BOOT_POWER_CLASSD_PAEN                   (0x16)
#define   BOOT_POWER_EPT_SW                        (0x17)
#define   BOOT_POWER_DATA_BUFFER1                  (0x18)
#define   BOOT_POWER_DATA_BUFFER2                  (0x19)
#define   BOOT_POWER_VENDER_USED3                  (0x1A)
//AXP19X REG DEFINE
#define   POWER_STATUS                              (0x00)
#define   POWER_MODE_CHGSTATUS                      (0x01)
#define   POWER_OTG_STATUS                          (0x02)
#define   POWER_DATA_BUFFER1                        (0x06)
#define   POWER_DATA_BUFFER2                        (0x07)
#define   POWER_DATA_BUFFER3                        (0x08)
#define   POWER_DATA_BUFFER4                        (0x09)
#define   POWER_VERSION                             (0x0C)
#define   POWER_LDO3_DC2_CTL                        (0x10)
#define   POWER_LDO24_DC13_CTL                      (0x12)
#define   POWER_DC2OUT_VOL                          (0x23)
#define   POWER_LDO3_DC2_DVM                        (0x25)
#define   POWER_DC1OUT_VOL                          (0x26)
#define   POWER_DC3OUT_VOL                          (0x27)
#define   POWER_LDO24OUT_VOL                        (0x28)
#define   POWER_LDO3OUT_VOL                         (0x29)
#define   POWER_IPS_SET                             (0x30)
#define   POWER_VOFF_SET                            (0x31)
#define   POWER_OFF_CTL                             (0x32)
#define   POWER_CHARGE1                             (0x33)
#define   POWER_CHARGE2                             (0x34)
#define   POWER_BACKUP_CHG                          (0x35)
#define   POWER_POK_SET                             (0x36)
#define   POWER_DCDC_FREQSET                        (0x37)
#define   POWER_VLTF_CHGSET                         (0x38)
#define   POWER_VHTF_CHGSET                         (0x39)
#define   POWER_APS_WARNING1                        (0x3A)
#define   POWER_APS_WARNING2                        (0x3B)
#define   POWER_VLTF_DISCHGSET                      (0x3C)
#define   POWER_VHTF_DISCHGSET                      (0x3D)
#define   POWER_DCDC_MODESET                        (0x80)
#define   POWER_VOUT_MONITOR                        (0x81)
#define   POWER_ADC_EN1                             (0x82)
#define   POWER_ADC_EN2                             (0x83)
#define   POWER_ADC_SPEED                           (0x84)
#define   POWER_ADC_INPUTRANGE                      (0x85)
#define   POWER_TIMER_CTL                           (0x8A)
#define   POWER_VBUS_DET_SRP                        (0x8B)
#define   POWER_HOTOVER_CTL                         (0x8F)
#define   POWER_GPIO0_CTL                           (0x90)
#define   POWER_GPIO0_VOL                           (0x91)
#define   POWER_GPIO1_CTL                           (0x92)
#define   POWER_GPIO2_CTL                           (0x93)
#define   POWER_GPIO012_SIGNAL                      (0x94)
#define   POWER_SENSE_CTL                           (0x95)
#define   POWER_SENSE_SIGNAL                        (0x96)
#define   POWER_GPIO20_PDCTL                        (0x97)
#define   POWER_PWM1_FREQ                           (0x98)
#define   POWER_PWM1_DUTYDE                         (0x99)
#define   POWER_PWM1_DUTY                           (0x9A)
#define   POWER_PWM2_FREQ                           (0x9B)
#define   POWER_PWM2_DUTYDE                         (0x9C)
#define   POWER_PWM2_DUTY                           (0x9D)
#define   POWER_RSTO_CTL                            (0x9E)
#define   POWER_GPIO67_CTL                          (0x9F)
#define   POWER_INTEN1                              (0x40)
#define   POWER_INTEN2                              (0x41)
#define   POWER_INTEN3                              (0x42)
#define   POWER_INTEN4                              (0x43)
#define   POWER_INTSTS1                             (0x44)
#define   POWER_INTSTS2                             (0x45)
#define   POWER_INTSTS3                             (0x46)
#define   POWER_INTSTS4                             (0x47)
#define   POWER_COULOMB_CTL                         (0xB8)

//adc data register
#define   POWER_BAT_AVERVOL_H8                      (0x78)
#define   POWER_BAT_AVERVOL_L4                      (0x79)
#define   POWER_BAT_RTVOL_H8                   	    (0x50)
#define   POWER_BAT_RTVOL_L4                        (0x51)
#define   POWER_BAT_AVERCHGCUR_H8                   (0x7A)
#define   POWER_BAT_AVERCHGCUR_L5                   (0x7B)
#define   POWER_ACIN_VOL_H8                         (0x56)
#define   POWER_ACIN_VOL_L4                         (0x57)
#define   POWER_ACIN_CUR_H8                         (0x58)
#define   POWER_ACIN_CUR_L4                         (0x59)
#define   POWER_VBUS_VOL_H8                         (0x5A)
#define   POWER_VBUS_VOL_L4                         (0x5B)
#define   POWER_VBUS_CUR_H8                         (0x5C)
#define   POWER_VBUS_CUR_L4                         (0x5D)
#define   POWER_BAT_AVERDISCHGCUR_H8                (0x7C)
#define   POWER_BAT_AVERDISCHGCUR_L5                (0x7D)
#define   POWER_APS_AVERVOL_H8                      (0x7E)
#define   POWER_APS_AVERVOL_L4                      (0x7F)
#define   POWER_BAT_CHGCOULOMB3                     (0xB0)
#define   POWER_BAT_CHGCOULOMB2                     (0xB1)
#define   POWER_BAT_CHGCOULOMB1                     (0xB2)
#define   POWER_BAT_CHGCOULOMB0                     (0xB3)
#define   POWER_BAT_DISCHGCOULOMB3                  (0xB4)
#define   POWER_BAT_DISCHGCOULOMB2                  (0xB5)
#define   POWER_BAT_DISCHGCOULOMB1                  (0xB6)
#define   POWER_BAT_DISCHGCOULOMB0                  (0xB7)
#define   POWER_BAT_POWERH8					        (0x70)
#define   POWER_BAT_POWERM8                 		(0x71)
#define   POWER_BAT_POWERL8                  		(0x72)

//define AXP20 REGISTER
#define   BOOT_POWER20_STATUS              			(0x00)
#define   BOOT_POWER20_MODE_CHGSTATUS      			(0x01)
#define   BOOT_POWER20_OTG_STATUS          			(0x02)
#define   BOOT_POWER20_VERSION         	   			(0x03)
#define   BOOT_POWER20_DATA_BUFFER0        			(0x04)
#define   BOOT_POWER20_DATA_BUFFER1        			(0x05)
#define   BOOT_POWER20_DATA_BUFFER2        			(0x06)
#define   BOOT_POWER20_DATA_BUFFER3        			(0x07)
#define   BOOT_POWER20_DATA_BUFFER4        			(0x08)
#define   BOOT_POWER20_DATA_BUFFER5        			(0x09)
#define   BOOT_POWER20_DATA_BUFFER6        			(0x0a)
#define   BOOT_POWER20_DATA_BUFFER7        			(0x0b)
#define   BOOT_POWER20_DATA_BUFFER8        			(0x0c)
#define   BOOT_POWER20_DATA_BUFFER9        			(0x0d)
#define   BOOT_POWER20_DATA_BUFFER10       			(0x0e)
#define   BOOT_POWER20_DATA_BUFFER11       			(0x0f)
#define   BOOT_POWER20_OUTPUT_CTL      	   			(0x12)
#define   BOOT_POWER20_DC2OUT_VOL          			(0x23)
#define   BOOT_POWER20_LDO3_DC2_DVM        			(0x25)
#define   BOOT_POWER20_DC3OUT_VOL          			(0x27)
#define   BOOT_POWER20_LDO24OUT_VOL        			(0x28)
#define   BOOT_POWER20_LDO3OUT_VOL         			(0x29)
#define   BOOT_POWER20_IPS_SET             			(0x30)
#define   BOOT_POWER20_VOFF_SET            			(0x31)
#define   BOOT_POWER20_OFF_CTL             			(0x32)
#define   BOOT_POWER20_CHARGE1             			(0x33)
#define   BOOT_POWER20_CHARGE2             			(0x34)
#define   BOOT_POWER20_BACKUP_CHG          			(0x35)
#define   BOOT_POWER20_POK_SET             			(0x36)
#define   BOOT_POWER20_DCDC_FREQSET        			(0x37)
#define   BOOT_POWER20_VLTF_CHGSET         			(0x38)
#define   BOOT_POWER20_VHTF_CHGSET         			(0x39)
#define   BOOT_POWER20_APS_WARNING1        			(0x3A)
#define   BOOT_POWER20_APS_WARNING2        			(0x3B)
#define   BOOT_POWER20_VLTF_DISCHGSET      			(0x3C)
#define   BOOT_POWER20_VHTF_DISCHGSET      			(0x3D)
#define   BOOT_POWER20_DCDC_MODESET        			(0x80)
#define   BOOT_POWER20_VOUT_MONITOR        			(0x81)
#define   BOOT_POWER20_ADC_EN1             			(0x82)
#define   BOOT_POWER20_ADC_EN2             			(0x83)
#define   BOOT_POWER20_ADC_SPEED           			(0x84)
#define   BOOT_POWER20_ADC_INPUTRANGE      			(0x85)
#define   BOOT_BOOT_POWER20_GPIO1ADC_VTH   			(0x86)
#define   BOOT_POWER20_GPIO1ADC_VTL        			(0x87)
#define   BOOT_POWER20_TIMER_CTL           			(0x8A)
#define   BOOT_POWER20_VBUS_DET_SRP        			(0x8B)
#define   BOOT_POWER20_HOTOVER_CTL         			(0x8F)
#define   BOOT_POWER20_GPIO0_CTL           			(0x90)
#define   BOOT_POWER20_GPIO0_VOL           			(0x91)
#define   BOOT_POWER20_GPIO1_CTL           			(0x92)
#define   BOOT_POWER20_GPIO2_CTL           			(0x93)
#define   BOOT_POWER20_GPIO012_SIGNAL      			(0x94)
#define   BOOT_POWER20_GPIO3_CTL           			(0x95)
#define   BOOT_POWER20_GPIO012_PDCTL       			(0x97)
#define   BOOT_POWER20_INTEN1              			(0x40)
#define   BOOT_POWER20_INTEN2              			(0x41)
#define   BOOT_POWER20_INTEN3              			(0x42)
#define   BOOT_POWER20_INTEN4              			(0x43)
#define   BOOT_POWER20_INTEN5              			(0x44)
#define   BOOT_POWER20_INTSTS1             			(0x48)
#define   BOOT_POWER20_INTSTS2             			(0x49)
#define   BOOT_POWER20_INTSTS3             			(0x4a)
#define   BOOT_POWER20_INTSTS4             			(0x4b)
#define   BOOT_POWER20_INTSTS5             			(0x4c)
#define   BOOT_POWER20_COULOMB_CTL         			(0xB8)
#define   BOOT_POWER20_COULOMB_CAL					(0xB9)

//adc data register
#define   BOOT_POWER20_BAT_AVERVOL_H8          		(0x78)
#define   BOOT_POWER20_BAT_AVERVOL_L4          		(0x79)
#define   BOOT_POWER20_BAT_AVERCHGCUR_H8       		(0x7A)
#define   BOOT_POWER20_BAT_AVERCHGCUR_L4       		(0x7B)
#define   BOOT_POWER20_ACIN_VOL_H8             		(0x56)
#define   BOOT_POWER20_ACIN_VOL_L4             		(0x57)
#define   BOOT_POWER20_ACIN_CUR_H8             		(0x58)
#define   BOOT_POWER20_ACIN_CUR_L4             		(0x59)
#define   BOOT_POWER20_VBUS_VOL_H8             		(0x5A)
#define   BOOT_POWER20_VBUS_VOL_L4             		(0x5B)
#define   BOOT_POWER20_VBUS_CUR_H8             		(0x5C)
#define   BOOT_POWER20_VBUS_CUR_L4             		(0x5D)
#define   BOOT_POWER20_BAT_AVERDISCHGCUR_H8    		(0x7C)
#define   BOOT_POWER20_BAT_AVERDISCHGCUR_L5    		(0x7D)
#define   BOOT_POWER20_APS_AVERVOL_H8          		(0x7E)
#define   BOOT_POWER20_APS_AVERVOL_L4          		(0x7F)
#define   BOOT_POWER20_BAT_CHGCOULOMB3         		(0xB0)
#define   BOOT_POWER20_BAT_CHGCOULOMB2         		(0xB1)
#define   BOOT_POWER20_BAT_CHGCOULOMB1         		(0xB2)
#define   BOOT_POWER20_BAT_CHGCOULOMB0         		(0xB3)
#define   BOOT_POWER20_BAT_DISCHGCOULOMB3      		(0xB4)
#define   BOOT_POWER20_BAT_DISCHGCOULOMB2      		(0xB5)
#define   BOOT_POWER20_BAT_DISCHGCOULOMB1      		(0xB6)
#define   BOOT_POWER20_BAT_DISCHGCOULOMB0      		(0xB7)
#define   BOOT_POWER20_BAT_POWERH8             		(0x70)
#define   BOOT_POWER20_BAT_POWERM8             		(0x71)
#define   BOOT_POWER20_BAT_POWERL8             		(0x72)





#endif /* _BOOT_POWER_I_H_ */
