#include "validation.hpp"

std::string getErrorMessage(ErrorCode code)
{
    std::string message = "";
    switch (code)
    {
    case ErrorCode::Ok:
        message = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        message = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        message = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        message = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        message = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        message = "Passwords do not match";
        break;
    default:
        break;
    }

    return message;
}


bool doPasswordsMatch(std::string first, std::string second)
{
    if(first.size() != second.size()){
        return false;
    }
    for(int i = 0; i < first.size(); i++){
        if(first[i] != second[i]){
            return false;
        }
    }
    return true;
}


ErrorCode checkPasswordRules(std::string password)
{
    if(password.size() < minimumPasswordLength){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if(!containsAtLeastOneNumber(password)){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if(!containsAtLeastOneUppercaseLetter(password)){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if(!containsAtLeastOneSpecialCharacter(password)){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    return ErrorCode::Ok;
}


ErrorCode checkPassword(std::string first, std::string second)
{
    if(!doPasswordsMatch(first, second)){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}


bool containsAtLeastOneNumber(std::string password) 
{
    for(auto it : password){
        if(std::isdigit(it)){
            return true;
        }
    }
    return false;
}


bool containsAtLeastOneUppercaseLetter(std::string password) 
{
    for(auto it : password){
        if(std::isupper(it)){
            return true;
        }
    }
    return false;
}


bool containsAtLeastOneSpecialCharacter(std::string password) 
{
    for(auto it : password){
        if( std::isprint(it) && !std::isalnum(it)){
            return true;
        }
    }
    return false;
}
