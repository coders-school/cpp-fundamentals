#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error){
    
    return "";
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatPassword){
    return false;
}

ErrorCode checkPasswordRules(const std::string& password){
    return ErrorCode::PasswordsDoNotMatch;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatPassword){
    return ErrorCode::PasswordsDoNotMatch;
}