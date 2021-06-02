#include "validation.hpp"
// TODO: Put implementations here
#include <ctime>
#include <cstdlib>
#include <cctype>
#include <algorithm>
std::string getErrorMessage(ErrorCode errorCode)
{
    switch(errorCode)
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
        
    }
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword)
{
    if(password == repeatedPassword)
        return true;
    else 
        return false;
}

ErrorCode checkPasswordRules(std::string password)
{
    if(password.size() < 9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    else if(std::none_of(password.begin(), password.end(), ::isdigit))
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    else if(std::none_of(password.begin(), password.end(), ::ispunct))
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    else if(std::none_of(password.begin(), password.end(), ::isupper))
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    else
        return ErrorCode::Ok;
     
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword)
{
    bool passwordMatch = doPasswordsMatch(password, repeatedPassword);
    if(!passwordMatch)
        return ErrorCode::PasswordsDoNotMatch;
    else
        return checkPasswordRules(password);
}