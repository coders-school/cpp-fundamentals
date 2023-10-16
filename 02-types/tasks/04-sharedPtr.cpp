#include <iostream>
#include <memory>

void foo(std::shared_ptr<int> ptr){
    *ptr = 20;
    std::cout<< "Current value:" << *ptr << std::endl;
    std::cout<< "How many pointers: "<<ptr.use_count()<<std::endl;
}


int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    std::cout<< "Current value: " << *number << std::endl;
    std::cout<< "How many pointers: "<<number.use_count()<<std::endl;
    foo(number);
    std::cout<< "Current value: " << *number << std::endl;
    std::cout<< "How many pointers: "<<number.use_count()<<std::endl;
    return 0;
}
