#pragma once

int fibonacci_iterative(int sequence)
 {
	if (sequence < 2)
	{
		return sequence;
	}

	int result = 1;
	int prevResult = 0;

	for (int i = 1; i < sequence; i++) 
	{
		int tempResult = result;
		result += prevResult;
		prevResult = tempResult;
	}

	return result;
}

int fibonacci_recursive(int sequence) 
{
	if (sequence < 2)
	{
		return sequence;
	}

	return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);	
}
