#include <random>
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
    
    std::random_device rd;
    std::uniform_int_distribution<int> uniform_dist(0, 5);

    return ErrorCode(uniform_dist(rd));
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword) {
    
    if (doPasswordsMatch(firstPassword, secondPassword)) {
        return checkPasswordRules(firstPassword);
    }
    else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
