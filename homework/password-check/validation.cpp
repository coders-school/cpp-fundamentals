#include "validation.hpp"
#include <algorithm>
#include <iostream>
#include <vector>

std::string getErrorMessage(enum ErrorCode error) {
    std::string error_message;
    switch (error) {
    case ErrorCode::Ok:
        error_message = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        error_message = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        error_message = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        error_message = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        error_message = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        error_message = "Passwords do not match";
        break;
    default:
        error_message = "xxx";  // TODO: worth to handle
        break;
    }
    return error_message;
}

bool doPasswordsMatch(const std::string& pass1, const std::string pass2) {
    if (pass1.compare(pass2) == 0) {
        return true;
    }
    return false;
}

// Unary Predicate
struct compare {
    int key;
    compare(int const& i)
        : key(i) {}

    bool operator()(int const& i) {
        return (i == key);
    }
};

bool has_special_letter(const std::string& s) {
    bool result = false;
    std::string not_special{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890"};
    for (const char c : s) {
        if (std::none_of(not_special.begin(), not_special.end(), compare(c))) {
            result = true;
            break;
        }
    }
    return result;
}

enum ErrorCode checkPasswordRules(const std::string& pass) {
    ErrorCode err = ErrorCode::Ok;

    auto has_at_least_nine_char = [](const std::string& s) {
        return s.size() >= 9;
    };

    if (not has_at_least_nine_char(pass)) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    auto count_numbers = [](const std::string& s) {
        return std::count_if(s.begin(), s.end(),
                             [](unsigned char c) { return std::isdigit(c); });
    };

    if (count_numbers(pass) == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    if (not has_special_letter(pass)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    auto count_uppercase = [](const std::string& s) {
        return std::count_if(s.begin(), s.end(),
                             [](unsigned char c) { return std::isupper(c); });
    };

    if (count_uppercase(pass) == 0) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

enum ErrorCode checkPassword(const std::string& pass1, const std::string pass2) {
    if (not doPasswordsMatch(pass1, pass2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return ErrorCode::Ok;
}
