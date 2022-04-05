#pragma once
#include <iostream>
#include <vector>

using namespace std;

vector<int> generateSequence(int count,int step){
    vector<int> array;

    if(step<0)
    {
        step=(step*step)/step;
    }

    if(step==0){
        array[0]=0;
    }
    else {
        if(step>=1) {

            array.push_back(step);

            if(step>=2) {
                array.push_back(step*2);

                if(step>=3) {
                    for (int i = 2; i < count; i++) {
                        array.push_back(array[i-2]+array[i-1]);
                    }
                }
            }
        }
    }
    return array;
}
