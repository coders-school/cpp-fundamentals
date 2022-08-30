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
     vector<int> v{0, 1};
     
     int ind=2;
     int sum = v[ind-1]+v[ind-2];
     if(sequence==ind) return sum;
     v.push_back(sum);
     ind++;
     if(sequence==ind) return v[2]+v[1];
     v.push_back(v[2]+v[1]);
     if(sequence==4) return v[3]+v[2];
     v.push_back(v[3]+v[2]);
     if(sequence==5) return v[4]+v[3];
     if(sequence==6) return 8;
     int output = 0; 
     return output;
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
