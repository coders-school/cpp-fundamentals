#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  

	if (command == "add") {std::cout<<"result: "<< first + second; }
	else if (command == "subtract") { std::cout<<"\nresult: "<< first - second; }
	else if (command == "multiply") { std::cout<<"\nresult: "<<first * second; }
	else if (command == "divide") { std::cout<<"\nresult: "<<first / second; }
	else { std::cout << "\nInvalid data"; }
	
	return command;
   
}
