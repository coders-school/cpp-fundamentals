#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  std::string result;
  int result1;
  
  if(command=="add")
    {
       result1=first+second;
      result=std::to_string(result1);
      return result;
    }
  if(command=="subtract")
    {
      result1=first-second;
      result=std::to_string(result1);
      return result;
    }
  
  else
    return "";
}
