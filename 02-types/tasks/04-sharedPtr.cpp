#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int>);

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    std::cout << "Value of pointer (before function): " << *number << std::endl;
    std::cout << "Number of pointers per int object (before function): " << number.use_count() << std::endl << std::endl;
    foo(number);
    // display the value under number pointer and use_count() of it
    std::cout << "Value of pointer (after function): " << *number << std::endl;
    std::cout << "Number of pointers per int object (after function): " << number.use_count() << std::endl << std::endl;
    return 0;
}

void foo(std::shared_ptr<int> number)
{
    *number = 20;
    std::cout << "Value of pointer (in function): " << *number << std::endl;
    std::cout << "Number of pointers per int object (in function): " << number.use_count() << std::endl << std::endl;
}
