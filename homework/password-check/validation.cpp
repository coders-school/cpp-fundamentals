#include "validation.hpp"

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
bool doPasswordsMatch(std::string passwordOne, std::string passwordTwo)
{
    if (passwordOne == passwordTwo)
    {
        return true;
    }
    return false;
}