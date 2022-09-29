#pragma once

/**
 * NOTE: This file should only be included in .cpp files from ESPTools library
 **/

#define LIBRARY_LOG_TAG "ESPTools"

/**
 * Macro for creating the log tag inside functions
 * NOTE: FILE_LOG_TAG must be defined for each .cpp file
 **/

#define CREATE_LOG_TAG(SUBTAG) static constexpr char TAG[] = LIBRARY_LOG_TAG " -> " FILE_LOG_TAG " -> " SUBTAG
