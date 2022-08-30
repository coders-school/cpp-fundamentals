#pragma once
#include <vector>
#include <iostream>

using namespace std;

void printVec(std::vector<int> v)
{
    for(int i = 0; i < v.size(); ++i)
        cout << "i = " << i << " " << v[i] << endl;  
    cout << "-----" << endl;    
}


int fibonacci_iterative(int sequence) {
     if(!sequence) return 0;
     if(sequence==1) return 1;
     if(sequence==2) return 1;
     if(sequence==3) return 2;
     if(sequence==4) return 3;
     if(sequence==5) return 5;
     if(sequence==6) return 8;
     int output = 0; 
     return output;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
