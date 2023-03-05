#include "validation.hpp"
#include <cctype>
#include <algorithm>
#include <ranges>

auto getErrorMessage(ErrorCode code_to_convert) -> std::string {
    switch (code_to_convert) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastOneNumber: //ok
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: //ok
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: // ok
            return "Password need to have at least nine characters";
        case ErrorCode::PasswordsDoNotMatch: // ok
            return "Password do not match";
    }
}

auto doPasswordsMatch(std::string password_first, std::string password_second) -> bool {
    return password_first == password_second;
}

auto checkPasswordRules(std::string password) -> ErrorCode {
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } 
    if (std::count_if(password.begin(), password.end(), [](int x){ std::isupper(x);}) < 1) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (std::none_of(password.begin(), password.end(), [](int x){ std::isdigit(x);})) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (std::none_of(password.begin(), password.end(), [](int x) { std::ispunct(x);})) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

}

auto checkPassword(std::string password_first, std::string password_second) -> ErrorCode {
    if (doPasswordsMatch(password_first, password_second)) {
        return checkPasswordRules(password_first);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}