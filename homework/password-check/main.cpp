#include <iostream>
#include <string>
#include "validation.hpp"

int main() {
    std::string password;
    std::string repeatedPassword;
    std::cout << "Set new password: ";
    if (std::cin.peek() != '\n')
        std::cin >> password;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Repeat password: ";
    if (std::cin.peek() != '\n')
        std::cin >> repeatedPassword;;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    auto result = checkPassword(password, repeatedPassword);
    std::cout << getErrorMessage(result) << '\n';

    return 0;
}