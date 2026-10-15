#pragma once

#include <string>
#include "powmr_helpers.h"
#include "esphome/core/log.h"

uint16_t swapBytes(uint16_t value)
{
    return (value << 8) | (value >> 8);
}

uint16_t swapBytes(std::string value)
{
    uint16_t intValue = std::stoi(value);
    return (intValue << 8) | (intValue >> 8);
}

void updateUnknownSelect(uint16_t sensorIndex, esphome::modbus_controller::ModbusSelect* selectComp);
