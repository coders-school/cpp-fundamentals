#pragma once

int fibonacci_iterative(int sequence) {
   if (sequence == 0)
		return 0;
	else if (sequence == 1)
		return 1;
	else {
		int temp[sequence];
		temp[0] = 0;
		temp[1] = 1;
		for (short i = 2; i <= sequence ; i++){
			temp[i] = temp[i-1] + temp[i-2];
		}
		return temp[sequence];
	}
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0)
		return 0;
	else if (sequence == 1)
		return 1;
	else {
		return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
	}
}
