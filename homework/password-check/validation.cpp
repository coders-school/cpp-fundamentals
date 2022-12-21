#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode ec) {
    std::string msg = "Unknown error code";

    switch (ec) {
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

    default:
        break;
    }

    return msg;
}

bool doPasswordsMatch(const std::string& first_pass, const std::string& second_pass) {
    if (first_pass == second_pass) {
        return true;
    }

    return false;
}

ErrorCode checkPasswordRules(const std::string& pass) {
    if (pass.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (std::none_of(pass.begin(), pass.end(), ::isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (std::none_of(pass.begin(), pass.end(), ::isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else if (std::none_of(pass.begin(), pass.end(),  ::ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& first_pass, const std::string& second_pass) {
    if (doPasswordsMatch(first_pass, second_pass)) {
        return checkPasswordRules(first_pass);
    }

    return ErrorCode::PasswordsDoNotMatch;
}
