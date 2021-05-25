#include "validation.hpp"
std::string getErrorMessage(ErrorCode error)
{
    switch (error)
    {
    case ErrorCode::Ok:
    return "ok";
        
    case ErrorCode::PasswordNeedsAtLeastNinecharacters:
    return "Password needs to have at least nine characters";
        
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
    return "Password needs to have at least one number";
        
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    return "Password needs to have at least one special character";
        
    case ErrorCode::PasswordNeedsAtLeastOneUpprecaseKetter:
    return "Password needs to have at least one uppercase letter";
        
    default:
    return "Passwords do not match";
    }
}
std::string CheckPasswordRules(const std::string &password)
{
    if(password.size() < 9)
    return "Password needs to have at least nine characters";
    else if (
}