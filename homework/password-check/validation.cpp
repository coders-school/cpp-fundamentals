#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error){
    
    std::string result = "";

    switch(error){
        case ErrorCode::Ok:
            result = "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            result = "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            result = "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            result = "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            result = "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            result = "Passwords do not match";
            break;
        default:
            result = "Unknown Error?";
    }

    return result;
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatPassword){

    bool pass = (password == repeatPassword) ? true : false;

    return pass;
}

ErrorCode checkPasswordRules(const std::string& password){
    return ErrorCode::PasswordsDoNotMatch;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatPassword){
    return ErrorCode::PasswordsDoNotMatch;
}