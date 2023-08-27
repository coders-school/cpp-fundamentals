#include "validation.hpp"
#include <string>
// TODO: Put implementations here
std::string getErrorMessage(ErrorCode& err) {
    if (err == ErrorCode::Ok) {
        return "Ok";
    } else if (err == ErrorCode::PasswordNeedsAtLeastNineCharacters) {
        return "Password needs to have at least nine characters";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneNumber) {
        return "Password needs to have at least one number";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter) {
        return "Password needs to have at least one special character";
    } else if (err == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter) {
        return "Password needs to have at least one uppercase letter";
    } else if (err == ErrorCode::PasswordsDoNotMatch) {
        return "Passwords do not match";
    }
}
bool doPasswordMatch(std::string psw1, std::string psw2) {
    return (psw1 == psw2);
}
ErrorCode checkPasswordRules(std::string psw){
    int count = static_cast<int>(ErrorCode::PasswordsDoNotMatch);
    return static_cast<ErrorCode>(rand()%count);
}

ErrorCode checkPassword(std::string psw1, std::string psw2){
    if (doPasswordMatch(psw1, psw2)){
        return checkPasswordRules(psw1);
    }else{
        return ErrorCode::PasswordsDoNotMatch;
    }
}