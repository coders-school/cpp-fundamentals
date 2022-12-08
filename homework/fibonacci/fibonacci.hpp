#include <iostream>
#include <string>

int fibonacci_iterative(int sequence) {

	    int x = 0;
	        int y = 1;

		    for (int i = 0; i < sequence; i++) {
			            y += x;
				            x = y - x;

					        }
return x;		      

}

int fibonacci_recursive(int sequence) {
	    if (sequence == 0) return 0;
	        if (sequence <= 2) return 1;

		    return fibonacci_iterative(sequence-1) + fibonacci_iterative(sequence-2);


}
