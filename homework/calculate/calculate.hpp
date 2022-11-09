#pragma once
#include <iostream>
#include <string>

std::string calculate(const std::string& command, int first, int second) {

	if ("add" == command) {
		return std::to_string(first + second);
	}
	else if("subtract" == command) {
		return std::to_string(first - second);
	}
	else if("multiply" == command) {
		return std::to_string(first * second);
	}
	else if ("divide" == command) {
        if ((first == 0) || (second == 0)) {
            return "Division by 0";
		}
        return std::to_string(first / second);
	}
	else {
		return "Invalid data";
	}
	
}
