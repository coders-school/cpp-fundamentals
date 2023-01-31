#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode error) {
    std::string msg;
    switch (error) {
    case ErrorCode::Ok:
        msg = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        msg = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        msg = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        msg = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        msg = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        msg = "Passwords do not match";
        break;
    }
    return msg;
}
bool doPasswordsMatch(std::string pass1, std::string pass2) {
    if (pass1.compare(pass2) == 0) {
        return true;
    } else {
        return false;
    }
}
ErrorCode checkPasswordRules(std::string pass) {
    if (pass.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::any_of(pass.cbegin(), pass.cend(), [](char a){return (a > 47 && a < 58); }) == false) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::any_of(pass.cbegin(), pass.cend(), [](char a){return (a > 64 && a < 91); }) == false) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::all_of(pass.cbegin(), pass.cend(), [](char a){return ((a > 47 && a < 58) || (a > 64 && a < 91)) || (a > 96 && a < 123); }) == true) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else {
        return ErrorCode::Ok;
    }
}
ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
    if (doPasswordsMatch(password, repeatedPassword)) {
        return checkPasswordRules(password);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}