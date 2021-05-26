#include <algorithm>
#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& error) {

    if (error == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    }
    if (error == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    }
    if (error == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    }
    return "Ok";
}

bool doPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword) {

    return (firstPassword == secondPassword);
}

ErrorCode checkPasswordRules(const std::string& password) {

    if(password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if(!std::any_of(password.cbegin(), password.cend(), [](unsigned char c){ return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if(!std::any_of(password.cbegin(), password.cend(), [](unsigned char c){ return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if(!std::any_of(password.cbegin(), password.cend(), [](unsigned char c){ return !std::isalnum(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword) {

    if (doPasswordsMatch(firstPassword, secondPassword)) {
        return checkPasswordRules(firstPassword);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
