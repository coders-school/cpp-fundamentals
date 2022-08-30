#pragma once
#include <vector>
#include <iostream>

using namespace std;

int fibonacci_iterative(int sequence) {
    if(!sequence) return 0;
    if(sequence==1) return 1;
    vector<int> v{0, 1};

    for(int ind=2; ;ind++)
    {
        int sum = v[ind-1]+v[ind-2];
        if(sequence==ind) return sum;
        v.push_back(sum);
    }
}

int fibonacci_recursive(int sequence) {
    if(!sequence) return 0;
    if(sequence==1) return 1;
    return fibonacci_recursive(sequence-1) + fibonacci_recursive(sequence-2);
}
