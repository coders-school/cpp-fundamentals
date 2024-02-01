#include "validation.hpp"
#include <algorithm>
#include <regex>
#include <cctype>

bool doPasswordsMatch(std::string password, std::string repeatedPassword)
{
    return (password == repeatedPassword) ? true : false;;
}

ErrorCode checkPasswordRules(std::string password)
{
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(password.begin(), password.end(), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    /* special characters: !@#$%^&*(){}:;<>.,? */
    if (std::none_of(password.begin(), password.end(), [](unsigned char c){
        if ((c >= 0x21) && (c <= 0x2F) || (c >= 0x3A) && (c <= 0x40)) {
            return true;
        }
        return false;
    })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(password.begin(), password.end(), [](unsigned char c){
        return std::isupper(c);
    })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string repeatedPassword)
{
    ErrorCode errCode = checkPasswordRules(password);

    if (!doPasswordsMatch(password, repeatedPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return errCode;
}

std::string getErrorMessage(ErrorCode errorCode)
{
    switch (errorCode) {
        case ErrorCode::Ok:
            return std::string{"Ok"};
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return std::string{"Password needs to have at least nine characters"};
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return std::string{"Password needs to have at least one number"};
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return std::string{"Password needs to have at least one special character"};
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return std::string{"Password needs to have at least one uppercase letter"};
        case ErrorCode::PasswordsDoNotMatch:
            return std::string{"Passwords do not match"};
        default:
            break;
    }
    return std::string{};
}