#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> number)
{
	std::cout << "Value of received int pointer: "
		<< *number
		<< "\nNumber of pointers to received int: "
		<< number.use_count()
		<< "\n\n";
	*number = 20;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    
    std::cout << "Value of 'number' pointer: "
		<< *number
		<< "\nNumber of pointers to 'number': "
		<< number.use_count()
		<< "\n\n";
    
    foo(number);
    
    std::cout << "Value of 'number' pointer: "
		<< *number
		<< "\nNumber of pointers to 'number': "
		<< number.use_count()
		<< "\n\n";

    return 0;
}
