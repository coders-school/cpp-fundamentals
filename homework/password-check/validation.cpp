#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
        case ErrorCode::Ok : {
            return "Ok";
        }
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
        }
        default : {
            return "Out of range";
        }
    }
    return "Out of range";
}
bool doPasswordsMatch(std::string password1, std::string password2) {
    if (password1 == password2) {
        return true;
    }
    return false;
}
ErrorCode checkPasswordRules(std::string password) {
    int lower = 0, number = 0, special = 0;
    for (auto character : password) {
        if (std::isupper(character)) {
            ++lower;
        }
        if (std::isdigit(character)) {
            ++number;
        }
        if (std::ispunct(character)) {
            ++special;
        }
    }
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (lower == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (special == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (number == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password1, std::string password2) {
    if (doPasswordsMatch(password1, password2)) {
        return checkPasswordRules(password1);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
