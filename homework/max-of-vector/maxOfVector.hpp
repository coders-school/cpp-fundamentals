#pragma once
#include <iostream>
#include <vector>

using namespace std;

int maxOfVector(vector<int> numbers){
    int max=numbers[0];
    for(int i=1; i<numbers.size(); i++){
        if(max<numbers[i]){
            max=numbers[i];
        }
    }
    return max;
}
