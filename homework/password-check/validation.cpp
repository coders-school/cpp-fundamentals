#include "validation.hpp"
#include <cctype>
#include <algorithm>

// TODO: Put implementations here

std::string getErrorMessage(ErrorCode problem)
{
    switch (problem)
    {
    case ErrorCode::Ok:
        return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
    default:
        return "out of control";
    }
}
bool doPasswordsMatch(std::string passwordOne, std::string passwordTwo)
{
    bool check = (passwordOne == passwordTwo);
    return check;
}

ErrorCode checkPasswordRules(std::string passwordOne)
{
    if (!std::any_of(passwordOne.begin(), passwordOne.end(), isdigit))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (passwordOne.length() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (!std::any_of(passwordOne.begin(), passwordOne.end(), ispunct))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (!std::any_of(passwordOne.begin(), passwordOne.end(), isupper))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string &passwordOne, const std::string &passwordTwo)
{
    if (doPasswordsMatch(passwordOne, passwordTwo))
    {
        checkPasswordRules(passwordOne);
    }
    return ErrorCode::PasswordsDoNotMatch;
}