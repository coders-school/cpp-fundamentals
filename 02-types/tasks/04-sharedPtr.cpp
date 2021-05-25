#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> sharedPtr)
{
    *sharedPtr = 20;

}

int main()
{
    std::shared_ptr<int> number = std::make_shared<int>(10);

    // display the value under number pointer and use_count() of it
    std::cout << "stored value is " + std::to_string(*number) + "and it is pointed by " + std::to_string(number.use_count()) + " pointers";
    foo(number);
    std::cout << "stored value is " + std::to_string(*number) + "and it is pointed by " + std::to_string(number.use_count()) + " pointers";
    
    // display the value under number pointer and use_count() of it

    return 0;
}
