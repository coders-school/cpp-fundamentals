#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string text = "";
    if(command == "add") {
        text = std::to_string(first+second);
        return text;
    } else if(command == "subtract") {
        text = std::to_string(first-second);
        return text;
    } else if(command == "multiply") {
        text = std::to_string(first*second);
        return text;
    } else if(command == "divide") {
        if(second != 0) {
            text = std::to_string(first/second);
            return text;
        } else text = "Invalid data";
    } else text = "Invalid data";
    return "";
}
