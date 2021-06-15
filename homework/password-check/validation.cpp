#include "validation.hpp"

std::string getErrorMessage(ErrorCode er){
    switch(er){
        case Ok: return "Ok"; break;
        case PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters"; break;
        case PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number"; break;
        case PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character"; break;
        case PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter"; break;
        case PasswordsDoNotMatch: return "Passwords do not match"; break;
    }
    return "";
}

bool doPasswordsMatch(std::string psw1, std::string psw2){
    if(psw1 == psw2){
        return true;
    }
    return false;
}

ErrorCode checkPasswordRules(std::string password){
    srand(time(NULL));
    if(password.length() < 9){
        return PasswordNeedsAtLeastNineCharacters;
    }
    bool check = false;
    for(int i=0;i<password.length();i++){
        if(isdigit(password[i])){
            check = true;
        }
    }
    if(!check){
        return PasswordNeedsAtLeastOneNumber;
    }
    check = false;
    for(int i=0;i<password.length();i++){
        if(password[i] == '!' || password[i] == '@' || password[i] == '#' || password[i] == '$' || password[i] == '%' || password[i] == '^' || password[i] == '&' || password[i] == '*'){
            check = true;
        }
    }
    if(!check){
        return PasswordNeedsAtLeastOneSpecialCharacter;
    }
    check = false;
    for(int i=0;i<password.length();i++){
        if(isupper(password[i])){
            check = true;
        }
    }
    if(!check){
        return PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return Ok;
}

ErrorCode checkPassword(std::string psw1, std::string psw2){
    if(doPasswordsMatch(psw1, psw2)){
        return checkPasswordRules(psw2);
    }
    return PasswordsDoNotMatch;
}