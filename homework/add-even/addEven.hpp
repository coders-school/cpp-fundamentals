#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    // TODO: Your implementation goes here
    // Below return is only to make this function compile now

   	int evennum {};
	int num {};
  	for (const auto& num : numbers)
		if(!(num % 2))
			evennum += num;
	return evennum;
}
