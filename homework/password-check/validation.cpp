#include "validation.hpp"
#include <stdlib.h>
#include <time.h>

std::string getErrorMessage(ErrorCode error) {
     switch (error) {
     case ErrorCode::Ok : return "Ok";
     case ErrorCode::PasswordNeedsAtLeastNineCharacters : return "Password needs to have at least nine characters";
     case ErrorCode::PasswordNeedsAtLeastOneNumber : return "Password needs to have at least one number";
     case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : return "Password needs to have at least one special character";
     case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : return "Password needs to have at least one uppercase letter";
     case ErrorCode::PasswordsDoNotMatch : return "Passwords do not match";
     default : return "Invalid error code";
     }
 }
 
bool checkPasswordRules(std::string str1, std::string str2){

        if(str1!=str2){
           return false;
        }

      return true;
 }
 
ErrorCode checkPasswordRules(std::string){
    
     srand(time(NULL));
     int rand_number = rand()%5;
    
     return static_cast<ErrorCode>(rand_number);
} 


