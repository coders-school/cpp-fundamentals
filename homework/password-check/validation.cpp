#include "validation.hpp"
#include <iostream>

std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
    case ErrorCode::Ok: {
        return "Ok";
    } break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters: {
        return "Password needs to have at least nine characters";
    } break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber: {
        return "Password needs to have at least one number";
    } break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: {
        return "Password needs to have at least one special character";
    } break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: {
        return "Password needs to have at least one uppercase letter";
    } break;
    case ErrorCode::PasswordsDoNotMatch: {
        return "Passwords do not match";
    } break;
    }
    return "";
}

bool doPasswordsMatch(std::string first, std::string second) {
    int result = first.compare(second);
    if(result == 0) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(const std::string password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string first, std::string second) {
    return ErrorCode::Ok;
}