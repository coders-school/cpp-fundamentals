#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    int result = 0;
    if (command.compare("add") == 0) {
        result = first + second;
    }
    
    std::string retval{std::to_string(result)};
    return retval;
}
