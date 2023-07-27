#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(const ErrorCode& code) {
    std::string result {"Unknown error"};
    if (code == ErrorCode::Ok) {
        return result = "Ok";
    } else if (code == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return result = "Password needs to have at least nine characters";
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return result = "Password needs to have at least one number";
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return result = "Password needs to have at least one special character";
    } else if (code == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return result = "Password needs to have at least one uppercase letter";
    } else if (code == ErrorCode::PasswordsDoNotMatch) {
        return result = "Passwords do not match";
    }
    return result;
};

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword) {
    if (password == repeatedPassword) {
        return true;
    }
    return false;
};

ErrorCode checkPasswordRules(const std::string& password) {
    srand(time(0));
    ErrorCode randomCode = static_cast<ErrorCode>(rand() % 4);
    return randomCode;
};

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword) {
    if (password != repeatedPassword) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(password);
};
