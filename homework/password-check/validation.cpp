

#include "validation.hpp"
#include <regex>
#include <random>

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
        default:
            return "Unknown error code";
    }
}

bool doPasswordsMatch(const std::string& password1, const std::string& password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string& password) {
    std::regex digit_regex("[0-9]");
    std::regex special_char_regex("[!@#$%^&*()_+\\-={}\\[\\]|;:'\",<.>/?]");
    std::regex uppercase_regex("[A-Z]");
    
    if (password.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!std::regex_search(password, digit_regex)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!std::regex_search(password, special_char_regex)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!std::regex_search(password, uppercase_regex)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 3);
    int random_num = dis(gen);
    
    switch (random_num) {
        case 0:
            return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case 1:
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 2:
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 3:
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        default:
            return ErrorCode::Ok;
    }
}
