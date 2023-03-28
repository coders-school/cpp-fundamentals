
#include <iostream>
#include "validation.hpp"
#include <string>
#include <cstdlib>
#include <ctime>



std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
    }
    return "";
}

bool doPasswordsMatch(const std::string& password1, const std::string& password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string& password) {
    std::srand(std::time(nullptr));
    int rule = std::rand() % 5;
    switch (rule) {
        case 0:
            if (password.size() < 9) {
                return ErrorCode::PasswordNeedsAtLeastNineCharacters;
            }
            break;
        case 1:
            for (char c : password) {
                if (std::isdigit(c)) {
                    return ErrorCode::Ok;
                }
            }
            return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 2:
            for (char c : password) {
                if (std::ispunct(c)) {
                    return ErrorCode::Ok;
                }
            }
            return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 3:
            for (char c : password) {
                if (std::isupper(c)) {
                    return ErrorCode::Ok;
                }
            }
            return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
        case 4:
            return ErrorCode::Ok;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password1, const std::string& password2) {
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password1);
}



