#include <iostream>
#include <memory>
std::shared_ptr<int> calculateProduct(int a, int b)
{
    return std::make_shared<int>(a+b);   
    
    
}
// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
