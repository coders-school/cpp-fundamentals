#include "validation.hpp"
#include <cctype>

std::string getErrorMessage(const ErrorCode& code) {
    int num = static_cast<int>(code);
    switch (num) {
    case 0:
        return "Ok";
        break;
    case 1:
        return "Password needs to have at least nine characters";
        break;
    case 2:
        return "Password needs to have at least one number";
        break;
    case 3:
        return "Password needs to have at least one special character";
        break;
    case 4:
        return "Password needs to have at least one uppercase letter";
        break;
    case 5:
        return "Passwords do not match";
        break;
    }
}

bool doPasswordsMatch(const std::string& pas1, const std::string& pas2) {
    if (pas1 == pas2) {
        return true;
    } else {
        return false;
    }
}

ErrorCode checkPasswordRules(const std::string& pas) {
    bool isDigit = false;
    bool isSpecial = false;
    bool isUpper = false;

    for (auto tmp : pas) {
        if (std::isdigit(tmp))
            isDigit = true;
        if (std::ispunct(tmp))
            isSpecial = true;
        if (std::isupper(tmp))
            isUpper = true;
    }

    if (pas.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (!isDigit) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (!isSpecial) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (!isUpper) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(const std::string& pas1, const std::string& pas2) {
    if (!doPasswordsMatch(pas1, pas2)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(pas1);
}