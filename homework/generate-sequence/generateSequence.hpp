#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateSequence(int count,int step){
    vector<int> array;
    array.push_back(step);

    for(int i=1; i<count; i++){
        array.push_back(array[i-1]*2);
    }

    return array;
}
