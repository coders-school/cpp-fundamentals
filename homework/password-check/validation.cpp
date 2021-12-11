#include "validation.hpp"

ErrorCode checkPassword(std::string password, std::string repeatedPassword)
{
    if (doPasswordsMatch(password, repeatedPassword))
    {
        return checkPasswordRules(password);
    }
    else return ErrorCode::PasswordsDoNotMatch;
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword)
{
    if(password==repeatedPassword) return true;
    else return false;
}

ErrorCode checkPasswordRules(std::string password)
{
    if(password.size()<9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool digit_check=false;
    for (auto element : password)
    {
        if(isdigit(element)) digit_check=true;
    }
    if(digit_check==false)
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (password.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890_") == std::string::npos)
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    bool uppercase_check=false;
    for (auto element : password)
    {
        if(isupper(element)) uppercase_check=true;
    }
    if(uppercase_check==false) return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

    return ErrorCode::Ok;
}

std::string getErrorMessage(ErrorCode result)
{
    std::string temp;
    if(result==ErrorCode::Ok) return temp={"Ok"};
    if(result==ErrorCode::PasswordNeedsAtLeastNineCharacters) return temp={"Password needs to have at least nine characters"};
    if(result==ErrorCode::PasswordNeedsAtLeastOneNumber) return temp={"Password needs to have at least one number"};
    if(result==ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) return temp={"Password needs to have at least one special character"};
    if(result==ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) return temp={"Password needs to have at least one uppercase letter"};
    if(result==ErrorCode::PasswordsDoNotMatch) return temp={"Passwords do not match"};
}
