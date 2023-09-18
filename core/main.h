#pragma once

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#define pdSecond pdMS_TO_TICKS(1000) // Define a constant that represents one second in ticks.

#include "esp_log.h"
#include "nvs_flash.h"

// Nimble
#include "esp_nimble_hci.h"
#include "nimble/nimble_port.h"
#include "nimble/nimble_port_freertos.h"

// Host
#include "host/ble_hs.h"
#include "host/util/util.h"
#include "console/console.h"
#include "services/gap/ble_svc_gap.h"

#include "misc.h" // bleprph -> misc
#include "nimble_component.h"

// The Main class is a simple class that contains two functions: setup() and loop().
class Main final {
public:
  esp_err_t setup(void);  // this function is called once when the application starts up.
  void loop(void);        // this function is called repeatedly until the application exits.
};