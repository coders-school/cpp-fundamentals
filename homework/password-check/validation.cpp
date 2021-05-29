#include "validation.hpp"

std::string getErrorMessage(ErrorCode code) {
    switch(code) {
        case ErrorCode::Ok : return "Ok"; break;
        case ErrorCode::PasswordNeedsAtLeastNineCharacters : return "PasswordNeedsAtLeastNineCharacters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber : return "PasswordNeedsAtLeastOneNumber";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : return "PasswordNeedsAtLeastOneSpecialCharacter";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : return "PasswordNeedsAtLeastOneUppercaseLetter";
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
std::string checkPasswordRules(std::string password) {
    switch (auto rnd = []{
                        return ErrorCode::Ok; 
                        return ErrorCode::PasswordNeedsAtLeastNineCharacters; 
                        return ErrorCode::PasswordNeedsAtLeastOneNumber;
                        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
                        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
                        }; rnd()) {
                            case ErrorCode::Ok : return "Ok";
                            case ErrorCode::PasswordNeedsAtLeastNineCharacters; return "PasswordNeedsAtLeastNineCharacters";
                            case ErrorCode::PasswordNeedsAtLeastOneNumber; return "PasswordNeedsAtLeastOneNumber";
                            case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter; return "PasswordNeedsAtLeastOneSpecialCharacter";
                            case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter; return "PasswordNeedsAtLeastOneUppercaseLetter";
                        }
    return "Out of range";
}
std::string checkPassword(std::string password1, std::string password2) {
    if (doPasswordsMatch(password1, password2)) {
        return checkPasswordRules(password1);
    }
    return getErrorMessage(ErrorCode::PasswordsDoNotMatch);
}
