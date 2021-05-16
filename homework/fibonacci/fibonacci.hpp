#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here

    	int first {};
	int second  {1};
	int sum {};

	for (int i = 0; i<=sequence; i++){
		if (i<=1){
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
    return 0;
}
