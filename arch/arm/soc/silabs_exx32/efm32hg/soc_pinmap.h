/*
 * Copyright (c) 2018 Marcio Montenegro
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Silabs EFM32HG MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _SILABS_EFM32HG_SOC_PINMAP_H_
#define _SILABS_EFM32HG_SOC_PINMAP_H_

#include <soc.h>
#include <em_gpio.h>

#ifdef CONFIG_SOC_PART_NUMBER_EFM32HG322F64
#ifdef CONFIG_UART_GECKO_0
#if (CONFIG_UART_GECKO_0_GPIO_LOC == 0)
#define PIN_UART0_TXD {gpioPortE, 10, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortE, 11, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_0_GPIO_LOC == 3)
#define PIN_UART0_TXD {gpioPortE, 13, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortE, 12, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_0_GPIO_LOC == 4)
#define PIN_UART0_TXD {gpioPortB, 7, gpioModePushPull, 1}
#define PIN_UART0_RXD {gpioPortB, 8, gpioModeInput, 1}
#else
#error ("Serial Driver for Gecko MCUs not implemented for this location index")
#endif
#endif /* CONFIG_UART_GECKO_0 */

#ifdef CONFIG_UART_GECKO_1
#if (CONFIG_UART_GECKO_1_GPIO_LOC == 0)
#define PIN_UART1_TXD {gpioPortE, 10, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortE, 11, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_1_GPIO_LOC == 2)
#define PIN_UART1_TXD {gpioPortD, 7, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortD, 6, gpioModeInput, 1}
#elif (CONFIG_UART_GECKO_1_GPIO_LOC == 4)
#define PIN_UART1_TXD {gpioPortF, 2, gpioModePushPull, 1}
#define PIN_UART1_RXD {gpioPortA, 0, gpioModeInput, 1}
#else
#error ("Serial Driver for Gecko MCUs not implemented for this location index")
#endif
#endif /* CONFIG_UART_GECKO_1 */
#else
#error ("Pinmap not available for this for Happy Gecko MCU")
#endif /* SOC_PART_NUMBER_EFM32HG322F64*/

#endif /* _SILABS_EFM32HG_SOC_PINMAP_H_ */