#include "validation.hpp"
#include <algorithm>

std::string getErrorMessage(const ErrorCode& err) {
    std::string errorMessage;

    switch (err) {
    case ErrorCode::Ok:
        errorMessage = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        errorMessage = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        errorMessage = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        errorMessage = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        errorMessage = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        errorMessage = "Passwords do not match";
        break;
    }

    return errorMessage;
}

bool doPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword) {
    if (firstPassword == secondPassword) {
        return true;
    }

    return false;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;

    } else if (!std::any_of(password.cbegin(), password.cend(), [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;

    } else if (!std::any_of(password.cbegin(), password.cend(), [](unsigned char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

    } else if (!std::any_of(password.cbegin(), password.cend(), [](unsigned char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword) {
    if (!doPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoNotMatch;

    } else {
        return checkPasswordRules(firstPassword);
    }
}