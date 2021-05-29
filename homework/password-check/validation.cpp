#include "validation.hpp"
#include <algorithm>

std::string getErrorMessage(ErrorCode error) {
    std::string result = "";

    switch (error) {
    case ErrorCode::Ok:
        result = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        result = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        result = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        result = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        result = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        result = "Passwords do not match";
        break;
    default:
        result = "Unknown Error?";
    }

    return result;
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatPassword) {
    bool pass = (password == repeatPassword) ? true : false;

    return pass;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (!(std::any_of(password.begin(), password.end(), ::isdigit))) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890") == std::string::npos) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (!(std::any_of(password.begin(), password.end(), isupper))) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatPassword) {
    if (password == repeatPassword) {
        return checkPasswordRules(password);
    }
    return ErrorCode::PasswordsDoNotMatch;
}