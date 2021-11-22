#pragma once

int fibonacci_iterative(int sequence){
    int f_0=0;
    int f_1=1;
    int f_i;

    for(int i=0; i<=sequence; i++){
        if( i<=1)
              f_i=i;
            else {
                 f_i = f_0+f_1;
                    f_0=f_1;
                    f_1= f_i;
            }
        }
        return f_i;
     }


int fibonacci_recursive(int sequence){

    if (sequence<=1) {
        return sequence;
        } else{
       sequence= fibonacci_recursive(sequence-2)+ fibonacci_recursive(sequence-1);
        return sequence;
    }
    return 0;
}






