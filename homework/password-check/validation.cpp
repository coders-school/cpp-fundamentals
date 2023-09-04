#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <string>

std::string getErrorMessage(ErrorCode val) {
    if (val == ErrorCode::Ok) {
        return "Ok";
    } else if (val == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    } else if (val == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (val == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (val == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else if (val == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
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
    if (pass.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!std::any_of(pass.begin(), pass.end(), isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!std::any_of(pass.begin(), pass.end(), ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!std::any_of(pass.begin(), pass.end(), isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string pass1, std::string pass2) {
    bool passwordMatch = doPasswordsMatch(pass1, pass2);
    if (!passwordMatch) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(pass1);
    }
}