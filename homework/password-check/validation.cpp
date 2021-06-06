#include <iostream>

#include "validation.hpp"

    
void getErrorMessage(ErrorCode errorType)
{
    switch(errorType)
    {
        case ErrorCode::Ok:
        {
            std::cout<<"The password is OK"<<"\n";
        }
        break;
        
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        {
            std::cerr<<"Password needs at least nine characters"<<"\n";
        }
        break;
        
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
        {
            std::cerr<<"Password needs at least one number"<<"\n";
        }
        break;

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        {
            std::cerr<<"Password needs at least one upper case letter"<<"\n";
        }       
        break; 

        case ErrorCode::PasswordsDoNotMatch:
        {
            std::cerr<<"Passwords do not match"<<"\n";
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