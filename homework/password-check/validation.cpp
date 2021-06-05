#include "validation.hpp"
#include <string>

ErrorCode checkPassword(std::string password, std::string repeatedPassword){
    if (password.size() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    return ErrorCode::Ok;
}

std::string getErrorMessage(ErrorCode code){
    switch (code){
        case ErrorCode::Ok:
            return "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password need at least 9 charters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password need at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password need at least one special charter";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password need at least one uppercase charter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            return "Password do not match";
            break;
        default:
            return "Error";
    }
}
