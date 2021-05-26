#include <cctype>
#include "validation.hpp"

std::string getErrorMessage(ErrorCode code)
{
    switch(code)
    {
    case ErrorCode::Ok:
        return "Ok";
        
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "PasswordNeedsAtLeastNineCharacters";
        
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "PasswordNeedsAtLeastOneNumber";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "PasswordNeedsAtLeastOneSpecialCharacter";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "PasswordNeedsAtLeastOneUppercaseLetter";
    case ErrorCode::PasswordsDoNotMatch:
        return "PasswordsDoNotMatch";
    }
}

bool doPasswordsMatch(std::string Passwords1, std::string Passwords2)
{
    return Passwords1==Passwords2;
}

ErrorCode doPasswordsMatch(std::string Passwords)
{
    return ErrorCode::Ok;
}

ErrorCode checkPasswordRules(std::string Passwords)
{
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string Passwords1, std::string Passwords2)
{
    return ErrorCode::Ok;
}
