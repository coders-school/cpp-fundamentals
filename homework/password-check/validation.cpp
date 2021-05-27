#include "validation.hpp"
#include <string>

std::string getErrorMessage(ErrorCode errorCode) {

    switch(errorCode) {

        case ErrorCode::Ok:
            return "Ok";

        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";

        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";

        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";

        default:
            return "Unknown error code";
    }
}

bool doPasswordsMatch(std::string password, std::string passwordConfirm) {
    return false;
}

ErrorCode checkPasswordRules(std::string password) {  // TODO: reserved by Pawel100
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string passwordConfirm) { // TODO: reserved by Pawel100
    return ErrorCode::Ok;
}
