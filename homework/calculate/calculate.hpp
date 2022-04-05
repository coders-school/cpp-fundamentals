#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
     if(command=="add"){
        return to_string(first+second);
    }else if(command=="multiply"){
        return to_string(first*second);
    }else if(command=="substract"){
        return to_string(first-second);
    }else if(command=="divide"){
        if(second==0)
            return "Invalid data";
        return to_string(first/second);
    }else{
        return "Invalid data";
    }
    return "Invalid data";
}
