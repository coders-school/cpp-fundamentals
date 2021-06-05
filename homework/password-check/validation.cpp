#include "validation.hpp"
#include <string>
#include <cctype>

std::string getErrorMessage(ErrorCode code){
    switch (code){
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password need at least nine charters";
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

bool doPasswordsMatch(std::string& password, std::string& repeatedPassword){
    if (password.compare(repeatedPassword)){
        return false;
    }else{
        return true;
    }
}

ErrorCode checkPasswordRules(std::string& password){
    if (password.size() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool digit = false;
    for(int ch : password){
        if(isdigit(ch)){
            digit = true;
            break;
        }
    }
    if (!digit){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    bool upper = false;
    for(int ch : password){
        if(isupper(ch)){
            upper = true;
            break;
        }
    }
    if (!upper){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    bool punct = false;
    for(int ch : password){
        if(ispunct(ch)){
            punct = true;
            break;
        }
    }
    if (!punct){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword){
    if (!(doPasswordsMatch(password, repeatedPassword))){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password);
}
