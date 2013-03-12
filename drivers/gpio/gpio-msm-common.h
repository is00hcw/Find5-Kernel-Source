/* Copyright (c) 2012, Code Aurora Forum. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */
#ifndef __ARCH_ARM_MACH_MSM_GPIO_COMMON_H
#define __ARCH_ARM_MACH_MSM_GPIO_COMMON_H

extern int msm_show_resume_irq_mask;

unsigned __msm_gpio_get_inout(unsigned gpio);
void __msm_gpio_set_inout(unsigned gpio, unsigned val);
void __msm_gpio_set_config_direction(unsigned gpio, int input, int val);
void __msm_gpio_set_polarity(unsigned gpio, unsigned val);
unsigned __msm_gpio_get_intr_status(unsigned gpio);
//wjp test for cr400562
unsigned __msm_gpio_get_intr_cfg_enable(unsigned gpio);
//wjp test for cr400562
void __msm_gpio_set_intr_status(unsigned gpio);
unsigned __msm_gpio_get_intr_config(unsigned gpio);
void __msm_gpio_set_intr_cfg_enable(unsigned gpio, unsigned val);
void __msm_gpio_set_intr_cfg_type(unsigned gpio, unsigned type);
void __gpio_tlmm_config(unsigned config);
void __msm_gpio_install_direct_irq(unsigned gpio, unsigned irq,
					unsigned int input_polarity);
#endif