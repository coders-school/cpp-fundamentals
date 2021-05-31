#include "validation.hpp"
// TODO: Put implementations here


std::string getErrorMessage(const ErrorCode error){
    switch(error){
        case ErrorCode::Ok :
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters :
            return "Password Needs At Least Nine Characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber :
            return "Password Needs At Least One Number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter :
            return "Password Needs At Least One Special Character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter :
            return "Password Needs At Least One Uppercase Letter";
        case ErrorCode::PasswordsDoNotMatch :
            return "Passwords Do Not Match";
        default :
            return "Unknown Error !!!";
    }
}

bool doPasswordsMatch(const std::string& pass1, const std::string& pass2){
    if(pass1 == pass2)
        return true;
    else
        return false;
}

ErrorCode checkPasswordRules(const std::string& pass){
}

ErrorCode checkPassword(const std::string& pass1, const std::string& pass2){
}


