#include <iostream>

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
    // Uggly and dangerous solution 
    int numbersOfEnumElements = 
        static_cast<int>(ErrorCode::Ok) - static_cast<int>(ErrorCode::PasswordsDoNotMatch);
    int randomNumber = rand() % numbersOfEnumElements;
    
    return static_cast<ErrorCode>(randomNumber);
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