#include "validation.hpp"

#include <algorithm>
#include <cctype>

std::string getErrorMessage(ErrorCode mistake){
    switch (mistake) {
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;
        case ErrorCode:: PasswordNeedsAtLeastOneSpecialCharacter:
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
bool doPasswordsMatch(std::string password, std::string repeatedPassword ){
    if(password == repeatedPassword) 
        return true;
    else 
        return false;
}
ErrorCode checkPasswordRules(const std::string password){
    if (password.length() < 9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    if (!(std::any_of(password.begin(), password.end(), ::isdigit)))
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if (!(std::any_of(password.begin(), password.end(), ::ispunct)))
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if (!(std::any_of(password.begin(), password.end(), ::isupper)))
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        return ErrorCode::Ok;
}
ErrorCode checkPassword(const std::string password, const std::string repeatedPassword){
    if(doPasswordsMatch(password, repeatedPassword))
        return checkPasswordRules(password);
        return ErrorCode::PasswordsDoNotMatch;
}
