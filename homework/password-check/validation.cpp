#include "validation.hpp"
#include <iostream>
#include <string>
#include <ctime>

bool doPasswordsMatch(const std::string& pass,const std::string& repeated_pass) {
    
    if (pass != repeated_pass){
        return false;
    }
    return true;
}

ErrorCode checkPasswordRules(const std::string& pass_rules) {

    std::srand(std::time(nullptr));   
    return static_cast<ErrorCode>(std::rand() % 3);
}

ErrorCode checkPassword(const std::string& pass_check,const std::string& repeated_check) {

    auto check = doPasswordsMatch(pass_check, repeated_check);
    if (check == false){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(pass_check);
}

std::string getErrorMessage(ErrorCode error_code) {
    
    switch (error_code) {
        case ErrorCode::Ok : 
            return "Ok";

        case ErrorCode::PasswordNeedsAtLeastNineCharacters : {
            return "Password needs to have at least nine characters";
        }
        case ErrorCode::PasswordNeedsAtLeastOneNumber : {
            return "Password needs to have at least one number";
        }
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : {
            return "Password needs to have at least one special character";
        }
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : {
            return "Password needs to have at least one uppercase letter";
        }
        case ErrorCode::PasswordsDoNotMatch : {
            return "Passwords do not match";
            break;
        }
        default: {
            return "Error of error";
            break;
        }
    }   
}
// TODO: Put implementations here