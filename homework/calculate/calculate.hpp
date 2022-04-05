#pragma once
#include <string>
using namespace std;

string calculate(const string& command, int first, int second)
{
   int dzialanie;
   if(command=="add")
  {
      dzialanie = first + second;
       return to_string(dzialanie);
  }
    else if(command=="subtract")
  {
       dzialanie = first - second;
         return to_string(dzialanie);
  }
    else if(command=="multiply")
  {
       dzialanie = first * second;
        return to_string(dzialanie);
  }
   else if(command=="divide")
  {
      dzialanie = first / second;
        return to_string(dzialanie);
  }
    else return "Invalid data";

}

