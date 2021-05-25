#include "validation.hpp"
#include<iostream>
#include<string>
#include<time.h>



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

bool doPasswordsMatch(std::string pas1,std::string pas2)
{

return pas1==pas2;

}

ErrorCode checkPasswordRules(std::string pas)
{
int number = 0;
srand(time(NULL));
number=rand()%5;

  if(number==0)
  {
    return ErrorCode::Ok;
  }
  if(number==1)
  {
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
  }
  if(number==2)
  {
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
  }
  if(number==3)
  {
   return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
  }
  if(number==4)
  {
  return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
  }

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