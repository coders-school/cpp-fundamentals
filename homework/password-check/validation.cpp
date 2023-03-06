#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode code) {
    std::string message;
    switch (code) {
    case ErrorCode::Ok:
        message = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        message = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        message = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        message = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        message = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        message = "Passwords do not match";
        break;
    }
    return message;
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
    return password == repeatedPassword;
}

ErrorCode checkPasswordRules(std::string password) {
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(password.begin(), password.end(), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(password.begin(), password.end(), ::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::none_of(password.begin(), password.end(), [](char c) { return std::ispunct(c) || std::isspace(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
    if (!doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password);
    }
}
