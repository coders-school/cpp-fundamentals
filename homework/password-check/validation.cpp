#include "validation.hpp"
#include <cctype>
#include <algorithm>


std::string getErrorMessage(const ErrorCode code)
{
    switch(code)
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
        default:
            return "Undefined error";
    }
}

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2)
{
    return pass1 == pass2;
}

ErrorCode checkPasswordRules(const std::string& pass1)
    {
        if(pass1.length() < 9) 
        {
            return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        }

        if(std::none_of(pass1.cbegin(),pass1.cend(), ::isdigit)){
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        }
        if(std::none_of(pass1.cbegin(),pass1.cend(), ::ispunct)){
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
        if(std::none_of(pass1.cbegin(),pass1.cend(), ::isupper)){
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        }
        
        return ErrorCode::Ok;
    }

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2)
{
    return doPasswordsMatch(pass1,pass2) ? checkPasswordRules(pass1) : ErrorCode::PasswordsDoNotMatch;
}