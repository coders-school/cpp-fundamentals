#include <iostream>
#include <cmath>


int NWD(int a, int b) {

    if (a == 0 || b == 0) {
        return 0;
    }


    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }

    return a;
}


int NWW(int a, int b) {

    if (a == 0 || b == 0) {
        return 0;
    }


    a = abs(a);
    b = abs(b);


    int nwd = NWD(a, b);
    return (a * b) / nwd;
}


