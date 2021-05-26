#include "validation.hpp"

#define MIN_PASS_LEN (int)9

std::string getErrorMessage(ErrorCode errorCode) {
    std::string returnString;

    switch (errorCode) {
    case ErrorCode::Ok:
        returnString = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        returnString = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        returnString = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        returnString = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        returnString = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        returnString = "Passwords do not match";
        break;
    }

    return returnString;
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    if (firstPassword == secondPassword) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(std::string passwordToCheck) {
    if (MIN_PASS_LEN > std::distance(passwordToCheck.cbegin(), passwordToCheck.cend())) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(passwordToCheck.cbegin(), passwordToCheck.cend(), [](unsigned char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (std::none_of(passwordToCheck.cbegin(), passwordToCheck.cend(), [](unsigned char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (std::none_of(passwordToCheck.cbegin(), passwordToCheck.cend(), [](unsigned char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword) {
    if (not doPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(firstPassword);
    }
}