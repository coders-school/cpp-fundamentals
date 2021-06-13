#include <iostream>
#include <string>
#include <ctime>
#include "validation.hpp"



int main() {
    std::string password;
    std::string repeatedPassword;
    std::cout << "Set new password: ";
    std::cin >> password;
    std::cout << "Repeat password: ";
    std::cin >> repeatedPassword;
    bool i = doPasswordsMatch(password, repeatedPassword);
   
    auto result = checkPassword(password, repeatedPassword);
    std::cout << getErrorMessage(result) << '\n';

    return 0;
}
