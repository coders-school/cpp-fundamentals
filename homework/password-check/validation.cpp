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