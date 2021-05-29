#include "validation.hpp"
#include <ctime>

std::string getErrorMessage(ErrorCode errorCode)
{
    switch (errorCode)
    {
        case ErrorCode::Ok: return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "PasswordNeedsAtLeastNineCharacters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber: return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "PasswordNeedsAtLeastOneUppercaseLetter";
        case ErrorCode::PasswordsDoNotMatch: return "PasswordsDoNotMatch";     
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2)
{
    return (pass1 == pass2);
}

ErrorCode checkPasswordRules(std::string pass1)
{
    srand(time (NULL) );
    int random = rand()%6;
    ErrorCode result = static_cast<ErrorCode>(random);
    return result;
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