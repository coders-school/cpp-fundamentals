#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
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
        return "Ok";
    }
};

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword) {
    if (password == repeatedPassword) {
        return true;
    } else {
        return false;
    }
};

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!std::regex_match(password, std::regex(".*[0-9].*"))) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!std::regex_match(password, std::regex(".*[^A-Za-z0-9].*"))) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!std::regex_match(password, std::regex(".*[A-Z].*"))) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
};

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    if (doPasswordsMatch(password, repeatedPassword)) {
        auto result = checkPasswordRules(password);
        return result;
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    };
};
