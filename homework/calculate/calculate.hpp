#pragma once
#include <string>

    enum string_code{
    	eAdd,
	eSubstract,
	eDivide,
	eMultiply,
	eOther
    };

    string_code command_code (const std::string& command){
    	if(command == "add") return eAdd;
    	if(command == "subtract") return eSubstract;
	if(command == "divide") return eDivide;
	if(command == "multiply") return eMultiply;
	return eOther;
    }

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    	std::string result{};
	switch(command_code(command)){
		case eAdd:
			result = std::to_string(first + second);
			break;
		case eSubstract:
			result = std::to_string(first - second);
			break;
		case eDivide:
			if (second == 0){
				result = "Division by 0";
			}
			else {
				result = std::to_string(first/second);
			}
			break;
		case eMultiply:
			result = std::to_string(first*second);
			break;
		default:
			result = "Invalid data";
			break;
	}
	return result;
}
