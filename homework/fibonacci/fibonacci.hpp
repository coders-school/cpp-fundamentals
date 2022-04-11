#pragma once

int fibonacci_iterative(int sequence) {
   int f0=0,f1=1,f2;
    if(sequence==0)
    {
        return 0;
    } else if(sequence==1)
    {
        return 1;
    } else
    {
        for(int i=2;i<=sequence;i++)
        {
         f2 = f0 + f1;
         f0 = f1;
         f1 = f2;
        }
        return f2;
    }

}

int fibonacci_recursive(int sequence) {
    if(sequence==0)
    {
        return 0;
    } else if(sequence==1)
    {
        return 1;
    } else
    {
    return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
    }    
}
