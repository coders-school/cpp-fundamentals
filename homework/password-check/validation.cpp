#include "validation.hpp"
#include<iostream>
#include<string>
#include<time.h>



std::string getErrorMessage(ErrorCode c)
{
 
   if (c==ErrorCode::Ok){

     return "Ok";
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

bool doPasswordsMatch(std::string pas1,std::string pas2)
{

return pas1==pas2;

}


ErrorCode checkPasswordRules(std::string pas)
{
std::string number="0123456789";
std::string b_letter="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
std::string special="~!@#$%^&*()_+:'|<>?/.,';`\"\\";



  if(pas.size()<9)
  {
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
  }
  
  size_t poz_a = pas.find_first_of(number);
  if(poz_a == std::string::npos)
  {
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
  }
  
  size_t poz_b = pas.find_first_of(special);
  if(poz_b == std::string::npos)
  {
   ErrorCode::PasswordNeedsAtLeastNineCharacters;
  }

  size_t poz_c=pas.find_first_of(b_letter);
  if(poz_c == std::string::npos)
  {
  return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
  }

  return ErrorCode::Ok;

}


ErrorCode checkPassword(std::string pas_1,std::string pas_2)
{

  if(doPasswordsMatch(pas_1,pas_2))
  {

   return checkPasswordRules(pas_1);

  }
  else
  {

    return ErrorCode::PasswordsDoNotMatch;

  } 
}