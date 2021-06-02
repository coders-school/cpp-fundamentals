#include <iostream>
#include <string>
#include <ctype.h>
#include <algorithm>
#include "validation.hpp"


std::string getErrorMessage(ErrorCode err){
   switch (err){
   case ErrorCode::Ok:{
       return "Ok";
   }break;
   case ErrorCode::PasswordNeedsAtLeastNineCharacters:{
       return "Password needs to have at least nine characters";
   }break;
   case ErrorCode::PasswordNeedsAtLeastOneNumber:{
       return "Password needs to have at least one number";
   }break;
   case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:{
       return "Password needs to have at least one special character";
   }break;
   case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:{
       return "Password needs to have at least one uppercase letter";
   }break;
   case ErrorCode::PasswordsDoNotMatch:{
       return "Passwords do not match";
   }
    default:{
        return "other errors";
    }
       break;
   }
}

bool doPasswordsMatch(std::string pass1, std::string pass2){
    if(pass1 == pass2){
        return true;
    }else{
        return false;
    }
}

ErrorCode checkPasswordRules(std::string password){
    if(password.length() < 9){
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    if(std::none_of(password.begin(), password.end(),::isdigit)){
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    if(std::none_of(password.begin(), password.end(),::iswpunct)){
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    if(std::none_of(password.begin(), password.end(),::isupper)){
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    if(password == ""){
        return ErrorCode::PasswordsDoNotMatch;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string pass1, std::string pass2){
    if (doPasswordsMatch(pass1, pass2)){
        return checkPasswordRules(pass1);
    }
    return ErrorCode::PasswordsDoNotMatch;
}
