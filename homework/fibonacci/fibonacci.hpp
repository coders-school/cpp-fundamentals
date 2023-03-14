#pragma once

int fibonacci_iterative(int sequence) {
	int f0 = 0, f1 = 1, result = 0;
	if(sequence == 0)
		return f0;
	else if(sequence == 1)
		return f1;
	else {
		for(int i=2;i<=sequence;i++) {
			result = f0 + f1;
			f0 = f1;
			f1 = result;
		}
	}
    return result;
}

int fibonacci_recursive(int sequence) {
	static int  f0 = 0;
	if(sequence == 0)
		return 0;
	else if(sequence == 1) {
		return 1 + fibonacci_recursive(sequence - 1);
	} else {
		int fibPrevResult = fibonacci_recursive(sequence - 1);
		int result = f0 + fibPrevResult;
		f0 = fibPrevResult;
		return result;
	}
}
