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
    srand(time(NULL));
    int number=rand()%5;
    switch(number)
    {
        case 0: return ErrorCode::Ok; break;
        case 1: return ErrorCode::PasswordNeedsAtLeastNineCharacters; break;
        case 2: return ErrorCode::PasswordNeedsAtLeastOneNumber; break;
        case 3: return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter; break;
        case 4: return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter; break;
    }
}

std::string getErrorMessage(ErrorCode result)
{
    if(result==ErrorCode::Ok) return "Ok";
    if(result==ErrorCode::PasswordNeedsAtLeastNineCharacters) return "PasswordNeedsAtLeastNineCharacters";
    if(result==ErrorCode::PasswordNeedsAtLeastOneNumber) return "PasswordNeedAtLeastOneNumber";
    if(result==ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) return "PasswordNeedsAtLeastOneSpecialCharacter";
    if(result==ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) return "PasswordNeedsAtLeastOneUppercaseLetter";
    if(result==ErrorCode::PasswordsDoNotMatch) return "PasswordDoNotMatch";
}
