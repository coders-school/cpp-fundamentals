#include "validation.hpp"
#include <algorithm>


std::string getErrorMessage(ErrorCode errorCode) {
    switch (errorCode) {
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
        return {};
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& passwordConfirm) {
    return (password == passwordConfirm);
}

template<class UnaryPredicate>
bool notSingleCharacterIn(const std::string& str, UnaryPredicate unaryPredicate) {
    return !std::any_of(str.begin(), str.end(), unaryPredicate);
}

ErrorCode checkPasswordRules(const std::string& password) {
    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    const auto isDigit = [](unsigned char character) { return std::isdigit(character); };
    if (notSingleCharacterIn(password, isDigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    const auto isSpecialCharacter = [&](unsigned char character) { return !(isDigit(character) || std::isalpha(character)); };
    if (notSingleCharacterIn(password, isSpecialCharacter)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    const auto isUppercase = [](unsigned char character) { return std::isupper(character); };
    if (notSingleCharacterIn(password, isUppercase)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& passwordConfirm) {
    if (doPasswordsMatch(password, passwordConfirm)) {
        return checkPasswordRules(password);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
