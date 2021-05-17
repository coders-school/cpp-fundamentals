#pragma once

int fibonacci_iterative(int sequence) {
    // TODO: Your implementation goes here
    int a=0, b=1, pom=1, i;
    for (i=0; i<sequence; i++){
        pom = a;
        a= a + b;
        b= pom;
    }
    return a;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
