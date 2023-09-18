#ifndef NIMBLE_H
#define NIMBLE_H

extern TaskHandle_t xHandle;
extern char *notification;
extern bool notify_state;

struct ble_hs_cfg;
struct ble_gatt_register_ctxt;

int gatt_svr_init(void);
void gatt_svr_register_cb(struct ble_gatt_register_ctxt *ctxt, void *arg);
void handle_write_command(char *command);

// static int bleprph_gap_event(struct ble_gap_event *event, void *arg);

void sendNotification();
void vTasksendNotification();
void startBLE();
void stopBLE();
void startNVS();

#endif