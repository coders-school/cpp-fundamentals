#include "validation.hpp"
#include <cstdlib>
#include <ctime>
ErrorCode errorCode;

std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
    case ErrorCode::Ok:
        return "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        return "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        return "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        return "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        return "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        return "Passwords do not match";
        break;

    default:
        return "Passwords incorrect";
        break;
    }
}

bool doPasswordsMatch(std::string password, std::string passwordRepeated) {
    return password == passwordRepeated ? true : false;
}

ErrorCode checkPasswordRules(std::string password) {
    if (static_cast<int>(password.size()) < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string password, std::string passwordRepeated) {
    if (doPasswordsMatch(password, passwordRepeated)) {
        return checkPasswordRules(password);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}