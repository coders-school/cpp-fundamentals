#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  

	if (command == "add") {std::cout<<"result: "<< first + second; }
	else if (command == "subtract") { std::cout<<"\nresult: "<< first - second; }
	else if (command == "multiply") { std::cout<<"\nresult: "<<first * second; }
	else if (command == "divide" && first != 0 && second != 0  ) { cout<<"\nresult: "<<first / second; }
	else if (command == "divide") {cout<<"Division by 0"; }
	else { std::cout << "\nInvalid data"; }
	
	return command;
   
}
