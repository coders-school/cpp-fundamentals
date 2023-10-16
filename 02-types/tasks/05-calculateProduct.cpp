#include <iostream>
#include <memory>

std::shared_ptr<int> calculateProduct(int first_num, int second_num){
    auto ptr = std::make_shared<int>(first_num * second_num);
    std::cout<< "How many pointers: "<<ptr.use_count()<<std::endl;
    return ptr;
}

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
