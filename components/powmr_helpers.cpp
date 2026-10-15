#pragma once

#include <string>
#include "esphome.h"

namespace esphome {
namespace powmr_helpers {

class PowMrHelpers : public Component {};

}  // namespace powmr_helpers
}  // namespace esphome

// Các hàm hỗ trợ được inverter.yaml sử dụng
uint16_t swapBytes(uint16_t value);
uint16_t swapBytes(std::string value);

void updateUnknownSelect(
    uint16_t sensorIndex,
    esphome::modbus_controller::ModbusSelect* selectComp
);
