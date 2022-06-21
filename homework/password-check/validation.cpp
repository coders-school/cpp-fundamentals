#include "validation.hpp"
#include <string>



std::string getErrorMessage(enum ErrorCode code) {
std::string output;
    switch( code ) {
        case ErrorCode::Ok:
            output = "Ok";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            output = "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            output = "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            output = "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            output = "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::PasswordsDoNotMatch:
            output = "Passwords do not match";
            break;
    }
    return output;
}

bool doPasswordsMatch(std::string password1, std::string password2) {
    if (password1 == password2) {
        return true;
    } else {
        return false;
    }
}

enum ErrorCode checkPassword(std::string password1, std::string password2) {
    if (doPasswordsMatch(password1, password2)) {
        return checkPasswordRules(password1);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}

enum ErrorCode checkPasswordRules(std::string password) {
    ErrorCode output;
    do {
        output = ErrorCode(rand()%6); }
    while ( output == ErrorCode::PasswordsDoNotMatch );
    return output;
}
