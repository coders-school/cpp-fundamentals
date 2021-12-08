#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    int res{};
    if(command == "add"){
       res = first + second;
    }else if(command == "subtract"){
         res = first - second;
    }else if(command == "multiply"){
         res = first * second;
    }else if(command == "divide"){
          if(second != 0){
           res = first/second;
          } else{ return "Division by 0";}
          
        } else{return "Invalid data";}

    return std::to_string(res);
}
