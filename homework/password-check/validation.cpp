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
    static std::random_device device;
    std::mt19937 generator(device());
    std::uniform_int_distribution<> distribution(
        static_cast<int>(ErrorCode::Ok),
        static_cast<int>(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter));
    return static_cast<ErrorCode>(distribution(generator));
}

ErrorCode checkPassword(const std::string& first, const std::string& second) {
    if (!doPasswordsMatch(first, second)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}
