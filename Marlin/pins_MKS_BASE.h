/**
 * MKS BASE 1.0 – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#define IS_RAMPS_14
 
#include "pins_RAMPS_13_EFB.h"

#undef HEATER_1_PIN
#define HEATER_1_PIN        7


 
//PS_ON
#undef SERVO0_PIN
#undef PS_ON_PIN
#define PS_ON_PIN        11

// ZPROBE
#undef SERVO1_PIN
#if ENABLED(Z_MIN_PROBE_ENDSTOP)
#undef Z_MIN_PROBE_PIN
#define Z_MIN_PROBE_PIN        6
#endif
 
#ifdef REPRAP_DISCOUNT_SMART_CONTROLLER
#undef BTN_EN1
#undef BTN_EN2
#define BTN_EN1 33
#define BTN_EN2 31
#endif