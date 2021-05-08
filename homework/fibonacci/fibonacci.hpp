#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0)
    {
	    return 0;
    }
    else if (sequence == 1)
    {
	    return 1;
    }
    else if (sequence > 1)
    {
	int first = 0;
	int second = 1;
	int result = 0;
	for(size_t i = 2; i <= sequence; i++)
	{
		result = first + second;
		first = second;
		second = result;
	}
	return result;
    }
    else
    {
	return -1;
    }
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    if (sequence == 0)
    {
	return 0;
    }
    if (sequence == 1)
    {
	return 1;
    }
    return (fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2));
}
