#pragma once
#include <string>
#include <map>
std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string returnValue="";
    std::map<std::string, int> mapValues= {{"add",0},{"subtract",1},{"multiply",2},{"divide",3}};
    switch(mapValues[command])
    {
        case 0:
            returnValue = std::to_string(first + second);
            break;

        case 1:
            returnValue = std::to_string(first - second);
            break;

        case 2:
            returnValue = std::to_string(first * second);
            break;

        case 3:

            if(second == 0)
                returnValue = "Invalid data";
            returnValue = std::to_string(first / second);
            break;

        default:
            returnValue = "Invalid data";
    }
    return returnValue;
}