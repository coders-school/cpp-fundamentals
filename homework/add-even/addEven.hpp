#pragma once
#include <vector>

using namespace std;

int addEven(vector<int>& numbers) {
    int suma = 0;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] % 2 == 0) suma += numbers[i];
    }
    return suma;
}
