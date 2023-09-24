#include "validation.hpp"

ErrorCode errorCode;

std::string getErrorMessage(ErrorCode result) {
    switch (result) {
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
    return "";
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
    return password == repeatedPassword ? true : false;
}

ErrorCode checkPasswordRules(std::string password) {
    if (oneNumber(password) != true)
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if (specialCharacter(password) != true)
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if (uppercaseLetter(password) != true)
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    if (nineCharacter(password) == true)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    if (okPassword(password) == true)
        return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
    bool compare = doPasswordsMatch(password, repeatedPassword);
    if (compare != true) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password);
    }
}

bool okPassword(std::string password) {
    return std::all_of(password.begin(), password.end(), ::isgraph);
}

bool nineCharacter(std::string password) {
    if (password.size() < 9) {
        return true;
    }
    return false;
}

bool oneNumber(std::string password) {
    return std::any_of(password.begin(), password.end(), ::isdigit);
}

bool specialCharacter(std::string password) {
    return std::any_of(password.begin(), password.end(), ::ispunct);
}

bool uppercaseLetter(std::string password) {
    return std::any_of(password.begin(), password.end(), ::isupper);
}
