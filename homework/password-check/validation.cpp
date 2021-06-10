#include "validation.hpp"
#include "string"

std::string getErrorMessage(ErrorCode errorType) {
    switch (errorType) {
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
    };
    return "None";
};

bool doPasswordsMatch(const std::string& password, const std::string& repeated_password) {
    if (password == repeated_password) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (!isPasswordToShort()) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (!isPasswordHasNumber()) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (!isPasswordHasSpecial()) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (!isPasswordHasUppercase()) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    if (!isPasswordDoNotMatch()) {
        return ErrorCode::PasswordsDoNotMatch;
    }

    return ErrorCode::Ok;
}