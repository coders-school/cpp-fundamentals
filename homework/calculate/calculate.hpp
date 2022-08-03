#pragma once
#include <string>
#include <sstream>

std::string calculate(const std::string& command, int first, int second) {
    
    int resault;

	if (command == "add")
	{
		resault = first + second;
	}

	else if (command == "subtract")
	{
		resault = first - second;
	}

	else if (command == "divide")
	{
		if (second == 0)
		{
		  return "Division by 0" ;
		}
		
		resault = first / second;
	}

	else if (command == "multiply")
	{
		resault = first * second;
	}

	else
	{
		return "Invalid data";
	}

	std::stringstream convertResault;
	convertResault << resault;

	std::string returnResault;
	convertResault >> returnResault;

	return returnResault;
    
}
