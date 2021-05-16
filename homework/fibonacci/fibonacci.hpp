#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    	int first {};
	int second  {1};
	int sum {};

	for (int i = 0; i<=sequence; i++){
		if (i < 2){
			sum = i;
		}
		else{
			sum = first + second;
			first = second;
			second = sum;
		}
	}
	return sum;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    
	int sum {};
	if (sequence < 2){
		sum = sequence;
	}
	else{
		sum = fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence-2);
	}
	return sum;
}
