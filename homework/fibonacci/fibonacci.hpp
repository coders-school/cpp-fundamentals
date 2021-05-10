#pragma once

int fibonacci_iterative(int sequence) {
    int last{ 0 };
	int beforeLast{ 1 };

	int seekedValue{ 0 };
	for (int i{ 0 }; i < sequence; ++i)
	{
		last = beforeLast;
		beforeLast = seekedValue;
		seekedValue = last + beforeLast;
	}
	return seekedValue;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0)
		return 0;
	if (sequence == 1)
		return 1;
	return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1);
}
