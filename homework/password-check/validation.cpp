#include "validation.hpp"
#include <ctime>
#include <cctype>

std::string getErrorMessage(ErrorCode errorCode)
{
    switch (errorCode)
    {
        case ErrorCode::Ok: return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch: return "Passwords do not match";     
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2)
{
    return (pass1 == pass2);
}

ErrorCode checkPasswordRules(std::string pass1)
{
    // srand(time (NULL) );
    // int random = rand()%6;
    // ErrorCode result = static_cast<ErrorCode>(random);
    // return result;
    
    if(pass1.size() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool isThereOneNumber= false;
    for(int i = 0; i < pass1.length(); i++)
    {      
        if (pass1[i] >= '0' && pass1[i] <= '9')
        {
            isThereOneNumber= true;
            break;
        }               
    }
    if (!isThereOneNumber)
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    bool isThereOneSpecialCharacter= false;
    for(int i = 0; i < pass1.length(); i++)
    {
        if(std::ispunct(pass1[i]))
        {
            isThereOneSpecialCharacter = true;
            break;
        }        
    }
    if (!isThereOneSpecialCharacter)
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    bool isThereOneUppercaseLetter= false;
    for(int i = 0; i < pass1.length(); i++)
    {
        if(std::toupper(pass1[i]))
        {
            isThereOneUppercaseLetter = true;
            break;
        }
    }
    if (!isThereOneUppercaseLetter)
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }  

}

ErrorCode checkPassword(std::string pass1, std::string pass2)
{    
    if(doPasswordsMatch(pass1, pass2))
    {
        return checkPasswordRules(pass1);
    }
    else
    {
        return ErrorCode::PasswordsDoNotMatch;
    }

    //return (doPasswordsMatch(pass1, pass2)) ?  checkPasswordRules(pass1) : ErrorCode::PasswordsDoNotMatch;

}