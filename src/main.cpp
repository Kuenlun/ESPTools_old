#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

#include "ESPTools/BLE.h"
#include "ESPTools/LogTag.h"

#define FILE_LOG_TAG "Main"

extern "C"
{
    void app_main()
    {
        CREATE_LOG_TAG("app_main");

        ESPTools::BLE::initNVS();
        ESPTools::BLE::initBLE();

        while (true)
        {
            ESPTools::BLE::startScan(5);
        }
    }
}
