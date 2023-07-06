#include "validation.hpp"
// TODO: Put implementations here
#include <iostream>
#include <string>

std::string getErrorMessage(ErrorCode code) {
    if (code == ErrorCode::Ok) {
        return "Ok";
    } else if (code == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";        
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else if (code == ErrorCode::PasswordsDoNotMatch) {
        return "Password do not match";
    } else {
        return "Undifined error code";
    }
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
    return password == repeatedPassword;
}

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string password, std::string repeatedPassword);