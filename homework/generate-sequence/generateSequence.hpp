#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateSequence(int count,int step){
    vector<int> array;

    if(count>0) {
        array.push_back(count);
        if(count>1) {
            for (int i = 1; i < count; i++) {
                array.push_back(step + array[i - 1]);
            }
        }
    }
    return array;
}
