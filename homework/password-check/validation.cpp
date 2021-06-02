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
ErrorCode checkPassword(std::string password){
    ErrorCode error_code;
    if (password.length() < 9){
        error_code = PasswordNeedsAtLeastNineCharacters;
    }else{
        auto number_digits = 0;
        for (auto i : password){
            if (std::isdigit(password[i])){   
                number_digits++;            
            }
        }
        if (number_digits == 0){
        error_code = PasswordNeedsAtLeastOneNumber;
        } else {
            auto number_uppers = 0;
            for (auto i : password){
                if (std::isupper(password[i])){   
                    number_uppers++;            
                }
            }
            if (number_uppers == 0){
                error_code = PasswordNeedsAtLeastOneUppercaseLetter;
            }else {
                auto number_specials = 0;
                for (auto i : password){
                    if ((password[i] >= 48 && password[i] <= 57) ||
                        (password[i] >= 65 && password[i] <= 90) ||
                        (password[i] >= 97 && password[i] <= 122)){   
                        number_specials++;            
                    }
                }
                if (number_specials == 0){
                error_code = PasswordNeedsAtLeastOneSpecialCharacter;
                }else{
                error_code = Ok;
                } 
            }
        

        }
    }

    return error_code;
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