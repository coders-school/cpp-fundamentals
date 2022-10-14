#include "validation.hpp"
// TODO: Put implementations here
#include <algorithm>
#include <string>
#include <vector>

std::string getErrorMessage(ErrorCode error) {
    std::string text = "";

    switch (error) {
    case ErrorCode::Ok:

        text = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        text = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        text = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        text = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        text = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        text = "Passwords do not match";
        break;
    default:
        text = "Unknown error";
    }
    return text;
}

bool doPasswordsMatch(const std::string& password,const std::string& repeatedPassword) {
    if (password == repeatedPassword) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    ErrorCode result = ErrorCode::PasswordsDoNotMatch;

    if (doPasswordsMatch(password, repeatedPassword)) {
        return checkPasswordRules(password);
    } else {
        return result;
    }
}

ErrorCode checkPasswordRules(const std::string& password) {
    ErrorCode result = ErrorCode::Ok;  // init
    if (password.length() < 9) {
        result = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(password.begin(), password.end(), ::isupper)) {
        result = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (std::none_of(password.begin(), password.end(), ::isdigit)) {
        result = ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::all_of(password.begin(), password.end(), ::isalnum)) {
        result = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    return result;
}
