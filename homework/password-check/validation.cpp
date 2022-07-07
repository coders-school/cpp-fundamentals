#include "validation.hpp"
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

std::string getErrorMessage(int error){
    switch(error){
        case 0:
            return "Ok";
            break;
        case 1:
            return "Password needs to have at least nine characters";
            break;
        case 2:
            return "Password needs to have at least one number";
            break;
        case 3:
            return "Password needs to have at least one special character";
            break;
        case 4:
            return "Password needs to have at least one uppercase letter";
            break;
        case 5:
            return "Passwords do not match";
            break;
    }
}

bool doPasswordMatch(std::string passOne, std::string passTwo){
    return passOne == passTwo; 
}

int checkPasswordRules(std::string checkPass){
    if(checkPass.size() < 9){
        return static_cast<int>(ErrorCode::PasswordNeedsAtLeastNineCharacters);
    } else if(std::none_of(checkPass.begin(),checkPass.end(), ::isalnum)){
        return static_cast<int>(ErrorCode::PasswordNeedsAtLeastOneNumber);
    } else if(std::none_of(checkPass.begin(),checkPass.end(), ::ispunct)){
        return static_cast<int>(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
    } else if(std::none_of(checkPass.begin(),checkPass.end(), ::isupper)){
        return static_cast<int>(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
    } else {
        return static_cast<int>(ErrorCode::Ok);
    }
}

int checkPassword(std::string passwordOne, std::string passwordTwo){
    if (doPasswordMatch(passwordOne, passwordTwo)){
        return checkPasswordRules(passwordOne);
    } else {
        return static_cast<int>(ErrorCode::PasswordsDoNotMatch);
    }
}


