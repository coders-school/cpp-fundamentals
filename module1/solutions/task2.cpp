#include <iostream>

int max(int first, int second, int third) {
    if (first > second) {
        if (first > third)
            return first;
        else
            return third;
    } else if (second > third) {
        return second;
    }
    return third;
}

int main() {
    std::cout << "max (1,2,3): " << max(1, 2, 3) << "\n";
    std::cout << "max (1,2,3): " << max(2, 3, 1) << "\n";
    std::cout << "max (1,2,3): " << max(3, 2, 2) << "\n";

    return 0;
}
