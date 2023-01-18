#include "validation.hpp"
#include <cctype>
#include <cstdlib>

ErrorCode errorCode;  // Enum class object

std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
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
        return "Ok";
    }
    return "Ok";
}

bool doPasswordsMatch(std::string password, std::string passwordRepeated) {
    return password == passwordRepeated;
}

ErrorCode checkPasswordRules(std::string password) {
    if (static_cast<int>(password.size()) < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!isInStringIsDigit(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!isInStringIsUppercase(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (!isInStringIsSpecialCharacter(password)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else {
        return ErrorCode::Ok;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string passwordRepeated) {
    if (doPasswordsMatch(password, passwordRepeated)) {
        return checkPasswordRules(passwordRepeated);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}

bool isInStringIsDigit(std::string password) {
    for (char ch : password) {
        if (isdigit(ch)) {
            return true;
        }
    }
    return false;
}

bool isInStringIsUppercase(std::string password) {
    for (char ch : password) {
        if (isupper(ch)) {
            return true;
        }
    }
    return false;
}

bool isInStringIsSpecialCharacter(std::string password) {
    for (char ch : password) {
        if (ispunct(ch)) {
            return true;
        }
    }
    return false;
}