#include "validation.hpp"
#include <string>

bool doPasswordsMatch(std::string password, std::string repeatedPassword){
    if (password.compare(repeatedPassword)){
        return false;
    }else{
        return true;
    }
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword){
    if (!(doPasswordsMatch(password, repeatedPassword))){
        return ErrorCode::PasswordsDoNotMatch;
    }
    if (password.size() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    bool number = false;
    bool specialCh = false;
    bool upperCaseCh = false;
    for(int i = 0; i <= 9 ; i++){
        for (int ch : password){
            if (ch == i){
                number = true;
            }
        }
    }
    for(int i = 0; i <= 9 ; i++){
        for (int ch : password){
            if (ch == i){
                number = true;
            }
        }
    }
    for(int i = 65; i <= 90 ; i++){
        for (int ch : password){
            if (ch == char(i)){
                upperCaseCh = true;
            }
        }
    }

    return ErrorCode::Ok;
}



std::string getErrorMessage(ErrorCode code){
    switch (code){
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password need at least 9 charters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password need at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password need at least one special charter";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password need at least one uppercase charter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            return "Password do not match";
            break;
        default:
            return "Error";
    }
}
