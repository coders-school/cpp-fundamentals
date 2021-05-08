#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
	std::string result;
	if (!command.compare("add"))
			result = std::to_string(first + second);
	else if (!command.compare("subtract"))
		result = std::to_string(first - second);
	else if (!command.compare("multiply"))
		result = std::to_string(first * second);
	else if (!command.compare("divide")) {
		if (second == 0)
			return "Division by 0";
		//result = std::to_string(static_cast<float>(first) / second);
		result = std::to_string(first / second);
	}	
	else
		return "Invalid data";

	return result;
}	
