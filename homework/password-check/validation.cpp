#include "validation.hpp"
#include <cctype>
#include <algorithm>

std::string getErrorMessage(ErrorCode Err)
{
    switch (Err)
    {
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
    };
    return "";
}

bool doPasswordsMatch(const std::string &password1, const std::string &password2)
{
    return (password1 == password2);
}

ErrorCode checkPasswordRules(const std::string &password)
{
    if (std::none_of(password.begin(), password.end(), [](char z) { return isupper(z); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    };

    if (password.size() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    };

    if (std::none_of(password.begin(), password.end(), [](char z) { return isdigit(z); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    };

    if (std::none_of(password.begin(), password.end(), [](char z) { return (!isalpha(z) && !isdigit(z)); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    };

    return ErrorCode::Ok;
};

ErrorCode checkPassword(const std::string &password1, const std::string &password2)
{
    if (!doPasswordsMatch(password1, password2))
    {
        return ErrorCode::PasswordsDoNotMatch;
    };
    return checkPasswordRules(password1);
}