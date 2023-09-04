#include "validation.hpp"
#include <string>

std::string getErrorMessage(ErrorCode val){
    if(val == ErrorCode::Ok){
        return "Ok";
    }else if(val == ErrorCode::PasswordNeedsAtLeastNineCharacters){
        return "Password needs to have at least nine characters";
    }else if(val == ErrorCode::PasswordNeedsAtLeastOneNumber){
        return "Password needs to have at least one number";
    }else if(val == ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter){
        return "Password needs to have at least one special character";
    }else if(val == ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter){
        return "Password needs to have at least one uppercase letter";
    }else if(val == ErrorCode::PasswordsDoNotMatch){
        return "Passwords do not match";
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2){
    if(pass1.compare(pass2) == 0){
        return true;
    }else{
        return false;
    }
}

ErrorCode checkPasswordRules(std::string pass){
    int random = rand() % 5;
    if(random == 2){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }else if(random == 3){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }else if(random == 4){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }else if(random == 5){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }else if(random == 0){
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string pass1, std::string pass2){
    bool passwordMatch = doPasswordsMatch(pass1, pass2);
    if(!passwordMatch){
        return ErrorCode::PasswordsDoNotMatch;
    }else{
        return checkPasswordRules(pass1);
    }
}