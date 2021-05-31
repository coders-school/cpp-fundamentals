#include "validation.hpp"
// TODO: Put implementations here


std::string getErrorMessage(const ErrorCode error){
    switch(error){
        case ErrorCode::Ok :
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters :
            return "Password Needs At Least Nine Characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber :
            return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter :
            return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter :
            return "PasswordNeedsAtLeastOneUppercaseLetter";
        case ErrorCode::PasswordsDoNotMatch :
            return "PasswordsDoNotMatch";
        default :
            return "Unknown Error !!!";
    }
}

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2){
}

ErrorCode checkPasswordRules(const std::string& pass){
}

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2){
}


