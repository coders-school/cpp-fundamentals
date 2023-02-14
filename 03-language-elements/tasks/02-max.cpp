#include <iostream>

int max(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    }
    else if (b > a  && b > c) {
        return b;
    }
    else if  (c > b && c > a) {
        return c;
    }
}

int main() {
    std::cout << "max (1, 2, 3): " << max(1, 2, 3) << "\n";
    std::cout << "max (2, 3, 1): " << max(2, 3, 1) << "\n";
    std::cout << "max (3, 2, 1): " << max(3, 2, 1) << "\n";

    return 0;
}
