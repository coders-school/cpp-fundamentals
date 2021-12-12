#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
	std::string result{"Division by 0"};
	if(command == "add"){
		result = std::to_string(first + second);
	} else if(command == "subtract") {
			result = std::to_string(first - second);
		} else if(command == "multiply") {
				result = std::to_string(first * second);
			} else if(command == "divide") {
					if (second == 0){
						//std::cout<<"No division by 0!";
						return result;
					} else {
						result = std::to_string(first / second);
					} 
				} else 
					return result;
	return result;
}
