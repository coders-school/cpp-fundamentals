#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  

	if (command == "add") {cout<<"result: "<< first + second; }
	else if (command == "subtract") { cout<<"\nresult: "<< first - second; }
	else if (command == "multiply") { cout<<"\nresult: "<<first * second; }
	else if (command == "divide") { cout<<"\nresult: "<<first / second; }
	else { cout << "\nInvalid data"; }
	
	return command;
   
}
