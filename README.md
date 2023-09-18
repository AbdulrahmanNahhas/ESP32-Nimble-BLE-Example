# ESP32 Nimble BLE Example

This is an example of a Nimble BLE project for the ESP32. It demonstrates how to create a simple BLE peripheral that can be advertised and connected to by a central device.

To build and run this example, you will need:

* An ESP32 board
* The Nimble BLE library (you can enable it from esp-idf menuconfig)
* The ESP-IDF development framework

Once you have all of the necessary prerequisites, you can build and run the example as follows:

1. Clone the ESP-IDF repository:

```
git clone https://github.com/AbdulrahmanNahhas/ESP32-Nimble-BLE-Example.git

```

2. Change directory to the ESP-IDF repository:

```
cd ESP32-Nimble-BLE-Example
```

3. Export the ESP-IDF environment variables:

```
export IDF_PATH=$PWD
```

4. Clone the ESP32-Nimble-BLE-Example repository:

```
git clone https://github.com/espressif/esp32-nimble-ble-example.git
```

5. Change directory to the ESP32-Nimble-BLE-Example repository:

```
cd esp32-nimble-ble-example
```

6. Build the example:

```
idf.py build
```

7. Flash the example to the ESP32 board:

```
idf.py flash
```

8. Monitor the serial output of the ESP32 board to see the BLE advertising messages:

```
idf.py monitor
```

Once the example is running, you can connect to the BLE peripheral using a central device. The peripheral will advertise itself as "Nahhas Device". Once connected, you can exchange data with the peripheral using the GATT profile.
