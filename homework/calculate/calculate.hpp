#pragma once
#include <string>
using namespace std;
string calculate(string command, int first, int second) {
     if(command=="add")
    {
       return to_string(first+second);
    }
    if(command=="subtract")
    {
        return to_string(first-second);
    }
    if(command=="multiply")
    {
        return to_string(first*second);
    }
    if(command=="divide")
    {
        return to_string(first/second);
    }
    else
    {
        return to_string(command=="INVALID DATA");
    }
    return "";
}
