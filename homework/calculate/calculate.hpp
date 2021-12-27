#pragma once
#include <iostream>
#include <string>
#include <map>
#include <iomanip>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string result;
    std::map<std::string, int> math_operations {
        {"add", 1},
        {"subtract", 2},
        {"multiply", 3},
        {"divide", 4},
    };
    switch (math_operations[command]) {
        case (1):
            result = std::to_string(first + second);
            break;
        case (2): {
            result = std::to_string(first - second);
            break;
        }
        case (3): {
            result = std::to_string(first * second);
            break;
        }
        case (4): {
            if (second == 0) {
                result = "Division by 0";
            } else {
                result = std::to_string(first / second);
            }
            break;
        }
        default: {
            result = "Invalid data";
            break;
        }

    }
    return result;
}
