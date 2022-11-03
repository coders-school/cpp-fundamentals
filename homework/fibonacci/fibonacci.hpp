#pragma once

int fibonacci_iterative(int sequence){

    long long a = 1, b = 0;

    for (int i =0; i<sequence; i++){

        b+=a;
        a=b-a;
    }
    
    return b;
}

int fibonacci_recursive(int sequence){
        

        if(sequence == 0){
            return 0;
        }
        if(sequence<3){            
            return 1;
        }
        return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);  
                  
    
}  
