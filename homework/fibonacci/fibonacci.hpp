#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
	int fib[] = {0,1,0};
	if(sequence == 0) return fib[0];
	if(sequence == 1) return fib[1];
	else{
		
	for(auto i=2;i<=sequence;i++){
	fib[2] = fib [1] + fib [0];
	fib[0] = fib [1];
	fib[1] = fib [2];
	}
	}
    return fib[2];
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
	int fib[] = {0,1,0};
	if(sequence == 0) return fib[0];
	if(sequence == 1) return fib[1];
	else{
		
	for(auto i=2;i<=sequence;i++){
	fib[2] = fib [1] + fib [0];
	fib[0] = fib [1];
	fib[1] = fib [2];
	}
	}
    return fib[2];
}
