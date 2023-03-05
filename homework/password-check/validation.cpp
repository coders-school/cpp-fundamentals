#include "validation.hpp"

auto getErrorMessage(ErrorCode code_to_convert) -> std::string {
    switch (code_to_convert) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Password do not match";
    }
}

auto doPasswordsMatch(std::string password_first, std::string password_second) -> bool {
    return password_first == password_second;
}

auto checkPasswordRules(std::string password) -> ErrorCode {

}

auto checkPassword(std::string password_first, std::string password_second) -> ErrorCode {
    if (doPasswordsMatch(password_first, password_second)) {
        return checkPasswordRules(password_first);
    } else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}