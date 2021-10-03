#pragma once

int fib_1 =1;			//previous. Initial: 1
int fib_2 =0;			//previous previous. Initial: 0
int sequence_counter = 0;	//number of sequences included in the result. Initial: 0
int result = 0;
int counter = 0;

int fibonacci_iterative(int sequence) {
	if (sequence == 0) return 0;
	if (sequence == 1) return 1;
	fib_1 = 1;
	fib_2 = 0;
	for (int i=1; i<sequence; ++i){
		result = fib_1 + fib_2;
		fib_2 = fib_1;
		fib_1 = result;
	}
	
    return result;
}

int fibonacci_recursive(int sequence) {
	if (sequence <= 1) return sequence;
	return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
