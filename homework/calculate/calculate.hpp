#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
  

	if (command == "add") {std::cout<<"result: "<< first + second; }
	else if (command == "subtract") { std::cout<<"\nresult: "<< first - second; }
	else if (command == "multiply") { std::cout<<"\nresult: "<<first * second; }
	else if (command == "divide" && first != 0 && second != 0  ) { std::cout<<"\nresult: "<<first / second; }
	else if (command == "divide") {std::cout<<"Division by 0"; }
	else { std::cout << "Invalid data"; }
	
	return command;
   
}
