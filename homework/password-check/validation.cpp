#include "validation.hpp"
#include <string>
#include <cctype>

std::string getErrorMessage(ErrorCode code){
    switch (code){
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
            break;
        default:
            return "Error";
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword){
    if (password.compare(repeatedPassword)){
        return false;
    }else{
        return true;
    }
}

ErrorCode checkPasswordRules(const std::string& password){
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

ErrorCode checkPassword(const std::string password, const std::string repeatedPassword){
    if (!(doPasswordsMatch(password, repeatedPassword))){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password);
}
