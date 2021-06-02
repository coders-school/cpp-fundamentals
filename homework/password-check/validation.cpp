#include "validation.hpp"
#include <string>
#include <iostream>
#include <vector>
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error_code){

    std::string result = map_Error_String[error_code];
    return result;

}
bool doPasswordsMatch(std::string password,std::string repeatedPassword){

    if (password == repeatedPassword){
        return true;
    }else{
        return false;
    }
        
}


ErrorCode checkPassword(std::string password,std::string repeatedPassword){

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