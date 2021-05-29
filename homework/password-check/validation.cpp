#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch (code) {
        case ErrorCode::Ok : return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "PasswordNeedsAtLeastNineCharacters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber: return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "PasswordNeedsAtLeastOneUppercaseLetter";
        case ErrorCode::PasswordsDoNotMatch : return "PasswordsDoNotMatch";
    }
    return "Out of range";
}
bool doPasswordsMatch(std::string password1, std::string password2) {
    if (password1 == password2) {
        return true;
    }
    return false;
}
ErrorCode checkPasswordRules(std::string password) {
    int value = (int)ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    ErrorCode random = static_cast<ErrorCode>(rand()%value);
    switch(random) {
        case ErrorCode::Ok : return ErrorCode::Ok;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters: return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case ErrorCode::PasswordNeedsAtLeastOneNumber: return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
}
ErrorCode checkPassword(std::string password1, std::string password2) {
    if (doPasswordsMatch(password1, password2)) {
        return checkPasswordRules(password1);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
