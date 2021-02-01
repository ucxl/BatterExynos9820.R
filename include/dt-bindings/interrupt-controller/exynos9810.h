/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *
 * Author: Youngmin Nam <youngmin.nam@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Device Tree binding constants for Exynos9810 interrupt controller.
*/

#ifndef _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_9810_H
#define _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_9810_H

#include <dt-bindings/interrupt-controller/arm-gic.h>

#define INTREQ__USI_CMGP00					0
#define INTREQ__I2C_CMGP00					1
#define INTREQ__USI_CMGP01					2
#define INTREQ__I2C_CMGP01					3
#define INTREQ__USI_CMGP02					4
#define INTREQ__I2C_CMGP02					5
#define INTREQ__USI_CMGP03					6
#define INTREQ__I2C_CMGP03					7
#define INTREQ__ADC_CMGP_S0					8
#define INTREQ__EXT_INTM0_0					9
#define INTREQ__EXT_INTM0_1					10
#define INTREQ__EXT_INTM0_2					11
#define INTREQ__EXT_INTM0_3					12
#define INTREQ__EXT_INTM0_4					13
#define INTREQ__EXT_INTM0_5					14
#define INTREQ__EXT_INTM0_6					15
#define INTREQ__EXT_INTM0_7					16
#define INTREQ__EXT_INTM1_0					17
#define INTREQ__EXT_INTM1_1					18
#define INTREQ__EXT_INTM1_2					19
#define INTREQ__EXT_INTM1_3					20
#define INTREQ__EXT_INTM1_4					21
#define INTREQ__EXT_INTM1_5					22
#define INTREQ__EXT_INTM1_6					23
#define INTREQ__EXT_INTM1_7					24
#define INTREQ__EXT_INTM4_0					25
#define INTREQ__EXT_INTM4_1					26
#define INTREQ__EXT_INTM4_2					27
#define INTREQ__EXT_INTM4_3					28
#define INTREQ__NOTIFY						30
#define INTREQ__RTC_ALARM_INT					31
#define INTREQ__RTC_TIC_INT_0					32
#define INTREQ__TOP_RTC_ALARM_INT				33
#define INTREQ__TOP_RTC_TIC_INT_0				34
#define INTREQ__SPEEDY_APM					35
#define INTREQ__EINT0						36
#define INTREQ__EINT1						37
#define INTREQ__EINT2						38
#define INTREQ__EINT3						39
#define INTREQ__EINT4						40
#define INTREQ__EINT5						41
#define INTREQ__EINT6						42
#define INTREQ__EINT7						43
#define INTREQ__EINT8						44
#define INTREQ__EINT9						45
#define INTREQ__EINT10						46
#define INTREQ__EINT11						47
#define INTREQ__EINT12						48
#define INTREQ__EINT13						49
#define INTREQ__EINT14						50
#define INTREQ__EINT15						51
#define INTREQ__EINT16						52
#define INTREQ__EINT17						53
#define INTREQ__EINT18						54
#define INTREQ__EINT19						55
#define INTREQ__EINT20						56
#define INTREQ__EINT21						57
#define INTREQ__EINT22						58
#define INTREQ__EINT23						59
#define INTREQ__EINT24						60
#define INTREQ__EINT25						61
#define INTREQ__EINT26						62
#define INTREQ__EINT27						63
#define INTREQ__EINT28						64
#define INTREQ__EINT29						65
#define INTREQ__EINT30						66
#define INTREQ__EINT31						67
#define INTREQ__MAILBOX_APM2AP					68
#define INTREQ__MAILBOX_CP2AP					69
#define INTREQ__S_MAILBOX_CP2AP					70
#define INTREQ__MAILBOX_GNSS2AP					71
#define INTREQ__MAILBOX_CHUB2AP					72
#define INTREQ__MAILBOX_VTS2AP					73
#define INTREQ__ALIVE_CP_ACTIVE					74
#define INTREQ__ALIVE_GNSS_ACTIVE				75
#define INTREQ__ABOX_GIC400					76
#define INTREQ__AUD_PPMU_UPPER_NORMAL				77
#define INTREQ__AUD_PPMU_LOWER					78
#define INTREQ__AUD_SMMU					79
#define INTREQ__AUD_TREX_DEBUG					80
#define INTREQ__TREX_P_BUS1_DEBUG				81
#define INTREQ__TREX_DEBUG					82
#define INTREQ__TREX_P_DEBUG					83
#define INTREQ__TREX_RB_DEBUG					84
#define INTREQ__TREX_PPMU_BUSCDP0				85
#define INTREQ__TREX_PPMU_BUSCDP1				86
#define INTREQ__TREX_PPMU_SBIC					87
#define INTREQ__TREX_PPMU_SIREX					88
#define INTREQ__TREX_PPMU_IVASC					89
#define INTREQ__PPFW						90
#define INTREQ__SPDMA						91
#define INTREQ__PDMA0						92
#define INTREQ__SBIC						93
#define INTREQ__USB3_REMOTE_WAKEUP				94
#define INTREQ__USB2_REMOTE_WAKEUP				95
#define INTREQ__USB2_REMOTE_CONNECT				96
#define INTREQ__USB2_REMOTE_TIMER				97
#define INTREQ__WDT_VTS						98
#define INTREQ__MAILBOX_VTS2CHUB				100
#define INTREQ__ISRAMC_PCM					101
#define INTREQ__ISRAMC_CODE					102
#define INTREQ__ISRAMC_DATA					103
#define INTREQ__USI_CHUB00					104
#define INTREQ__USI_CHUB01					105
#define INTREQ__PDMA_CHUB					106
#define INTREQ__TIMER_CHUB					107
#define INTREQ__WDT_CHUB					108
#define INTREQ__GPIO_CHUB					109
#define INTREQ__I2C_CHUB00					110
#define INTREQ__I2C_CHUB01					111
#define INTREQ__PWM_CHUB_0					112
#define INTREQ__PWM_CHUB_1					113
#define INTREQ__PWM_CHUB_2					114
#define INTREQ__PWM_CHUB_3					115
#define INTREQ__PWM_CHUB_4					116
#define INTREQ__CCI_ERRINT					118
#define INTREQ__CCI_ERRFATAL					119
#define INTREQ__PPMUPPC_CCI_PPC_INTR				120
#define INTREQ__BDU_O_INT_PSCDC					121
#define INTREQ__TREX_D_CORE_debugInterrupt			122
#define INTREQ__TREX_D_CORE_ppcInterrupt_IRPS0			123
#define INTREQ__TREX_D_CORE_ppcInterrupt_IRPS1			124
#define INTREQ__TREX_D_CORE_ppcInterrupt_CP			125
#define INTREQ__TREX_P0_CORE_debugInterrupt			126
#define INTREQ__TREX_P1_CORE_debugInterrupt			127
#define INTREQ__PPMU_CPUCL0_O_interrupt_upper_or_normal		128
#define INTREQ__PPMU_CPUCL0_O_interrupt_lower			129
#define INTREQ__PPMU_CPUCL1_O_interrupt_upper_or_normal		130
#define INTREQ__PPMU_CPUCL1_O_interrupt_lower			131
#define INTREQ__PPMU_G3D0_O_interrupt_upper_or_normal		132
#define INTREQ__PPMU_G3D0_O_interrupt_lower			133
#define INTREQ__PPMU_G3D1_O_interrupt_upper_or_normal		134
#define INTREQ__PPMU_G3D1_O_interrupt_lower			135
#define INTREQ__PPMU_G3D2_O_interrupt_upper_or_normal		136
#define INTREQ__PPMU_G3D2_O_interrupt_lower			137
#define INTREQ__PPMU_G3D3_O_interrupt_upper_or_normal		138
#define INTREQ__PPMU_G3D3_O_interrupt_lower			139
#define INTREQ__PPFW_G3D_INTERRUPT				140
#define INTREQ__PPFW_IO_INTERRUPT				141
#define INTREQ__PPCFW_G3D_INT					142
#define INTREQ__PPFW_DP_INTERRUPT				143
#define INTREQ__CPUCL0_PMUIRQ_0					144
#define INTREQ__CPUCL0_PMUIRQ_1					145
#define INTREQ__CPUCL0_PMUIRQ_2					146
#define INTREQ__CPUCL0_PMUIRQ_3					147
#define INTREQ__CPUCL0_CLUSTERPMUIRQ				148
#define INTREQ__CPUCL0_CTIIRQ_0					149
#define INTREQ__CPUCL0_CTIIRQ_1					150
#define INTREQ__CPUCL0_CTIIRQ_2					151
#define INTREQ__CPUCL0_CTIIRQ_3					152
#define INTREQ__CPUCL0_COMMIRQ_0				153
#define INTREQ__CPUCL0_COMMIRQ_1				154
#define INTREQ__CPUCL0_COMMIRQ_2				155
#define INTREQ__CPUCL0_COMMIRQ_3				156
#define INTREQ__CPUCL0_ERRIRQ_0					157
#define INTREQ__CPUCL0_ERRIRQ_1					158
#define INTREQ__CPUCL0_ERRIRQ_2					159
#define INTREQ__CPUCL0_ERRIRQ_3					160
#define INTREQ__CPUCL0_ERRIRQ_4					161
#define INTREQ__CPUCL0_FAULTIRQ_0				162
#define INTREQ__CPUCL0_FAULTIRQ_1				163
#define INTREQ__CPUCL0_FAULTIRQ_2				164
#define INTREQ__CPUCL0_FAULTIRQ_3				165
#define INTREQ__CPUCL0_FAULTIRQ_4				166
#define INTREQ__CPUCL1_PMUIRQ_0					167
#define INTREQ__CPUCL1_PMUIRQ_1					168
#define INTREQ__CPUCL1_PMUIRQ_2					169
#define INTREQ__CPUCL1_PMUIRQ_3					170
#define INTREQ__CPUCL1_CTIIRQ_0					171
#define INTREQ__CPUCL1_CTIIRQ_1					172
#define INTREQ__CPUCL1_CTIIRQ_2					173
#define INTREQ__CPUCL1_CTIIRQ_3					174
#define INTREQ__CPUCL1_COMMIRQ_0				175
#define INTREQ__CPUCL1_COMMIRQ_1				176
#define INTREQ__CPUCL1_COMMIRQ_2				177
#define INTREQ__CPUCL1_COMMIRQ_3				178
#define INTREQ__CPUCL1_EXTERRIRQ				179
#define INTREQ__CPUCL1_INTERRIRQ				180
#define INTREQ__CPUCL1_GCUIRQ					181
#define INTREQ__DPU_DECON0_FRAME_START				182
#define INTREQ__DPU_DECON0_FRAME_DONE				183
#define INTREQ__DPU_DECON0_MDNIE_DIMMING_START			184
#define INTREQ__DPU_DECON0_MDNIE_DIMMING_END			185
#define INTREQ__DPU_DECON0_DQE_DIMMING_START			186
#define INTREQ__DPU_DECON0_DQE_DIMMING_END			187
#define INTREQ__DPU_DECON0_EXTRA				188
#define INTREQ__DPU_DSIM0					189
#define INTREQ__DPU_DSIM1					190
#define INTREQ__DPU_DECON1_FRAME_START				191
#define INTREQ__DPU_DECON1_FRAME_DONE				192
#define INTREQ__DPU_DECON1_EXTRA				193
#define INTREQ__DPU_DECON2_FRAME_START				194
#define INTREQ__DPU_DECON2_FRAME_DONE				195
#define INTREQ__DPU_DECON2_EXTRA				196
#define INTREQ__DPU_DMA_G0					197
#define INTREQ__DPU_DMA_G1					198
#define INTREQ__DPU_DMA_VG0					199
#define INTREQ__DPU_DMA_VG1					200
#define INTREQ__DPU_DMA_VGF					201
#define INTREQ__DPU_DMA_VGRF					202
#define INTREQ__DPU_DMA_WB					203
#define INTREQ__DPU_DPP_G0					204
#define INTREQ__DPU_DPP_G1					205
#define INTREQ__DPU_DPP_VG0					206
#define INTREQ__DPU_DPP_VG1					207
#define INTREQ__DPU_DPP_VGF0					208
#define INTREQ__DPU_DPP_VGF1					209
#define INTREQ__SYSMMU_DPUD0_SECURE				210
#define INTREQ__SYSMMU_DPUD0_NONSECURE				211
#define INTREQ__SYSMMU_DPUD1_SECURE				212
#define INTREQ__SYSMMU_DPUD1_NONSECURE				213
#define INTREQ__SYSMMU_DPUD2_SECURE				214
#define INTREQ__SYSMMU_DPUD2_NONSECURE				215
#define INTREQ__PPMU_DPUD0_UPPER_OR_NORMAL			216
#define INTREQ__PPMU_DPUD0_LOWER				217
#define INTREQ__PPMU_DPUD1_UPPER_OR_NORMAL			218
#define INTREQ__PPMU_DPUD1_LOWER				219
#define INTREQ__PPMU_DPUD2_UPPER_OR_NORMAL			220
#define INTREQ__PPMU_DPUD2_LOWER				221
#define INTREQ__BLK_DSPM_SCORE_MASTER_o_INTERRUPT_TO_CPU_0	222
#define INTREQ__BLK_DSPM_SCORE_MASTER_o_INTERRUPT_TO_CPU_1	223
#define INTREQ__BLK_DSPM_SCORE_MASTER_o_INTERRUPT_TO_CPU_2	224
#define INTREQ__TREX_PPMU_BUS1D0				225
#define INTREQ__TREX_P_PPMU_COREBUSC				226
#define INTREQ__BLK_DSPM_PPMU_DSPM0_O_interrupt_lower		228
#define INTREQ__BLK_DSPM_PPMU_DSPM0_O_interrupt_upper_or_normal	229
#define INTREQ__BLK_DSPM_PPMU_DSPM1_O_interrupt_lower		230
#define INTREQ__BLK_DSPM_PPMU_DSPM1_O_interrupt_upper_or_normal	231
#define INTREQ__TREX_D_CORE_ppcInterrupt_CORE_DP		232
#define INTREQ__TREX_P1_CORE_ppcInterrupt_CORE_P0P1		233
#define INTREQ__BLK_DSPM_SYSMMU_DSPM0_O_INTERRUPT_NONSECURE	234
#define INTREQ__BLK_DSPM_SYSMMU_DSPM0_O_INTERRUPT_SECURE	235
#define INTREQ__BLK_DSPM_SYSMMU_DSPM1_O_INTERRUPT_NONSECURE	236
#define INTREQ__BLK_DSPM_SYSMMU_DSPM1_O_INTERRUPT_SECURE	237
#define INTREQ__PPMU_FSYS0_LOWER				240
#define INTREQ__PPMU_FSYS0_UPPER				241
#define INTREQ__UFS_EMBD					242
#define INTREQ__GPIO_FSYS0					243
#define INTREQ__USB30DRD_Interrupt_00				244
#define INTREQ__USB30DRD_Interrupt_01				245
#define INTREQ__USB30DRD_FSVMINUS_GIC				246
#define INTREQ__USB30DRD_FSVPLUS_GIC				247
#define INTREQ__DP_LINK						248
#define INTREQ__MMC_CARD					249
#define INTREQ__GPIO_FSYS1					250
#define INTREQ__PPMU_FSYS1_LOWER				251
#define INTREQ__PPMU_FSYS1_UPPER_OR_NORMAL			252
#define INTREQ__PCIE_WIFI0					253
#define INTREQ__PCIE_WIFI1					254
#define INTREQ__PCIE_IA_WIFI0					255
#define INTREQ__PCIE_IA_WIFI1					256
#define INTREQ__RTIC						257
#define INTREQ__SSS_SWDT2					258
#define INTREQ__SSS_SWDT1					259
#define INTREQ__SSS_KM						260
#define INTREQ__SSS_MB						261
#define INTREQ__SSS						262
#define INTREQ__UFS_CARD					263
#define INTREQ__SYSMMU_FSYS1					264
#define INTREQ__G2D						265
#define INTREQ__JPEG						266
#define INTREQ__MSCL						267
#define INTREQ__ASTC						268
#define INTREQ__PPMU_G2DD0_interrupt_upper_or_normal		269
#define INTREQ__PPMU_G2DD0_interrupt_lower			270
#define INTREQ__PPMU_G2DD1_interrupt_upper_or_normal		271
#define INTREQ__PPMU_G2DD1_interrupt_lower			272
#define INTREQ__PPMU_G2DD2_interrupt_upper_or_normal		273
#define INTREQ__PPMU_G2DD2_interrupt_lower			274
#define INTREQ__SYSMMU_G2DD0_interrupt_nonsecure		275
#define INTREQ__SYSMMU_G2DD0_interrupt_secure			276
#define INTREQ__SYSMMU_G2DD1_interrupt_nonsecure		277
#define INTREQ__SYSMMU_G2DD1_interrupt_secure			278
#define INTREQ__SYSMMU_G2DD2_interrupt_nonsecure		279
#define INTREQ__SYSMMU_G2DD2_interrupt_secure			280
#define INTREQ__G3D_IRQMMU					281
#define INTREQ__G3D_IRQJOB					282
#define INTREQ__G3D_IRQGPU					283
#define INTREQ__G3D_IRQEVENT					284
#define INTREQ__BLK_ISPHQ_SYSMMU_ISPHQ_O_INTERRUPT_NONSECURE	285
#define INTREQ__BLK_ISPHQ_SYSMMU_ISPHQ_O_INTERRUPT_SECURE	286
#define INTREQ__BLK_ISPHQ_PPMU_ISPHQ_O_interrupt_upper_or_normal	287
#define INTREQ__BLK_ISPHQ_PPMU_ISPHQ_O_interrupt_lower		288
#define INTREQ__BLK_ISPHQ_ISPHQ_INTREQ0				289
#define INTREQ__BLK_ISPHQ_ISPHQ_INTREQ1				290
#define INTREQ__ISPLP_0						291
#define INTREQ__ISPLP_1						292
#define INTREQ__GDC						293
#define INTREQ__VRA						295
#define INTREQ__MC_SCALER_0					296
#define INTREQ__MC_SCALER_1					297
#define INTREQ__SYSMMU_ISPLP0_NONSECURE				298
#define INTREQ__SYSMMU_ISPLP0_SECURE				299
#define INTREQ__SYSMMU_ISPLP1_NONSECURE				300
#define INTREQ__SYSMMU_ISPLP1_SECURE				301
#define INTREQ__PPMU_ISPLP0_UPPER_NORMAL			302
#define INTREQ__PPMU_ISPLP0_LOWER				303
#define INTREQ__PPMU_ISPLP1_UPPER_NORMAL			304
#define INTREQ__PPMU_ISPLP1_LOWER				305
#define INTREQ_BLK_DCRD_SYSMMU_DCRD_O_INTERRUPT_NONSECURE	306
#define INTREQ_BLK_DCRD_SYSMMU_DCRD_O_INTERRUPT_SECURE		307
#define INTREQ_BLK_DCRD_PPMU_DCRD_O_interrupt_upper_or_normal	308
#define INTREQ_BLK_DCRD_PPMU_DCRD_O_interrupt_lower		309
#define INTREQ_BLK_DCRD_DCP_IntReq_0				310
#define INTREQ_BLK_DCRD_DCP_IntReq_1				311
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_0		312
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_1		313
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_2		314
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_3		315
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_4		316
#define INTREQ_BLK_DCPOST_CIP2_o_CIP2_INTERRUPT_5		317
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_0			318
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_1			319
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_2			320
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_3			321
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_4			322
#define INTREQ_BLK_DCF_CIP1_o_CIP1_INTERRUPT_5			323
#define INTREQ_BLK_DCF_SYSMMU_DCF_O_INTERRUPT_NONSECURE		324
#define INTREQ_BLK_DCF_SYSMMU_DCF_O_INTERRUPT_SECURE		325
#define INTREQ_BLK_DCF_PPMU_DCF_O_interrupt_upper_or_normal	326
#define INTREQ_BLK_DCF_PPMU_DCF_O_interrupt_lower		327
#define INTREQ__CSIS0						328
#define INTREQ__CSIS1						329
#define INTREQ__CSIS2						330
#define INTREQ__CSIS3						331
#define INTREQ__PDP_CORE0					332
#define INTREQ__PDP_CORE1					333
#define INTREQ__CSIS0_PDP_DMA					334
#define INTREQ__CSIS1_PDP_DMA					335
#define INTREQ__CSIS2_PDP_DMA					336
#define INTREQ__CSIS3_PDP_DMA					337
#define INTREQ__TAAM_0						338
#define INTREQ__TAAM_1						339
#define INTREQ__TAA_0						340
#define INTREQ__TAA_1						341
#define INTREQ__SYSMMU_ISPPRE_NONSECURE				342
#define INTREQ__SYSMMU_ISPPRE_SECURE				343
#define INTREQ__PPMU_ISPPRE_UPPER_NORMAL			344
#define INTREQ__PPMU_ISPPRE_LOWER				345
#define INTREQ__PDP0_STAT_DMA					346
#define INTREQ__PDP1_STAT_DMA					347
#define INTREQ__BLK_IVA_IVA_iva_ap_irq_aq_0			348
#define INTREQ__BLK_IVA_IVA_iva_ap_irq_aq_1			349
#define INTREQ__BLK_IVA_PPMU_IVA_O_interrupt_lower		350
#define INTREQ__BLK_IVA_PPMU_IVA_O_interrupt_upper_or_normal	351
#define INTREQ__BLK_IVA_SYSMMU_IVA_O_INTERRUPT_NONSECURE	352
#define INTREQ__BLK_IVA_SYSMMU_IVA_O_INTERRUPT_SECURE		353
#define INTREQ__BLK_IVA_TREX_RB_IVA_o_debugInterrupt		354
#define INTREQ__MFC						356
#define INTREQ__WFD						357
#define INTREQ__PPMU_MFCD0_interrupt_upper_or_normal		358
#define INTREQ__PPMU_MFCD0_interrupt_lower			359
#define INTREQ__PPMU_MFCD1_interrupt_upper_or_normal		360
#define INTREQ__PPMU_MFCD1_interrupt_lower			361
#define INTREQ__PPMU_MFCD2_interrupt_upper_or_normal		362
#define INTREQ__PPMU_MFCD2_interrupt_lower			363
#define INTREQ__SYSMMU_MFCD0_interrupt_nonsecure		364
#define INTREQ__SYSMMU_MFCD0_interrupt_secure			365
#define INTREQ__SYSMMU_MFCD1_interrupt_nonsecure		366
#define INTREQ__SYSMMU_MFCD1_interrupt_secure			367
#define INTREQ__DMC_TZCINT_MIF0					368
#define INTREQ__DMC_TEMPERR_MIF0				369
#define INTREQ__DMC_TEMPHOT_MIF0				370
#define INTREQ__DMC_PPMPINT_R_MIF0				371
#define INTREQ__DMC_PPMPINT_W_MIF0				372
#define INTREQ__PPMUPPC_DVFS_U_MIF0				373
#define INTREQ__PPMUPPC_DVFS_L_MIF0				374
#define INTREQ__DMC_TZCINT_MIF1					375
#define INTREQ__DMC_TEMPERR_MIF1				376
#define INTREQ__DMC_TEMPHOT_MIF1				377
#define INTREQ__DMC_PPMPINT_R_MIF1				378
#define INTREQ__DMC_PPMPINT_W_MIF1				379
#define INTREQ__PPMUPPC_DVFS_U_MIF1				380
#define INTREQ__PPMUPPC_DVFS_L_MIF1				381
#define INTREQ__DMC_TZCINT_MIF2					382
#define INTREQ__DMC_TEMPERR_MIF2				383
#define INTREQ__DMC_TEMPHOT_MIF2				384
#define INTREQ__DMC_PPMPINT_R_MIF2				385
#define INTREQ__DMC_PPMPINT_W_MIF2				386
#define INTREQ__PPMUPPC_DVFS_U_MIF2				387
#define INTREQ__PPMUPPC_DVFS_L_MIF2				388
#define INTREQ__DMC_TZCINT_MIF3					389
#define INTREQ__DMC_TEMPERR_MIF3				390
#define INTREQ__DMC_TEMPHOT_MIF3				391
#define INTREQ__DMC_PPMPINT_R_MIF3				392
#define INTREQ__DMC_PPMPINT_W_MIF3				393
#define INTREQ__PPMUPPC_DVFS_U_MIF3				394
#define INTREQ__PPMUPPC_DVFS_L_MIF3				395
#define INTREQ__GPIO_PERIC0					396
#define INTREQ__UART_DBG					397
#define INTREQ__USI00_USI					398
#define INTREQ__USI00_I2C					399
#define INTREQ__USI01_USI					400
#define INTREQ__USI01_I2C					401
#define INTREQ__USI02_USI					402
#define INTREQ__USI02_I2C					403
#define INTREQ__USI03_USI					404
#define INTREQ__USI03_I2C					405
#define INTREQ__USI04_USI					406
#define INTREQ__USI04_I2C					407
#define INTREQ__USI05_USI					408
#define INTREQ__USI05_I2C					409
#define INTREQ__PWM0						410
#define INTREQ__PWM1						411
#define INTREQ__PWM2						412
#define INTREQ__PWM3						413
#define INTREQ__PWM4						414
#define INTREQ__USI12_USI					415
#define INTREQ__USI12_I2C					416
#define INTREQ__USI13_USI					417
#define INTREQ__USI13_I2C					418
#define INTREQ__USI14_USI					419
#define INTREQ__USI14_I2C					420
#define INTREQ__GPIO_PERIC1					421
#define INTREQ__UART_BT						422
#define INTREQ__SPI_CAM0					423
#define INTREQ__I2C_CAM0					424
#define INTREQ__I2C_CAM1					425
#define INTREQ__I2C_CAM2					426
#define INTREQ__I2C_CAM3					427
#define INTREQ__USI06_USI					428
#define INTREQ__USI06_I2C					429
#define INTREQ__USI07_USI					430
#define INTREQ__USI07_I2C					431
#define INTREQ__USI08_USI					432
#define INTREQ__USI08_I2C					433
#define INTREQ__USI09_USI					434
#define INTREQ__USI09_I2C					435
#define INTREQ__USI10_USI					436
#define INTREQ__USI10_I2C					437
#define INTREQ__USI11_USI					438
#define INTREQ__USI11_I2C					439
#define INTREQ__CP2AP_WAKEUP					440
#define INTREQ__GNSS2AP_WAKEUP					441
#define INTREQ__GNSS2AP_WDOG_RESET				442
#define INTREQ__GNSS2AP						443
#define INTREQ__CP2AP_SFR_BUS_READY				444
#define INTREQ__CP2AP_TREX_CP					445
#define INTREQ__EINT32						446
#define INTREQ__EINT33						447
#define INTREQ__SPEEDY_SUB_APM					448
#define INTREQ__OTP_CON_TOP					462
#define INTREQ__OTP_CON_BIRA					463
#define INTREQ__WDT_CLUSTER0					464
#define INTREQ__WDT_CLUSTER1					465
#define INTREQ__MCT_G0						466
#define INTREQ__MCT_G1						467
#define INTREQ__MCT_G2						468
#define INTREQ__MCT_G3						469
#define INTREQ__MCT_L0						470
#define INTREQ__MCT_L1						471
#define INTREQ__MCT_L2						472
#define INTREQ__MCT_L3						473
#define INTREQ__MCT_L4						474
#define INTREQ__MCT_L5						475
#define INTREQ__MCT_L6						476
#define INTREQ__MCT_L7						477
#define INTREQ__TMU_TMU_TOP					478
#define INTREQ__TMU_TMU_SUB					479

#endif	/* _DT_BINDINGS_INTERRUPT_CONTROLLER_EXYNOS_9810_H */
