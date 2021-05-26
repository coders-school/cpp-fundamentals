#include "validation.hpp"
#include <cctype>
#include <algorithm>

ErrorCode checkPassword(const std::string &password, const std::string &repeatedPassword)
{
    if (doPasswordsMatch(password, repeatedPassword))
    {
        return checkPasswordRules(password);
    }
    return ErrorCode::PasswordsDoNotMatch;
}

bool doPasswordsMatch(const std::string &password, const std::string &repeatedPassword)
{
    return password == repeatedPassword;
}

ErrorCode checkPasswordRules(const std::string &password)
{
    if (password.length() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(password.begin(), password.end(), isdigit))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
        if (std::none_of(password.begin(), password.end(), ispunct))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(password.begin(), password.end(), isupper))
    {
        return PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

std::string getErrorMessage(ErrorCode code)
{
    switch (code)
    {
    case ErrorCode::Ok:
        return "Ok";
        break;
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
    default:
        return "Behaviour out of scope";
        break;
    }
}