#pragma once

std::string calculate(const std::string& command, int first, int second) {
    // TODO: Implement your solution here and return proper value

 	std::ostringstream command_string;
	

	if(command == "add") 		command_string << first + second;
	else if(command == "subtract") 	command_string << first - second;
	else if(command == "multiply") 	command_string << first * second;
	else if(command == "divide") {
		if(second == 0) return "Division by 0";				
		command_string << first / second;
	} else 	command_string << "Invalid data";
     return command_string.str();
}
