#include <iostream>

// TODO: Implement foo()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

int main() {
    auto number = foo(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
