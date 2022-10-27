#include "validation.hpp"
#include <algorithm>
#include <cctype>

std::string getErrorMessage(ErrorCode Code) {
    int error = static_cast<int>(Code);
    std::string description = {};

    switch (error) {
    case 0: {
        description = "Ok";
        break;
    }
    case 1: {
        description = "Password needs to have at least nine characters";
        break;
    }
    case 2: {
        description = "Password needs to have at least one number";
        break;
    }
    case 3: {
        description = "Password needs to have at least one special character";
        break;
    }
    case 4: {
        description = "Password needs to have at least one uppercase letter";
        break;
    }
    case 5: {
        description = "Passwords do not match";
        break;
    }
    default: {
        description = "Unknown Error";
    }
    }

    return description;
}

bool doPasswordsMatch(std::string str1, std::string str2) {
    return str1 == str2 ? true : false;
}

ErrorCode checkPasswordRules(std::string str) {
    ErrorCode error = ErrorCode::Undefinied;
    bool flag = true;

    if (str.size() < 9) {
        return error = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    auto check_number = [](auto n) { return isdigit(n); };
    flag = any_of(str.begin(), str.end(), check_number);

    if (!flag) {
        return error = ErrorCode::PasswordNeedsAtLeastOneNumber;
    }

    auto check_special = [](auto n) { return ispunct(n); };
    flag = any_of(str.begin(), str.end(), check_special);

    if (!flag) {
        return error = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }

    auto check_upper = [](auto n) { return isupper(n); };
    flag = any_of(str.begin(), str.end(), check_upper);

    if (!flag) {
        return error = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return error = ErrorCode::Ok;
}

ErrorCode checkPassword(std::string str1, std::string str2) {
    ErrorCode error = ErrorCode::Undefinied;

    if (!doPasswordsMatch(str1, str2)) {
        error = ErrorCode::PasswordsDoNotMatch;
    } else {
        error = checkPasswordRules(str1);
    }

    return error;
}
