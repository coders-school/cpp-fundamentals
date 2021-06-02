#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <random>

std::string getErrorMessage(ErrorCode error)
{
    switch (error) {
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
        return "Invalid Error";
    }
}

bool doPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword)
{
    return firstPassword == secondPassword;
}

ErrorCode checkPasswordRules(const std::string& password)
{
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(password.begin(), password.end(),
                   [](auto character) { return std::isdigit(character); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(password.begin(), password.end(),
                   [](auto character) { return std::ispunct(character); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (std::none_of(password.begin(), password.end(),
                   [](auto character) { return std::isupper(character); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword)
{
    if (!doPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(firstPassword);
}
