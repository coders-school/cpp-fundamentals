#include "validation.hpp"
#include <string>
#include <random>

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
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(
        static_cast<int>(ErrorCode::Ok),
        static_cast<int>(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter)
    );
    ErrorCode result = static_cast<ErrorCode>(distrib(gen));

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
