#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // std::cout << command << first << second << "\n";
    // std::string result("");
    // std::cout << "test 1 " << result << "\n";

    // if (command.compare("add") == 1) {
    if (command == "add") {
        std::cout << "test 1 " << "\n";
        return std::to_string(first + second);
    }
    if (command == "subtract") {
        return std::to_string(first - second);
    }
    if (command == "multiply") {
        return std::to_string(first * second);
    }
    if (command == "divide") {
        if (second == 0) {
            return "Division by 0";
        }
        return std::to_string(first / second);
    }
    return "Invalid data";


    // wersja ze switch:
    // switch (command) {
    //     case std::string("add"): return std::to_string(first + second);
    // }
}
