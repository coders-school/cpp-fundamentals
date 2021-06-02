#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error){
    const std::map<ErrorCode, std::string> ErrorCodeString{
        {ErrorCode::Ok, "Ok"},
        {ErrorCode::PasswordNeedsAtLeastNineCharacters,"Password needs to have at least nine characters"},
        {ErrorCode::PasswordNeedsAtLeastOneNumber,"Password needs to have at least one number"},
        {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter,"Password needs to have at least one special character"},
        {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter,"Password needs to have at least one uppercase letter"},
        {ErrorCode::PasswordsDoNotMatch,"Passwords do not match"}
    };

    auto errorCode = ErrorCodeString.find(error);

    return errorCode->second;
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword){
    if(password == repeatedPassword){
        return true;
    }else{
        return false;
    }
}

ErrorCode checkPasswordRules(std::string password){
    int i = rand() % 5;
    return ErrorCode(i);
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword){
    if(doPasswordsMatch(password, repeatedPassword)){
        auto passwordRules = checkPasswordRules(password);
        return passwordRules;
    }else{
        return ErrorCode::PasswordsDoNotMatch;
    }
}