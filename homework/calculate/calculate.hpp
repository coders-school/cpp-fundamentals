#pragma once
#include <string>
#include <map>
std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string retunValue="";
    std::map<std::string, int> mapValues= {{"add",0},{"subtract",1},{"multiply",2},{"divide",3}};

    if(mapValues.find(command) == mapValues.end())
    {
        return retunValue="Invalid data";
    }
    
    switch(mapValues[command])
    {
        case 0:
            retunValue = std::to_string(first + second);
            break;
        case 1:
            retunValue = std::to_string(first -second);
            break;
        case 2:
            retunValue = std::to_string(first * second);
            break;
        case 3:
            if(second == 0)
            {
                retunValue = "Division by 0";
            }
            else
                retunValue = std::to_string( first / second);
            break;
        default:
            retunValue = "Invalid data";
    }

    return retunValue;
}
