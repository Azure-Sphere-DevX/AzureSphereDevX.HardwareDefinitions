/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This file defines the mapping from the MT3620 reference development board (RDB) to the
// 'sample hardware' abstraction used by the samples at https://github.com/Azure/azure-sphere-samples.
// Some peripherals are on-board on the RDB, while other peripherals must be attached externally if needed.
// https://docs.microsoft.com/en-us/azure-sphere/app-development/manage-hardware-dependencies
// to enable apps to work across multiple hardware variants.

// This file is autogenerated from ../../azure_sphere_remotex_with_pwm.json.  Do not edit it directly.

#pragma once
#include "avnet_mt3620_sk.h"

// STATUS_LED_YELLOW
#define STATUS_LED AVNET_MT3620_SK_APP_STATUS_LED_YELLOW

// WLAN_STATUS_LED_YELLOW
#define WLAN_STATUS_LED_YELLOW AVNET_MT3620_SK_WLAN_STATUS_LED_YELLOW

// USER_LED_RED
#define USER_LED_RED AVNET_MT3620_SK_USER_LED_RED

// USER_LED_GREEN
#define USER_LED_GREEN AVNET_MT3620_SK_USER_LED_GREEN

// USER_LED_BLUE
#define USER_LED_BLUE AVNET_MT3620_SK_USER_LED_BLUE

// Button B
#define BUTTON_A AVNET_MT3620_SK_USER_BUTTON_A

// Button B
#define BUTTON_B AVNET_MT3620_SK_USER_BUTTON_B

// PIN_16
#define PIN_16 AVNET_MT3620_SK_GPIO16

// PIN_16
#define PIN_17 AVNET_MT3620_SK_GPIO17

// I2C_ISU2
#define I2C_MASTER AVNET_MT3620_SK_ISU2_I2C

// SPI_ISU1
#define SPI_MASTER AVNET_MT3620_SK_ISU1_SPI

// UART_ISU0
#define UART AVNET_MT3620_SK_ISU0_UART

// PWM CONTROLLER 0: channel 0 is exposed on SOCKET1 pin PWM, channel 1 is exposed on: SOCKET2 pin PWM and UART/BLE Connector pin 9, channel 2 is exposed on: SOCKET1 pin INT, SOCKET2 pin INT and UART/BLE Connector pin 7. Pins for this controller are shared with AVNET_MT3620_SK_GPIO0, AVNET_MT3620_SK_GPIO1 and AVNET_MT3620_SK_GPIO2. If this PWM controller is requested, none of these GPIOs can be used.
#define PWM AVNET_MT3620_SK_PWM_CONTROLLER0

#define ADC AVNET_MT3620_SK_ADC_CONTROLLER0
