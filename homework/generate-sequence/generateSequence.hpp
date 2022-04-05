#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateSequence(int count,int step){
    vector<int> array;
    array.push_back(step);

    for(int i=1; i<count; i++){
        step+=step;
        array.push_back(step);
    }

    return array;
}
