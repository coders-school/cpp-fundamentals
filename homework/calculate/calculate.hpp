#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  

	string type = command;
	if (type == "add") { cout << "result: " << first + second; }
	else if (type == "subtract") { cout << "\nresult: " << first - second; }
	else if (type == "multiply") { cout << "\nresult: " << first * second; }
	else if (type == "divide") { cout << "\nresult: " << first / second; }
	else { cout << "\nInvalid data"; }

	return type;
   
}
