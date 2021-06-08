#include <iostream>
#include <cctype>
#include <algorithm>

#include "validation.hpp"

    
std::string getErrorMessage(ErrorCode errorType)
{
    switch(errorType)
    {
        case ErrorCode::Ok:
        {
            return std::string("Ok");
        }
        break;
        
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        {
            return std::string("Password needs to have at least nine characters");
        }
        break;
        
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
        {
            return std::string("Password needs to have at least one number");
        }
        break;

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        {
            return std::string("Password needs to have at least one special character");
        }
        break;

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        {
            return std::string("Password needs to have at least one uppercase letter");
        }       
        break; 

        case ErrorCode::PasswordsDoNotMatch:
        {
            return std::string("Passwords do not match");
        }       
        break;
    }
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword)
{
    if(firstPassword.size() != secondPassword.size())
    {
        return false;
    }

    for(int i = 0; i < firstPassword.size(); i++)
    {
        if(firstPassword[i] != secondPassword[i])
        {
            return false;
        }   
    }

    return true;
}

ErrorCode checkPasswordRules(std::string password)
{
    if(password.size() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if(std::none_of(password.begin(), password.end(), [](char c ){return std::isdigit(c);}))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if(std::all_of(password.begin(), password.end(), [](char c ){return std::isalnum(c);})) 
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if(std::none_of(password.begin(), password.end(), [](char c ){return std::isupper(c);}))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword)
{
    if(doPasswordsMatch(firstPassword, secondPassword))
    {
        return checkPasswordRules(firstPassword);
    }
    else
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
}