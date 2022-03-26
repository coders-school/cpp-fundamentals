#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(const ErrorCode& code)
{
    int num = static_cast<int>(code);
    switch (num)
    {
    case 0:
        return "Ok";
        break;
    case 1:
        return "Password needs to have at least nine characters";
        break;
    case 2:
        return "Password needs to have at least one number";
        break;
    case 3:
        return "Password needs to have at least one special character";
        break;
    case 4:
        return "Password needs to have at least one uppercase letter";
        break;
    case 5:
        return "Passwords do not match";
        break;
    }
}

bool doPasswordsMatch(const std::string& pas1, const std::string& pas2)
{
    if(pas1 ==  pas2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ErrorCode checkPasswordRules(const std::string& pas)
{
    if(pas.length() < 9)
    {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if(!isThereNumberInString(pas))
    {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if(!isThereSpecialCharacterInString(pas))
    {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if(!isThereUppercaseInString(pas))
    {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    else
    {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(const std::string& pas1, const std::string& pas2)
{
    if(!doPasswordsMatch(pas1, pas2))
    {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(pas1);
}

bool isThereNumberInString(const std::string& str)
{
    for(auto tmp : str)
    {
        if(tmp >= 48 && tmp <= 57) return true;
    }
    return false;
}

bool isThereSpecialCharacterInString(const std::string& str)
{
    for(auto tmp : str)
    {
        if((tmp < 65 && tmp > 90) && (tmp < 97 && tmp > 122)) return true;
    }
    return false;
}
bool isThereUppercaseInString(const std::string& str)
{
    for(auto tmp : str)
    {
        if(tmp >= 65 && tmp <= 90) return true;
    }
    return false;
}