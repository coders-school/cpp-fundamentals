#include "validation.hpp"
#include "string"
#include <algorithm>

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

bool isPasswordHasSpecial() {
    return true;
}

bool isPasswordHasUppercase() {
    return true;
}

bool isPasswordDoNotMatch() {
    return true;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < PASSWORD_LENGTH) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(password.begin(), password.end(), &::isdigit)) {
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

ErrorCode checkPassword(const std::string& password, const std::string& repeated_password) {
    bool check = doPasswordsMatch(password, repeated_password);
    if (check) {
        return checkPasswordRules(password);
    }    
    return ErrorCode::PasswordsDoNotMatch;
}
