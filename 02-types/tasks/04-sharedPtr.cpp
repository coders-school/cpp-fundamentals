#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> number) {
    number = std::make_shared<int> (20);
    std::cout << *number << "\n";
    std::cout << number.use_count() << "\n";
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    foo(number);

    return 0;
}
