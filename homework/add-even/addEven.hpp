#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int wynik = 0;
    for(int l : numbers)
    {
        if(l%2==0) wynik=wynik+l;
    }
    return wynik;
}
