#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
     if(command == "add")
    {
    	return first+second;
	}
    return "";
}
