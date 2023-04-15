#include "validation.hpp"

#include <algorithm>
#include <cctype>
// TODO: Put implementations here
std::string getErrorMessage(const ErrorCode& code) {
    switch (code) {
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
        break;
    }
}
bool doPasswordsMatch(const std::string& inDataBase, const std::string& given) {
    return inDataBase == given ? true : false;
}
ErrorCode checkPassword(const std::string& inDataBase, const std::string& given) {
    if (!doPasswordsMatch(inDataBase, given)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(given);
    }
}
ErrorCode checkPasswordRules(const std::string& given) {
    if (given.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(given.begin(), given.end(), [](char c) { return std::isdigit(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(given.begin(), given.end(), [](char c) { return std::ispunct(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (std::none_of(given.begin(), given.end(), [](char c) { return std::isupper(c); })) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}