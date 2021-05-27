
#include <cctype>
#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
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
    }
}

bool doPasswordsMatch(std::string Password1, std::string Password2) {
    return Password1 == Password2;
}

ErrorCode checkPasswordRules(std::string Password) {
    if (Password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool whetherItContainsNumber = false;
    bool whetherItContainsSpecialCharacter = false;
    bool whetherItContainsUppercaseLetter = false;
    
    for (auto i : Password) {
        if (isdigit(i)) {
            whetherItContainsNumber = true;
        }
        if (isspace(i)) {
            whetherItContainsSpecialCharacter = true;
        }
        if (islower(i)) {
            whetherItContainsUppercaseLetter = true;
        }
    }
    if (!whetherItContainsNumber) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (!whetherItContainsSpecialCharacter) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (!whetherItContainsUppercaseLetter) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string Password1, std::string Password2) {
    if (!doPasswordsMatch(Password1, Password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return ErrorCode::Ok;
}
