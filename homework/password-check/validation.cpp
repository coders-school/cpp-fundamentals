#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode errorType) {
    switch(errorType) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "PasswordNeedsAtLeastNineCharacters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "PasswordNeedsAtLeastOneUppercaseLetter";
        case ErrorCode::PasswordsDoNotMatch:
            return "PasswordsDoNotMatch";
    }
    return "Out of range";
}

bool doPasswordsMatch(std::string password_one, std::string password_two) {
    if(password_one.empty() || password_two.empty()) {
        return true;
    }
    if (password_one.compare(password_two) == 0) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    ErrorCode test = static_cast<ErrorCode>(rand() % 5);
    return test;
}

ErrorCode checkPassword(std::string password_one, std::string password_two) {
    if(!doPasswordsMatch(password_one, password_two)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password_one);
}

