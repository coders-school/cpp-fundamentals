#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error)
{   
switch (error)
{
    case ErrorCode::Ok:
        return "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return"Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
        break;
    default:
        return "Unknown error";

}
}

bool doPasswordsMatch(std::string password, std::string realPassword)
{
    if( password == realPassword )      return true;
    else                                return false;
}


ErrorCode checkPasswordRules(std::string password)
{
    if(!doPasswordHave9orMoreLetters(password))          return ErrorCode::PasswordNeedsAtLeastNineCharacters;

    else if(!doPasswordHaveNumber(password))             return ErrorCode::PasswordNeedsAtLeastOneNumber;
 
    else if(!doPasswordHaveBigLetter(password))          return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

    else if(!doPasswordHaveSpecialCharacter(password))   return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

    else                                                return ErrorCode::Ok;


}

ErrorCode checkPassword(std::string pass1, std::string pass2)
{
    if(!doPasswordsMatch(pass1, pass2)) 
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    else
    {
       return checkPasswordRules(pass1);
    }

}

bool doPasswordHave9orMoreLetters(const std::string& password)
{
    int passwordLength = password.length();
    if(passwordLength < 9) return false;
    else return true;
}

bool doPasswordHaveNumber(const std::string& password)
{
    int passwordLength = password.length();
    int flag = 1;

    for(int i = 0; i < passwordLength; i++)
    {
        if(isdigit( password[i] ) )
        {
            return true;
        }
    }
    return false;
}

bool doPasswordHaveBigLetter(const std::string& password)
{
    int passwordLength = password.length();
    int flag = 1;

    for(int i = 0; i < passwordLength; i++)
    {
        if(isupper( password[i] ) )
        {
            return true;
        }
    } 
    return false;
}


bool doPasswordHaveSpecialCharacter(const std::string& password)
{
    int passwordLength = password.length();
    int flag = 1;

    for(int i = 0; i < passwordLength; i++)
    {
        if(ispunct( password[i] ) )
        {
            return true;
        }
    } 
    return false;
}