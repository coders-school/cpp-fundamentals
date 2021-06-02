#include "validation.hpp"
#include <string>
#include <iostream>
#include <vector>
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error_code){


}

ErrorCode checkPassword(std::string password,std::string repeatedPass){

}


int main(){
    std::string password;
    std::string repeatedPassword;
    std::cout << "Set new password: ";
    std::cin >> password;
    std::cout << "Repeat password: ";
    std::cin >> repeatedPassword;
    auto result = checkPassword(password, repeatedPassword);
    std::cout << getErrorMessage(result) << '\n';

    return 0;
}