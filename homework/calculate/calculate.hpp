#pragma once
#include <string>
using namespace std;

string calculate(const string& command, int first, int second)
{
   int operation;
   if(command=="add")
  {
      operation = first + second;
       return to_string(operation);
  }
    else if(command=="subtract")
  {
       operation = first - second;
         return to_string(operation);
  }
    else if(command=="multiply")
  {
       operation = first * second;
        return to_string(operation);
  }
   else if(command=="divide")
  {
      if(second==0) return "you can't divide by 0!";
         operation = first / second;
        return to_string(operation);
         
   }
   else
   {
      return "Invalid Data";
   }
}

