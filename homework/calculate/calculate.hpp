#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if ("add") {
        return std::to_string(first + second);
    }
    return "";
}
