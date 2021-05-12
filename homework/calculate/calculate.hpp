#pragma once
#include <string>
#include <map>

typedef const enum
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} menuItem_t;

std::string calculate(const std::string& command, int first, int second) {

    static const std::map<const std::string, menuItem_t> menuMap {
        {"add", ADD}, 
        {"subtract", SUBTRACT}, 
        {"multiply", MULTIPLY}, 
        {"divide", DIVIDE} };

    try {
        switch(menuMap.at(command))
        {
            case ADD:
                return std::to_string(first+second);
            case SUBTRACT:
                return std::to_string(first-second);
            case MULTIPLY:
                return std::to_string(first*second);
            case DIVIDE:
                if(0 != second) {
                    return std::to_string(first/second);
                }
                else {
                    return "Division by 0";
                }
            default:
                return "Invalid data";
        }
    } 
    catch (const std::out_of_range& e) {
        return "Invalid data";
    }

}
