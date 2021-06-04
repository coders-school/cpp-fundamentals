#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode errorCode) {
    std::string result;
    switch(errorCode) {
        case ErrorCode::PasswordsDoNotMatch: result = "Passwords do not match";
            break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: result = "Password needs to have at least nine characters";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneNumber: result = "Password needs to have at least one number";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: result = "Password needs to have at least one special character";
            break;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: result = "Password needs to have at least one uppercase letter";
            break;
        case ErrorCode::Ok:  result = "Ok";
            break;
    }
    return result;
}

bool doPasswordsMatch(const std::string &first, const std::string &second) {
    return first == second;
}

ErrorCode checkPasswordRules(const std::string &password) {
    if (password.length()<9)
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    auto leastOnNumber = false;
    auto leastOneSpecialCharacter = false;
    auto leastOneUppercaseLetter = false;
    for(auto it = std::begin(password); it<std::end(password); it++) {
        if (isdigit(*it)) leastOnNumber = true;
        if (!isalnum(*it)) leastOneSpecialCharacter = true;
        if (std::isupper(*it)) leastOneUppercaseLetter = true;
    }
    if (!leastOnNumber)
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if (!leastOneSpecialCharacter)
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if (!leastOneUppercaseLetter)
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string &, const std::string &) {
    return ErrorCode::PasswordsDoNotMatch;
}
