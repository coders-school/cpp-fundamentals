#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command == "add") {
	return std::to_string(first + second);
    } else if (command == "substract") {
	return std::to_string(first - second);
    } else if (command == "multiply") {
	return std::to_string(first * second);
    } else if (command == "divide") {
	return std::to_string(first / second);
    } else {
    return "invalid data";
    }
}
