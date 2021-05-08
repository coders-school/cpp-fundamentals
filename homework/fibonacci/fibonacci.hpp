#pragma once

#include <vector>

int fibonacci_iterative(int sequence) {

	if (sequence < 0)
		return -1; //error

	std::vector<int> fib = { 0, 1, 1 };

	int add{};
	for (auto i{ 3 }; i <= sequence; ++i)
	{
		fib.push_back(fib[i - 1] + fib[i - 2]);
	}

	return fib[sequence];
}

int fibonacci_recursive(int sequence) {
	if (sequence < 0)
		return -1; //error
	if (sequence == 0 || sequence == 1)
		return sequence;

	return (fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1));
}

