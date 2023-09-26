#include <iostream>
#include <memory>

auto calculateProduct(int firstProduct, int secondProduct) {
    auto product = std::make_shared<int>(firstProduct * secondProduct);
    return product;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
