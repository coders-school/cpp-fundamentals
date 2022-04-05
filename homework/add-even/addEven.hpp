#include <iostream>
#pragma once
#include <vector>
using namespace std;

int addEven(const vector<int>& numbers) {
    int sumav = 0;

    for(int number : numbers) {
        if(number % 2 == 0) {
            sumav += number;
        }
    }
    return sumav;
}
