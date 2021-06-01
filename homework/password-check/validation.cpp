#include "validation.hpp"

std::string getErrorMessage(ErrorCode ErrCode) {
    switch (ErrCode) {
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
    }
}
bool doPasswordsMatch(std::string pass1, std::string pass2) {
    if (pass1.compare(pass2) == 0) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(std::string pass) {
    int characters{0};
    bool numbers{false};
    bool upperCase{false};
    int specialChar{false};
    for (auto& it : pass) {
        if (isnumber(it)) {
            characters++;
            numbers = true;
        } else if (isupper(it)) {
            characters++;
            upperCase = true;
        } else if (!isalpha(it) && !isnumber(it)) {
            characters++;
            specialChar = true;
        } else if (isalpha(it)) {
            characters++;
        }
    }
    if (characters < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (!numbers) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (!upperCase) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (!specialChar) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string pass1, std::string pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
