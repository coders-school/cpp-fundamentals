#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
	int num = 0;
	int prev = 1;

	for (int i = 0; i < sequence; i++) {
		prev += num;
		num = prev - num;
	}
	return num;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
