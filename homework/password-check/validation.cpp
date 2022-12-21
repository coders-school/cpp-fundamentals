#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode codeErr) {
    std::string errMessage;

    switch (codeErr) {
    case ErrorCode::Ok:
        errMessage = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        errMessage = "Password needs to have at least nine characters";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        errMessage = "Password needs to have at least one number";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        errMessage = "Password needs to have at least one special character";
        break;

    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        errMessage = "Password needs to have at least one uppercase letter";
        break;

    case ErrorCode::PasswordsDoNotMatch:
        errMessage = "Passwords do not match";
        break;

    default:
        break;
    }

    return errMessage;
}

bool doPasswordsMatch(std::string password, std::string givenPassword) {
    if (givenPassword == password)
        return true;

    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    ErrorCode randomCode = ErrorCode::Ok;

    if (password.size() < 9)
        randomCode = ErrorCode::PasswordNeedsAtLeastNineCharacters;

    if (!std::any_of(password.begin(), password.end(), [](int i) { return std::isdigit(i); }))
        randomCode = ErrorCode::PasswordNeedsAtLeastOneNumber;

    if (!std::any_of(password.begin(), password.end(), [](char i) { return std::ispunct(i); }))
        randomCode = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

    if (!std::any_of(password.begin(), password.end(), [](int i) { return std::isupper(i); }))
        randomCode = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

    return randomCode;
}

ErrorCode checkPassword(std::string password, std::string givenPassword) {
    if (!doPasswordsMatch(password, givenPassword))
        return ErrorCode::PasswordsDoNotMatch;

    return checkPasswordRules(givenPassword);
}