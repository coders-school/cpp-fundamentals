#include <iostream>

// Write missing function here
int multiply(const int&, const int&);

int main() {
    std::cout << "4 * 5: " << multiply(4, 5) << "\n";
    std::cout << "10 * 5: " << multiply(10, 5) << "\n";
    std::cout << "-5 * 5: " << multiply(-5, 5) << "\n";

    return 0;
}

int multiply(const int& a, const int& b)
{
    return a * b;
}
