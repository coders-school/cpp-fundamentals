#include "validation.hpp"

bool isFindDigit(const std::string& password) {
    for (auto c : password) {
        if (std::isdigit(c)) {
            return true;
        }
    }
    return false;
}

bool isFindSpecialCharacter(const std::string& password) {
    for (auto c : password) {
        if (!std::isalnum(c)) {
            return true;
        }
    }
    return false;
}

bool isFindUppercaseLetter(const std::string& password) {
    for (auto c : password) {
        if (std::isupper(c)) {
            return true;
        }
    }
    return false;
}

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
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!isFindDigit(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!isFindSpecialCharacter(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!isFindUppercaseLetter(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password1);
}
