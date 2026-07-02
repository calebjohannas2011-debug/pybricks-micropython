// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2026 The Pybricks Authors

#include "stm32f070xb.h"

#define MICROPY_HW_BOARD_NAME                   "BOOST Move Hub"
#define MICROPY_HW_MCU_NAME                     "STM32F070RB"

#define PYBRICKS_HUB_NAME                       "movehub"
#define PYBRICKS_HUB_CLASS_NAME                 (MP_QSTR_MoveHub)
#define PYBRICKS_HUB_MOVEHUB                    (1)

// Pybricks modules
#define PYBRICKS_PY_COMMON                      (1)
#define PYBRICKS_PY_COMMON_BLE                  (1)
#define PYBRICKS_PY_COMMON_CHARGER              (0)
#define PYBRICKS_PY_COMMON_COLOR_LIGHT          (1)
#define PYBRICKS_PY_COMMON_CONTROL              (0) // Disabled to make room for Levels 1 and 2
#define PYBRICKS_PY_COMMON_IMU                  (1) // Required for constructor geometry dependencies
#define PYBRICKS_PY_COMMON_KEYPAD               (1)
#define PYBRICKS_PY_COMMON_KEYPAD_HUB_BUTTONS   (1)
#define PYBRICKS_PY_COMMON_LIGHT_ARRAY          (0)
#define PYBRICKS_PY_COMMON_LIGHT_MATRIX         (0)
#define PYBRICKS_PY_COMMON_LOGGER               (1) // Required by the core common library build
#define PYBRICKS_PY_COMMON_MOTOR_MODEL          (0)
#define PYBRICKS_PY_COMMON_MOTORS               (1)
#define PYBRICKS_PY_COMMON_SYSTEM               (1)
#define PYBRICKS_PY_EV3DEVICES                  (0)
#define PYBRICKS_PY_EXPERIMENTAL                (0)
#define PYBRICKS_PY_HUBS                        (1)
#define PYBRICKS_PY_IODEVICES                   (1)
#define PYBRICKS_PY_IODEVICES_ANALOG_SENSOR     (0)
#define PYBRICKS_PY_IODEVICES_DC_MOTOR          (0)
#define PYBRICKS_PY_IODEVICES_I2C_DEVICE        (0)
#define PYBRICKS_PY_IODEVICES_LUMP_DEVICE       (0)
#define PYBRICKS_PY_IODEVICES_LWP3_DEVICE       (1) // Keep for core LEGO Wireless Protocol
#define PYBRICKS_PY_IODEVICES_PUP_DEVICE        (1) // Keep for attachments
#define PYBRICKS_PY_IODEVICES_UART_DEVICE       (0)
#define PYBRICKS_PY_IODEVICES_XBOX_CONTROLLER   (0) // Removed to prevent heavy RAM usage
#define PYBRICKS_PY_NXTDEVICES                  (0)
#define PYBRICKS_PY_PARAMETERS                  (1)
#define PYBRICKS_PY_PARAMETERS_BUTTON           (1) // Required to fix button compile error
#define PYBRICKS_PY_PARAMETERS_BUTTON_REMOTE_ONLY (1) // Minimizes button size impact
#define PYBRICKS_PY_PARAMETERS_GEOMETRY         (1) // Required to fix Axis_Z / Axis_X compile errors
#define PYBRICKS_PY_PARAMETERS_ICON             (0)
#define PYBRICKS_PY_PARAMETERS_IMAGE            (0)
#define PYBRICKS_PY_DEVICES                     (1)
#define PYBRICKS_PY_PUPDEVICES                  (1)
#define PYBRICKS_PY_PUPDEVICES_DUPLO_TRAIN      (0)
#define PYBRICKS_PY_PUPDEVICES_MARIO            (0)
#define PYBRICKS_PY_PUPDEVICES_REMOTE           (0)
#define PYBRICKS_PY_PUPDEVICES_TECHNIC_MOVE_HUB (0)
#define PYBRICKS_PY_ROBOTICS                    (0)
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_GYRO     (0)
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_SPIKE    (0)
#define PYBRICKS_PY_TOOLS                       (1)
#define PYBRICKS_PY_TOOLS_HUB_MENU              (0)
#define PYBRICKS_PY_TOOLS_APP_DATA              (1)

// Pybricks options
#define PYBRICKS_OPT_COMPILER                   (1)
#define PYBRICKS_OPT_USE_STACK_END_AS_TOP       (1)
#define PYBRICKS_OPT_RAW_REPL                   (0)
#define PYBRICKS_OPT_FLOAT                      (1)
#define PYBRICKS_OPT_TERSE_ERR                  (1) // Enabled to compress error text and save space
#define PYBRICKS_OPT_EXTRA_LEVEL1               (1)
#define PYBRICKS_OPT_EXTRA_LEVEL2               (1)
#define PYBRICKS_OPT_CUSTOM_IMPORT              (1)
#define PYBRICKS_OPT_NATIVE_MOD                 (0)

#include "../_common/mpconfigport.h"
