#include "validation.hpp"
#include <iostream>
#include <cctype>
#include <map>

std::string getErrorMessage(ErrorCode error_code){
    std::string result;
    
    switch (error_code){
    case ErrorCode::Ok :
        result = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters :
        result = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber : 
        result = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter :
        result = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter :
        result = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch :
        result = "Passwords do not match";
        break;
    default :
    result = "Unknown error";
    }

    return result;

}
bool doPasswordsMatch(std::string password,std::string repeatedPassword){

    if (password == repeatedPassword){
        return true;
    }else{
        return false;
    }
        
}
ErrorCode checkPasswordRules(std::string password){
    
    if (password.length() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }else{
        auto number_digits = 0;
        for (auto i = 0; i < password.length(); i++){
            if (std::isdigit(password[i])){  
                number_digits++;            
            }
        }
        if (number_digits == 0){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
        } else {
            auto number_uppers = 0;
            for (auto i = 0; i < password.length(); i++){
                if (std::isupper(password[i])){   
                    number_uppers++;            
                }
            }
            if (number_uppers == 0){
                return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
            }else {
                auto number_specials = 0;
                for (auto i = 0; i < password.length(); i++){
                    if ((password[i] < 48) ||
                        (password[i] >= 58 && password[i] <= 64) ||
                        (password[i] >= 91 && password[i] <= 96) ||
                        (password[i] > 123)){   
                        number_specials++;            
                    }
                }
                if (number_specials == 0){
                return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
                }else{
                return ErrorCode::Ok;
                } 
            }
        

        }
    }
}

ErrorCode checkPassword(std::string password,std::string repeatedPassword){

    bool match = doPasswordsMatch(password,repeatedPassword);
    ErrorCode error_code;
    if(!match){
        error_code =  ErrorCode::PasswordsDoNotMatch;
    }else{

        error_code = checkPasswordRules(password);
    }
    return error_code;
}
/**
int main() {
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
**/