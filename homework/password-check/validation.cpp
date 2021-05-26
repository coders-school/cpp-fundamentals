#include "validation.hpp"
#include <algorithm>
#include <cctype>
std::string getErrorMessage(ErrorCode error)
{
    switch (error)
    {
    case ErrorCode::Ok:
    return "ok";
        
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
ErrorCode checkPasswordRules(const std::string &password)
{
    if(password.size() < 9)
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    if (std::none_of(begin(password), end(password), [](auto& i){return std::isalnum(i);}))
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if(std::none_of(begin(password), end(password), [](auto& i){return std::ispunct(i);})) 
    return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if(std::none_of(begin(password), end(password), [](auto& i){return std::isupper(i);}))
    return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    else
    return ErrorCode::Ok;
}
    ErrorCode CheckPassword(const std::string& password, const std::string& repeatedPassword)
    {
       return doPasswordsMatch(password, repeatedPassword) ? checkPasswordRules(password) : ErrorCode::PasswordsDoNotMatch;

    }
bool doPasswordsMatch(const std::string& first, const std::string& second)
{
    return first == second;
}

