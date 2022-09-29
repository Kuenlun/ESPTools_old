#pragma once
#include <esp_log.h>
#include <nvs_flash.h>
#include <esp_bt.h>
#include <esp_gap_ble_api.h>
#include <esp_gattc_api.h>
#include <esp_bt_main.h>
#include <esp_gatt_common_api.h>

extern "C"
{

    namespace ESPTools
    {

        namespace BLE
        {

            void initBLE();

            char *MACtoStr(const esp_bd_addr_t &bda);

            // Initialize NVS for Bluetooth and WiFi
            void initNVS();

            /**
             * Start the BLE scan
             * NOTE: Duration in seconds
             **/
            void startScan(const uint32_t duration);

        }

    }
}