#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if(command=="add"){
        return first+second+"";
    }else if(command=="multiply"){
        return first*second+"";
    }else if(command=="substract"){
        return first-second+"";
    }else if(command=="divide"){
        return first/second+"";
    }else{
        return "Invalid data";
    }
}
