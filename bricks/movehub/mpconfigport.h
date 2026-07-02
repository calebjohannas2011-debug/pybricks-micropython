// SPDX-License-Identifier: MIT
// Copyright (c) 2018-2026 The Pybricks Authors

#include "stm32f070xb.h"

#define MICROPY_HW_BOARD_NAME                   "BOOST Move Hub"
#define MICROPY_HW_MCU_NAME                     "STM32F070RB"

#define PYBRICKS_HUB_NAME                       "movehub"
#define PYBRICKS_HUB_CLASS_NAME                 (MP_QSTR_MoveHub)
#define PYBRICKS_HUB_MOVEHUB                    (1)

// Core MicroPython fixes required to build LEVEL 2 features
#define MICROPY_PY_ARRAY                        (1)
#define MICROPY_PY_BUILTINS_SLICE               (1)

// Pybricks modules
#define PYBRICKS_PY_COMMON                      (1)
#define PYBRICKS_PY_COMMON_BLE                  (1) // Required for messaging & radio stack
#define PYBRICKS_PY_COMMON_CHARGER              (0)
#define PYBRICKS_PY_COMMON_COLOR_LIGHT          (1)
#define PYBRICKS_PY_COMMON_CONTROL              (0)
#define PYBRICKS_PY_COMMON_IMU                  (1) // Required to bypass C constructor geometry defaults
#define PYBRICKS_PY_COMMON_KEYPAD               (1)
#define PYBRICKS_PY_COMMON_KEYPAD_HUB_BUTTONS   (1)
#define PYBRICKS_PY_COMMON_LIGHT_ARRAY          (1)
#define PYBRICKS_PY_COMMON_LIGHT_MATRIX         (0)
#define PYBRICKS_PY_COMMON_LOGGER               (0)
#define PYBRICKS_PY_COMMON_MOTOR_MODEL          (0)
#define PYBRICKS_PY_COMMON_MOTORS               (1)
#define PYBRICKS_PY_COMMON_SYSTEM               (1)
#define PYBRICKS_PY_EXPERIMENTAL                (0)
#define PYBRICKS_PY_HUBS                        (1)
#define PYBRICKS_PY_IODEVICES                   (0)
#define PYBRICKS_PY_MESSAGING                   (1)
#define PYBRICKS_PY_MESSAGING_APP_DATA          (1)
#define PYBRICKS_PY_MESSAGING_RFCOMM            (0)
#define PYBRICKS_PY_MESSAGING_BLE_RADIO         (1)
#define PYBRICKS_PY_MESSAGING_BLE_RADIO_OLD     (1)
#define PYBRICKS_PY_PARAMETERS                  (1)
#define PYBRICKS_PY_PARAMETERS_BUTTON           (1)
#define PYBRICKS_PY_PARAMETERS_BUTTON_REMOTE_ONLY (1)
#define PYBRICKS_PY_PARAMETERS_GEOMETRY         (1) // Required for internal axis maps
#define PYBRICKS_PY_PARAMETERS_ICON             (0)
#define PYBRICKS_PY_PARAMETERS_IMAGE            (0)
#define PYBRICKS_PY_DEVICES                     (1)
#define PYBRICKS_PY_PUPDEVICES                  (1)
#define PYBRICKS_PY_PUPDEVICES_DUPLO_TRAIN      (0)
#define PYBRICKS_PY_PUPDEVICES_MARIO            (0)
#define PYBRICKS_PY_PUPDEVICES_REMOTE           (1)
#define PYBRICKS_PY_PUPDEVICES_TECHNIC_MOVE_HUB (0)
#define PYBRICKS_PY_ROBOTICS                    (0) // Disabled to prevent DriveBase vs Control link crash
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_GYRO     (0)
#define PYBRICKS_PY_ROBOTICS_DRIVEBASE_SPIKE    (0)
#define PYBRICKS_PY_TOOLS                       (0) // Disabled to completely clear out background logger targets
#define PYBRICKS_PY_TOOLS_HUB_MENU              (0)

// Pybricks options
#define PYBRICKS_OPT_COMPILER                   (0)
#define PYBRICKS_OPT_USE_STACK_END_AS_TOP       (1)
#define PYBRICKS_OPT_RAW_REPL                   (0)
#define PYBRICKS_OPT_FLOAT                      (0)
#define PYBRICKS_OPT_TERSE_ERR                  (1)
#define PYBRICKS_OPT_EXTRA_LEVEL1               (0)
#define PYBRICKS_OPT_EXTRA_LEVEL2               (1) // Enabled Level 2 safely
#define PYBRICKS_OPT_CUSTOM_IMPORT              (1)
#define PYBRICKS_OPT_NATIVE_MOD                 (0)

#include "../_common/mpconfigport.h"
