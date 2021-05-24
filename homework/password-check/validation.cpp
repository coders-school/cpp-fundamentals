#include "validation.hpp"

std::map<ErrorCode, std::string> errorsNames = {
    {ErrorCode::Ok, "Ok"},
    {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}
};

std::string getErrorMessage(ErrorCode error){
    return errorsNames[error];
}

bool doPasswordsMatch(std::string first, std::string second){
    if(first.compare(second)){
        return false;
    }
    return true;
}

ErrorCode checkPasswordRules(std::string password){
    unsigned char lottery = std::rand() % 5;
    return static_cast<ErrorCode>(lottery);
}

ErrorCode checkPassword(std::string first, std::string second){
    if(!doPasswordsMatch(first, second)){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}