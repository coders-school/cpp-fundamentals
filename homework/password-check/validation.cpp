#include <algorithm>
#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode errorType) {
    switch(errorType) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
    }
    return "Out of range";
}

bool doPasswordsMatch(std::string password_one, std::string password_two) {
    if (password_one.compare(password_two) == 0) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    if(password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if(std::none_of(password.begin(), password.end(), 
            [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if(password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_") != std::string::npos) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if(std::none_of(password.begin(), password.end(), &::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string password_one, std::string password_two) {
    if(!doPasswordsMatch(password_one, password_two)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password_one);
}

