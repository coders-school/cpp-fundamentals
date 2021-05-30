#include "validation.hpp"

std::string getErrorMessage( ErrorCode errorCode){

    std::string errorMessage{""};

    switch (errorCode){
        case Ok:
            errorMessage =  "Ok";
            break;
        case PasswordNeedsAtLeastNineCharacters:
            errorMessage = "Password needs to have at least nine characters";
            break;
        case PasswordNeedsAtLeastOneNumber:
            errorMessage = "Password needs to have at least one number";
            break;
        case PasswordNeedsAtLeastOneSpecialCharacter:
            errorMessage = "Password needs to have at least one special character";
            break;
        case PasswordNeedsAtLeastOneUppercaseLetter:
            errorMessage = "Password needs to have at least one uppercase letter";
            break;
        case PasswordsDoNotMatch:
            errorMessage = "Passwords do not match";
            break;
        default:
            errorMessage = "Unknown error code";

    return errorMessage;
    }
};
bool doPasswordsMatch(std::string password1, std::string password2 ){
    return password1 == password2;
};
ErrorCode checkPasswordRules(std::string password){
    ErrorCode errorCode = static_cast<ErrorCode>(rand() % PasswordsDoNotMatch);
    return errorCode;
};
ErrorCode checkPassword(std::string password1, std::string password2 ){
    ErrorCode errorCode = Ok;
    if(!doPasswordsMatch(password1 , password2)){
        errorCode = PasswordsDoNotMatch;
    } else {
        errorCode = checkPasswordRules(password1);
    }
    return errorCode;
};