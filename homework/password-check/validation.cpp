#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error){
    if (error == ErrorCode::Ok){
        return "OK";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastNineCharacters){
        return "Password needs to have at least nine characters";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneNumber){
        return "Password needs to have at least one number";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter){
        return "Password needs to have at least one special character";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter){
        return "Password needs to have at least one uppercase letter";
    }
    if (error == ErrorCode::PasswordsDoNotMatch){
        return "Passwords do not match";
    }
}