#include "validation.hpp"
#include <string>
#include <cctype>

std::string getErrorMessage(ErrorCode error) {
    std::string result;
    if (error == ErrorCode::Ok) {
        result = "Ok";
    } else if (error == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        result = "Password needs to have at least nine characters";
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        result = "Password needs to have at least one number";
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        result = "Password needs to have at least one special character";
    } else if (error == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        result = "Password needs to have at least one uppercase letter";
    } else if (error == ErrorCode::PasswordsDoNotMatch) {
        result = "Passwords do not match";
    }

    return result;
}

bool doPasswordsMatch(const std::string & password1,
                      const std::string & password2) {
    return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string & password) {
    ErrorCode result;

    bool properLength = password.size() >= 9 ? true : false;

    bool hasNumbers = false;
    bool hasSpecialChars = false;
    bool hasUppercase = false;
    for (size_t i = 0; i < password.size(); i++) {
        if (std::isdigit(password[i])) {
            hasNumbers = true;
        } else if (std::ispunct(password[i])) {
            hasSpecialChars = true;
        } else if (std::isupper(password[i])) {
            hasUppercase = true;
        }
    }

    if (! properLength) {
        result = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    } else if (! hasNumbers) {
        result = ErrorCode::PasswordNeedsAtLeastOneNumber;
    } else if (! hasSpecialChars) {
        result = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    } else if (! hasUppercase) {
        result = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    } else {
        result = ErrorCode::Ok;
    }

    return result;
}

ErrorCode checkPassword(const std::string & password1,
                        const std::string & password2) {
    ErrorCode result;
    if (doPasswordsMatch(password1, password2)) {
        result = checkPasswordRules(password1);
    } else {
        result = ErrorCode::PasswordsDoNotMatch;
    }

    return result;
}
