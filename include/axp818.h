/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * (C) Copyright 2015 Vishnu Patekar <vishnupatekar0510@gmail.com>
 *
 * X-Powers AXP818 Power Management IC driver
 */

#define AXP818_CHIP_ID		0x03

#define AXP818_OUTPUT_CTRL1	0x10
#define AXP818_OUTPUT_CTRL1_DCDC1_EN	(1 << 0)
#define AXP818_OUTPUT_CTRL1_DCDC2_EN	(1 << 1)
#define AXP818_OUTPUT_CTRL1_DCDC3_EN	(1 << 2)
#define AXP818_OUTPUT_CTRL1_DCDC4_EN	(1 << 3)
#define AXP818_OUTPUT_CTRL1_DCDC5_EN	(1 << 4)
#define AXP818_OUTPUT_CTRL1_DCDC6_EN	(1 << 5)
#define AXP818_OUTPUT_CTRL1_DCDC7_EN	(1 << 6)
#define AXP818_OUTPUT_CTRL2	0x12
#define AXP818_OUTPUT_CTRL2_ELDO1_EN	(1 << 0)
#define AXP818_OUTPUT_CTRL2_ELDO2_EN	(1 << 1)
#define AXP818_OUTPUT_CTRL2_ELDO3_EN	(1 << 2)
#define AXP818_OUTPUT_CTRL2_DLDO1_EN	(1 << 3)
#define AXP818_OUTPUT_CTRL2_DLDO2_EN	(1 << 4)
#define AXP818_OUTPUT_CTRL2_DLDO3_EN	(1 << 5)
#define AXP818_OUTPUT_CTRL2_DLDO4_EN	(1 << 6)
#define AXP818_OUTPUT_CTRL2_SW_EN	(1 << 7)
#define AXP818_OUTPUT_CTRL3	0x13
#define AXP818_OUTPUT_CTRL3_FLDO1_EN	(1 << 2)
#define AXP818_OUTPUT_CTRL3_FLDO2_EN	(1 << 3)
#define AXP818_OUTPUT_CTRL3_FLDO3_EN	(1 << 4)
#define AXP818_OUTPUT_CTRL3_ALDO1_EN	(1 << 5)
#define AXP818_OUTPUT_CTRL3_ALDO2_EN	(1 << 6)
#define AXP818_OUTPUT_CTRL3_ALDO3_EN	(1 << 7)

#define AXP818_DLDO1_CTRL	0x15
#define AXP818_DLDO2_CTRL	0x16
#define AXP818_DLDO3_CTRL	0x17
#define AXP818_DLDO4_CTRL	0x18
#define AXP818_ELDO1_CTRL	0x19
#define AXP818_ELDO2_CTRL	0x1a
#define AXP818_ELDO3_CTRL	0x1b
#define AXP818_FLDO1_CTRL	0x1c
#define AXP818_FLDO2_3_CTRL	0x1d
#define AXP818_FLDO2_3_CTRL_FLDO3_VOL	(1 << 4)
#define AXP818_DCDC1_CTRL	0x20
#define AXP818_DCDC2_CTRL	0x21
#define AXP818_DCDC3_CTRL	0x22
#define AXP818_DCDC4_CTRL	0x23
#define AXP818_DCDC5_CTRL	0x24
#define AXP818_DCDC6_CTRL	0x25
#define AXP818_DCDC7_CTRL	0x26

#define AXP818_ALDO1_CTRL	0x28
#define AXP818_ALDO2_CTRL	0x29
#define AXP818_ALDO3_CTRL	0x2a

#define AXP818_SHUTDOWN		0x32
#define AXP818_SHUTDOWN_POWEROFF	(1 << 7)

/* For axp_gpio.c */
#ifdef CONFIG_AXP818_POWER
#define AXP_POWER_STATUS		0x00
#define AXP_POWER_STATUS_ALDO_IN		BIT(0)
#define AXP_GPIO0_CTRL			0x90
#define AXP_GPIO1_CTRL			0x92
#define AXP_GPIO_CTRL_OUTPUT_LOW	0x00 /* Drive pin low */
#define AXP_GPIO_CTRL_OUTPUT_HIGH	0x01 /* Drive pin high */
#define AXP_GPIO_CTRL_INPUT		0x02 /* Input */
#define AXP_GPIO_STATE			0x94
#define AXP_GPIO_STATE_OFFSET		0
#endif
