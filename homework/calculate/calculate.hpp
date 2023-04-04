#include <iostream>
#include <string>
#include <array>
#include <algorithm>


/**
 * \brief A function whose task is to perform arithmetic operations on two numbers.
 * \param command Type of action: add, subtract, multiply, divide.
 * \param first First number.
 * \param second Second number.
 * \return Result as a string.
 */
std::string calculate(const std::string& command, int first, int second)
{
	std::array<std::string, 4> valid{ "add", "subtract", "multiply", "divide" };
	if (std::find(valid.begin(), valid.end(), command) == valid.end())
		return "Invalid data";

	if (command == valid.at(0))
		return std::to_string(first + second);
	if (command == valid.at(1))
		return std::to_string(first - second);
	if (command == valid.at(2))
		return std::to_string(first * second);
	// In this case check if second numbers is not 0.
	if (command == valid.at(3))
		return (second != 0)? std::to_string(first / second) : "Division by 0";

	// Improvement: cast second number to double, to get a floating point result. Comment if above and uncomment this below.
	// The trick to set precision is get the substring (substr method) from 0 to dot character + arbitrary value
	/*if (command == valid.at(3))
		return (second != 0) ? std::to_string(first / static_cast<double>(second)).substr(0, std::to_string(first / static_cast<double>(second)).find(".") + 3) : "ZeroDivisionError";*/

	return "Something went wrong";
}
