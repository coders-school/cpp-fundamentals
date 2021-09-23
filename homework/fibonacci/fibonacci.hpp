#pragma once

int fibonacci_iterative(int sequence) {
    if(sequence==0)
        return 0;
    if(sequence<3)
        return 1;
    int a=0;
    int b=1;

    for(int i=0;i<sequence-1;i++)
    {
            b=a+b;
            a=b-a;
    }
    return b;
}

int fibonacci_recursive(int sequence) {
if(sequence<=0)
    return 0;
if(sequence<3)
    return 1;

return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
    
}
