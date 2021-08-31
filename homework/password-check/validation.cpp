#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode err) {
    switch (err) {
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
        return "Unknow error\n";       
    }
}

bool doPasswordsMatch(const std::string& pwd1, const std::string& pwd2) {
    if (pwd1.compare(pwd2) == 0) {
        return true;
    }
    return false;
}
ErrorCode checkPasswordRules(const std::string& pwd ) {
    auto resultRules = ErrorCode::Ok;

    if(pwd.length() < 9) {
        resultRules = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }

    bool IsUppercaseLetter = false;
    for(size_t i = 0; i < pwd.length()-1; ++i) {

        if(static_cast<int>(pwd[i]) > 64 && static_cast<int>(pwd[i])< 91) {
            IsUppercaseLetter = true;
            break;
        }
        if(isspace(pwd[i])) {
            resultRules = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        }
        if(isdigit(pwd[i])) {
            resultRules = ErrorCode::PasswordNeedsAtLeastOneNumber;
        }
    }
    if(!IsUppercaseLetter) { 
        resultRules = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    
    return resultRules;
}

ErrorCode checkPassword(const std::string& pwd1, const std::string& pwd2) {
    auto isEqual = doPasswordsMatch(pwd1, pwd2);
    if (!isEqual) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    auto resultRules = checkPasswordRules(pwd1);

    return resultRules;
}