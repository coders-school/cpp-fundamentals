#include "validation.hpp"
#include <random>
#include <algorithm>

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
    default:
        return "Ok";
    }
}

bool doPasswordsMatch(const std::string& first, const std::string& second) {
    return first == second;
}

ErrorCode checkPasswordRules(const std::string& pass) {
    constexpr int PASSWORD_LENGTH = 9;

    if (pass.size() < PASSWORD_LENGTH) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(pass.begin(), pass.end(), [](char c) { return isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::none_of(pass.begin(), pass.end(), [](char c) { return !isalnum(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(pass.begin(), pass.end(), [](char c) { return isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& first, const std::string& second) {
    if (!doPasswordsMatch(first, second)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}
