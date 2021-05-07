#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (!command.compare("add")){return std::to_string(first+second);}
    if (!command.compare("subtract")){return std::to_string(first-second);}
    if (!command.compare("multiply")){return std::to_string(first*second);}
    if (!command.compare("divide")&&second){return std::to_string(first/second);}
    if (!command.compare("divide")&&!second){return "Division by 0";}
    return "Invalid data";
}
