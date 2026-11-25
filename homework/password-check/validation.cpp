#include "validation.hpp"
#include <string>
#include <cctype>

bool doPasswordsMatch(const std::string& password, const std::string& confirmPassword) {
    return password == confirmPassword;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    bool hasNumber = false;
    bool hasSpecialChar = false;
    bool hasUppercase = false;

    for (char c : password) {
        if (std::isdigit(c)) {
            hasNumber = true;
        } else if (std::isupper(c)) {
            hasUppercase = true;
        } else if (!std::isalnum(c)) {
            hasSpecialChar = true;
        }
    }

    if (!hasNumber) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (!hasSpecialChar) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (!hasUppercase) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& confirmPassword) {
    if (!doPasswordsMatch(password, confirmPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    ErrorCode ruleResult = checkPasswordRules(password);
    if (ruleResult != ErrorCode::Ok) {
        return ruleResult;
    }
    
    return ErrorCode::Ok;
}

std::string getErrorMessage(ErrorCode result){
    switch (result) {
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
        default:
            return "Unknown error.";
    }
}