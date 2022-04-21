#pragma once
#include <string>
using namespace std;
string calculate(const string& command, int first, int second) {
    if(command == "add")
    {
    	return to_string(first+second);
	}
    return "";
}
