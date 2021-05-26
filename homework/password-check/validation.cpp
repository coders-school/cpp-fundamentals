#include "validation.hpp"

#include <cctype>
#include <algorithm>

std::string getErrorMessage(ErrorCode code){
    switch(code){
        case ErrorCode::Ok:{
            return "Ok";
            break;
        }
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:{
            return "Password needs to have at least nine characters";
            break;
        }
        case ErrorCode::PasswordNeedsAtLeastOneNumber:{
            return "Password needs to have at least one number";
            break;
        }
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:{
            return "Password needs to have at least one special character";
            break;
        }
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:{
            return "Password needs to have at least one uppercase letter";
            break;
        }
        case ErrorCode::PasswordsDoNotMatch:{
            return "Passwords do not match";
            break;
        }
    }
    return "Ok";
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    if (firstPassword == secondPassword) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(std::begin(password), std::end(password), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::all_of(std::begin(password), std::end(password), ::isalnum)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(std::begin(password), std::end(password), ::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password1, std::string password2){
    if (doPasswordsMatch(password1, password2) == false){
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password1);   
    }
}