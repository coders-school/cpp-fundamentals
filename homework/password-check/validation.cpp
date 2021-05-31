#include <algorithm>
#include "validation.hpp"

std::string getErrorMessage(const ErrorCode& err_code) {

    switch (err_code) {
        case ErrorCode::Ok:
            return std::string("Ok");
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return std::string("Password needs to have at least nine characters");
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return std::string("Password needs to have at least one number");
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return std::string("Password needs to have at least one special character");
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return std::string("Password needs to have at least one uppercase letter");
        case ErrorCode::PasswordsDoNotMatch:
            return std::string("Passwords do not match");
        default:
            return std::string("");
    }
}

bool doPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword) {
    
    return (!firstPassword.compare(secondPassword)) ? true : false;
}

ErrorCode checkPasswordRules(const std::string& password) {

    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    if (std::none_of(password.begin(), password.end(),
            [](const char x) {return std::isdigit(x);})
            ) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    const std::string set_of_valid_char = {"!@#$%^&*()_-<>;:[]{}"};
    
    if (password.find_first_of(set_of_valid_char) == std::string::npos) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    if (!std::any_of(password.begin(), password.end(),
            [](const char x) {return (x >= 'A' && x <= 'Z') ? true : false;})
            ) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword) {
    
    if (doPasswordsMatch(firstPassword, secondPassword)) {
        return checkPasswordRules(firstPassword);
    }
    else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
