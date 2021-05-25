#include "validation.hpp"
#include<iostream>
#include<string>




std::string getErrorMessage(ErrorCode c)
{
  
   
   if (c==ErrorCode::Ok){

     return "OK";
   }
   if (c==ErrorCode::PasswordNeedsAtLeastNineCharacters){

     return "Password needs to have at least nine characters";
   }
   if (c==ErrorCode::PasswordNeedsAtLeastOneNumber){

     return "Password needs to have at least one number";
   }
   if (c==ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter){

     return "Password needs to have at least one special character";
   }
   if (c==ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter){

     return "Password needs to have at least one uppercase letter";
   }
   if (c==ErrorCode::PasswordsDoNotMatch){

     return "Passwords do not match";
   }

}

