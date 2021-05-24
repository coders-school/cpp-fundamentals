#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
    switch(error) {
    case ErrorCode::Ok : {
        return "Ok";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastNineCharacters : {
        return "Password needs to have at least nine characters";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneNumber : {
        return "Password needs to have at least one number";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : {
        return "Password needs to have at least one special character";
        break;
    }
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : {
        return "Password needs to have at least one uppercase letter";
        break;
    }
    case ErrorCode::PasswordsDoNotMatch : {
        return "Passwords do not match";
        break;
    }
    }
}

bool doPasswordsMatch(const std::string& password, const std::string& repeatedPassword){
    if(password == repeatedPassword){
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(const std::string& password) {
    if ( password.size() < 9 ) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if ( std::none_of(begin(password), end(password), [](auto& el))){ return isdigit(el); } {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if(std::any_of(begin(password), end(password), [](auto& el))){return !ispunct(el);} {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if(std::none_of(begin(password), end(password), [](auto& el))){return isupper(el);} {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return ErrorCode::Ok;
}