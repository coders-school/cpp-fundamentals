#include "validation.hpp"
#include <algorithm>
#include <ranges>
#include <string>

auto getErrorMessage(ErrorCode code_to_convert) -> std::string {
    switch (code_to_convert) {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    }
    return "Error ocurred";
}

bool doPasswordsMatch(std::string password_first, std::string password_second) {
    return password_first == password_second;
}

ErrorCode checkPasswordRules(std::string password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (!std::none_of(password.begin(), password.end(), [](auto x) { return std::isupper(x); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (!std::none_of(password.begin(), password.end(), [](auto x) { return std::isdigit(x); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (!std::none_of(password.begin(), password.end(), [](auto x) { return std::ispunct(x); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    return ErrorCode::Ok;
}

auto checkPassword(std::string password_first, std::string password_second) -> ErrorCode {
    if (doPasswordsMatch(password_first, password_second)) {
        return checkPasswordRules(password_first);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}