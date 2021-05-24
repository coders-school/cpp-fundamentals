#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
    switch(error) {
    case ErrorCode::Ok : {
        return "Ok";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastNineCharacters : {
        return "Password needs to have at least nine characters";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneNumber : {
        return "Password needs to have at least one number";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : {
        return "Password needs to have at least one special character";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : {
        return "Password needs to have at least one uppercase letter";
        break;
    }
    case ErrorCode::PasswordsDoNotMatch : {
        return "Passwords do not match";
        break;
    }
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword){
    if(password == repeatedPassword){
        return true;
    }
    return false;
}