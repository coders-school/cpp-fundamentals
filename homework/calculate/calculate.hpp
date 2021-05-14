#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // std::cout << command << first << second << "\n";
    // std::string result("");
    // std::cout << "test 1 " << result << "\n";
    if (command.compare("add") == 1)
        return std::to_string(first + second);

}
