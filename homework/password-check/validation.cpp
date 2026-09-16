#include "validation.hpp"
#include <algorithm>
#include <vector>

std::string getErrorMessage(ErrorCode error_code) {
    switch (error_code) {
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
        return "Unknown error";
    }
}

bool doPasswordsMatch(const std::string& password_first, const std::string& password_second) {
    return !password_first.compare(password_second);
}

ErrorCode checkPasswordRules(const std::string& password) {
    std::vector<char> special_character{'!', '@', '#', '$', '%', '^', '&', '*', '(', ')'};
    if (password.length() < 9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) {
            return std::isdigit(c);
        }))
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if (std::none_of(password.begin(), password.end(), [&special_character](unsigned char c) {
            return std::find(special_character.begin(), special_character.end(), c) != special_character.end();
        }))
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if (std::none_of(password.begin(), password.end(), [](unsigned char c) {
            return std::isupper(c);
        }))
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password_first, const std::string& password_second) {
    if (!doPasswordsMatch(password_first, password_second))
        return ErrorCode::PasswordsDoNotMatch;
    return checkPasswordRules(password_first);
}