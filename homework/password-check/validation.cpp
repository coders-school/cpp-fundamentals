#include "validation.hpp"

std::map<ErrorCode, std::string> errorsNames = {
    {ErrorCode::Ok, "Ok"},
    {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}};

std::string getErrorMessage(ErrorCode error) {
    return errorsNames[error];
}

bool doPasswordsMatch(const std::string& first, const std::string& second) {
    if (first.compare(second)) {
        return false;
    }
    return true;
}

bool isAnyLetter(const std::string& password, int (&func)(int)) {
    bool result = std::any_of(begin(password), end(password), [&func](int letter) {
        return func(letter);
    });
    return result;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if (!isAnyLetter(password, isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if (!isAnyLetter(password, isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if (!isAnyLetter(password, ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& first, const std::string& second) {
    if (!doPasswordsMatch(first, second)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}
