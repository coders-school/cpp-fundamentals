#include "validation.hpp"
// TODO: Put implementations here

ErrorCode checkPassword(const std::string password, const std::string checkedPassword) {
    if (doPasswordsMatch(password, checkedPassword)) {
        return checkPasswordRules(checkedPassword);

    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
            break;
        case ErrorCode::Ok:
            return "Ok";
            break;
        default:
            return "";
            break;
    }
}
bool doPasswordsMatch(const std::string password, const std::string checkedPassword) {
    if (password == checkedPassword) {
        return true;
    } else {
        return false;
    }
}
ErrorCode checkPasswordRules(const std::string &input) {
    bool hasUpper = false;
    bool hasDigit = false;
    bool specialCharacter = false;
    std::string normalChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

    for (int i = 0; i < input.length(); i++) {
        if (isupper(input[i])) {
            hasUpper = true;
        }
        if (isdigit(input[i])) {
            hasDigit = true;
        }
        size_t special = input.find_first_not_of(normalChars);

        if (special != std::string::npos) {
            specialCharacter = true;
        }
    }

    if (input.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!hasDigit) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!specialCharacter) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!hasUpper) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}