#pragma once
#include <string>
#include <map>

std::string calculate(const std::string& command, int first, int second) {

std::map<std::string,int> commandMap{{"add", 1},{"subtract", 2},{"multiply",3},{"divide",4}};
int commandInt = commandMap[command];

	switch(commandInt){
                case 1:
                        return std::to_string(first+second);
                        break;
                case 2:
                        return std::to_string(first-second);
                        break;
                case 3:
                        return std::to_string(first*second);
                        break;
                case 4:
                       if(second>0){
                        return std::to_string(first/second);
                       }else{
                        return "Division by 0";
                       }
                        break;
                default:
                        return "Invalid data";
        };
  
}
