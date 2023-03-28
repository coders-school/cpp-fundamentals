
#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

int NWD(int a, int b) {
    if (a == 0 || b == 0)
        return abs(a + b); 
    a = abs(a); b = abs(b); 
    while (b != 0) {
        int c = a % b;
        a = b;
        b = c;
    }
    return a;
}

int NWW(int a, int b) {
    if (a == 0 || b == 0)
        return 0; 
    a = abs(a); b = abs(b); 
    return (a / NWD(a, b)) * b;
}

