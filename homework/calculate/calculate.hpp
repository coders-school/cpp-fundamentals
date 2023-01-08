#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string tmp;
   if (command=="add") {
        tmp = std::to_string(first + second);
   } else if (command=="subtract") {
        tmp = std::to_string(first - second);
   } else if (command=="multiply") {
        tmp = std::to_string(first * second);
   } else if (command=="divide") {
        if (second == 0) {
            tmp = "Division by 0";
        } else {
            tmp = std::to_string(first / second);
        }
   } else {
        tmp = "Invalid data";
   }    return tmp;
}
