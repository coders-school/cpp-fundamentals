#include "validation.hpp"
#include <cctype>
#include <algorithm>

std::string getErrorMessage(const ErrorCode t_ErrorCode)
{
    // No break instructions due to presence of returns
    switch (t_ErrorCode)
    {
    case ErrorCode::Ok: return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter";
    case ErrorCode::PasswordsDoNotMatch: return "Passwords do not match";
    default: return "Invalid error code";
    }
}

bool doPasswordsMatch(const std::string& t_FirstPass, const std::string& t_SecondPass)
{
    return t_FirstPass == t_SecondPass;
}

ErrorCode checkPasswordRules(const std::string& t_Pass)
{
    if(t_Pass.size() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if (std::none_of(t_Pass.cbegin(), t_Pass.cend(), [](const unsigned char c){ return std::isdigit(c); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if(std::none_of(t_Pass.cbegin(), t_Pass.cend(), [](const unsigned char c){ return std::ispunct(c); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if(std::none_of(t_Pass.cbegin(), t_Pass.cend(), [](const unsigned char c){ return std::isupper(c); }))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& t_FirstPass, const std::string& t_SecondPass){
    if(!doPasswordsMatch(t_FirstPass, t_SecondPass))
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(t_FirstPass);
}
