#include "validation.hpp"

std::string getErrorMessage(enum ErrorCode codeToPrint){
  switch(codeToPrint){
    case Ok:
      return "Ok";
    case PasswordNeedsAtLeastNineCharacters:
      return "Password needs to have at least nine characters";
    case PasswordNeedsAtLeastOneNumber:
      return "Password needs to have at least one number";
    case PasswordNeedsAtLeastOneSpecialCharacter:
      return "Password needs to have at least one special character";
    case PasswordNeedsAtLeastOneUppercaseLetter:
      return "Password needs to have at least one uppercase letter";
    case PasswordsDoNotMatch:
      return "Passwords do not match";
    default:
      return "Undefined error";
  }
}

bool doPasswordsMatch(std::string originalPassword, std::string repeatedPassword){
  int compare_value{
            std::string{originalPassword}.compare(std::string{repeatedPassword})
  };
  if (compare_value == 0)
    return true;
  else
    return false;
}

enum ErrorCode checkPasswordRules(std::string userPassword){
  if(!checkCharacterCount(userPassword)){
    return PasswordNeedsAtLeastNineCharacters;
  }
  if(!checkForNumbers(userPassword)){
    return PasswordNeedsAtLeastOneNumber;
  }
  if(!checkForSpecialCharacters(userPassword)){
    return PasswordNeedsAtLeastOneSpecialCharacter;
  }
  if(!checkForUppercase(userPassword)){
    return PasswordNeedsAtLeastOneUppercaseLetter;
  }
  return Ok;
}

enum ErrorCode checkPassword(std::string originalPassword, std::string repeatedPassword){
  if(doPasswordsMatch(originalPassword, repeatedPassword) == false)
    return PasswordsDoNotMatch;
  else
    return checkPasswordRules(originalPassword);
}

//poprzedni wygląd checkPassword()
/*
int diceRollValue = rand() % 5;
enum ErrorCode diceRollResult = static_cast<ErrorCode>(diceRollValue);
return diceRollResult;
*/

//nowe, dla ambitnych - wrzucić w checkPassword
//po co wywołuję 1-linijkową func której potrzebuję tylko w innej funkcji
bool checkCharacterCount(std::string userPassword){
  return (userPassword.size() >= 9);
}

bool checkForNumbers(std::string userPassword){
    return (std::any_of(userPassword.begin(), userPassword.end(), ::isdigit));
}

bool checkForSpecialCharacters(std::string userPassword){
    return (std::any_of(userPassword.begin(), userPassword.end(), ::ispunct));
}

bool checkForUppercase(std::string userPassword){
    return (std::any_of(userPassword.begin(), userPassword.end(), ::isupper));
}