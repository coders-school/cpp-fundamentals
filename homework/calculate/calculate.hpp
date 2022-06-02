#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command=="add")
    {
       return std::to_string(first+second);
    }
    if(command=="subtract")
    {
        return std::to_string(first-second);
    }
    if(command=="multiply")
    {
        return std::to_string(first*second);
    }
    if(command=="divide")
    {
        return std::to_string(first/second);
    }
    else
    {
        return command=="INVALID DATA";
    }
    return "";
}
