#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  std::string result;
  
  if(command=="add")
    {
      int result1=first+second;
      result=std::to_string(result1);
      return result;
    }
  else
    return "";
}
