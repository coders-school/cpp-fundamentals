#pragma once

int fibonacci_iterative(int sequence) {
     int* a;
    a = new int[sequence];
    a[0]=1;
    a[1]=1;
    for(size_t i=2;i<sequence ; i++){
        a[i]=a[i-1]+a[i-2];
    }
     return a[sequence-1];
}

int fibonacci_recursive(int sequence) {
    if(sequence==0){
        return 0;
    }
    if (sequence==1 || sequence ==2){
        return 1;
    } 
    else { 
        return fibonacci_recursive(sequence-1)+fibonacci_recursive(sequence-2);
    }
}
