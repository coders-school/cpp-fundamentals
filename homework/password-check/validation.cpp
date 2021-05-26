#include "validation.hpp"
// TODO: Put implementations here
#include <cctype>
#include <algorithm>

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    if (firstPassword == secondPassword) {
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (std::none_of(std::begin(password), std::end(password), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::all_of(std::begin(password), std::end(password), ::isalnum)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if (std::none_of(std::begin(password), std::end(password), ::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}