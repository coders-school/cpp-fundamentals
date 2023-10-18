#include <iostream>

int max(int first_arg, int second_arg, int third_arg){
    if(first_arg > second_arg){
        if(first_arg > third_arg){
            return first_arg;
        }
        else{
            return third_arg;
        }
    }
    else if(second_arg > third_arg){
        return second_arg;
    }
    else{
        return third_arg;
    }

}

int main() {
    std::cout << "max (1, 2, 3): " << max (1, 2, 3) << "\n";
    std::cout << "max (1, 3, 2): " << max (1, 3, 2) << "\n";
    std::cout << "max (2, 3, 1): " << max (2, 3, 1) << "\n";
    std::cout << "max (2, 1, 3): " << max (2, 1, 3) << "\n";
    std::cout << "max (3, 2, 1): " << max (3, 2, 1) << "\n";
    std::cout << "max (3, 1, 2): " << max (3, 1, 2) << "\n";

    return 0;
}
