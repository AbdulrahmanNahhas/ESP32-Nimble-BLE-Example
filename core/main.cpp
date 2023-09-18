#include "main.h"

// Create a static instance of the Main class.
static Main main_app;
extern "C" void app_main(void) {
   ESP_ERROR_CHECK(main_app.setup()); // Initialize the Main object.
   while (true) {
      main_app.loop();
   }
}

// Setup Function
esp_err_t Main::setup(void) {
   esp_err_t status{ ESP_OK };

   startNVS();
   startBLE();

   // Start the FreeRTOS task to notify the client
   notification = "Hello There";
   xTaskCreate(vTasksendNotification, "vTasksendNotification", 4096, NULL, 1, &xHandle);

   return status;
}

// Loop Function
void Main::loop(void) {
   // printf("hello world!");
   // vTaskDelay(pdSecond);
}
