#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0 ) {
	    return 0;
    }else if (sequence == 1) {
	    return 1;
    }else {    
    	int x = 0, y = 1, z = 0;
   	for(int i = 0 ; i < sequence-1 ; i++){
	  	  z = x + y;
	  	  x = y;
	  	  y = z;
    	}
    	return z;
    }
 }

int fibonacci_recursive(int sequence) {
    if(sequence == 0 ) {
        return 0;
    }else if(sequence == 1){
        return 1;
    }else {
        return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
    }
}
