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

        if(!(std::any_of(pass1.begin(),pass1.end(), ::isdigit))){
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        }
        if(!(std::any_of(pass1.begin(),pass1.end(), ::ispunct))){
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
        if(!(std::any_of(pass1.begin(),pass1.end(), ::isupper))){
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        }
        
        return ErrorCode::Ok;
    }

