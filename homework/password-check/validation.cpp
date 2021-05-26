#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {

    if (error == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    }
    if (error == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    }
    return "Ok";
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword) {
    return ErrorCode::Ok;
}