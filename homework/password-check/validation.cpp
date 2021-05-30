#include "validation.hpp"
#include <cctype>
#include <algorithm>

// TODO: Put implementations here

std::string getErrorMessade(ErrorCode problem)
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
bool doPasswordMatch(std::string passwordOne, std::string passwordTwo)
{
    bool check = (passwordOne == passwordTwo);
    return check;
}
ErrorCode checkPasswordRules(std::string passwordOne)
{
    if (std::any_of(passwordOne.front(), passwordOne.back(), isdigit))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (passwordOne.length() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::any_of(passwordOne.front(), passwordOne.back(), ispunct))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::any_of(passwordOne.front(), passwordOne.back(), isupper))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (doPasswordMatch == false)
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return ErrorCode::Ok;
}