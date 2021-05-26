#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& error)
{
    switch(error)
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
        default:
            return "Passwords do not match";
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& new_password)
{
    return password == new_password;
}


ErrorCode checkPasswordRules(const std::string& password) {
    if(password.length() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    int counterisdigit = 0, counterispunct = 0, counterisupper = 0;
    for(char i : password)
    {
        if(std::isdigit(i))
        {
            counterisdigit++;
        }
        else if(std::ispunct(i))
        {
            counterispunct++;
        }
        else if (std::isupper(i))
        {
           counterisupper++;
        }
    }
    if(counterisdigit == 0){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if(counterispunct == 0){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if(counterisupper == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
     return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& new_password)
{
    if(!doPasswordsMatch(password, new_password))
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    else
        return checkPasswordRules(password);
}

