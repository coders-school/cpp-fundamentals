#include "validation.hpp"
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>

std::string getErrorMessage(ErrorCode error_code) {
    switch(error_code) {
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
    case ErrorCode::Ok:
        return "Ok";
    default:
        return "Unknown error";
    }
}

bool doPasswordsMatch(std::string password1, std::string password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(std::string password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if (std::none_of(password.begin(), password.end(), [](char c){return std::isdigit(c);})) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if (std::all_of(password.begin(), password.end(), [](char c){return std::isalnum(c);})) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if (std::none_of(password.begin(), password.end(), [](char c){return std::isupper(c);})) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string password1, std::string password2) {
    if (not doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    else {
        return checkPasswordRules(password1);
    }
}
