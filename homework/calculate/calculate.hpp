#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
   if(command=="add")
    {
       return first+second;
    }
    if(command=="subtract")
    {
        return first-second;
    }
    if(command=="multiply")
    {
        return first*second;
    }
    if(command=="divide")
    {
        return first/second;
    }
    else
    {
        return command=="INVALID DATA";
    }
    return "";
}
