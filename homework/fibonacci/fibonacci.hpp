#pragma once
#include <vector>
using namespace std;
int fibonacci_iterative(int sequence) {

    int wynik = 0;
    vector <int> vec{0,1};
    if(sequence == 0)
            return 0;
     if(sequence == 1)
        return 1;

    for(size_t i = sequence ; i>=2 ;i--)
    {
         vec.push_back(vec[i-2]+vec[i-1]) ;
    }

    return vec.back();
}

int fibonacci_recursive(int sequence) {

    return 0;
}
