#pragma once
#include <string>
#include <map>
std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value
    std::string retunValue="";
    std::map<std::string, int> mapValues= {{"add",0},{"subtract",1},{"multiply",2},{"divide",3}};
    switch(mapValues[command])
    {
    
        default:
            retunValue = "Invalid data";
    }

    return retunValue;
}
