#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& message) {
    if (message == ErrorCode::Ok) {
        return "Ok";
    } else if (message == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    } else if (message == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (message == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (message == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else if (message == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    }
    return "Message not found!";
}

bool doPasswordsMatch(const std::string& password1, const std::string& password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string& password) {
    int random = rand() % 5;
    if (random == 0) {
        return ErrorCode::Ok;
    } else if (random == 1) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (random == 2) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (random == 3) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (random == 4) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password1);
}
