#pragma once
#include <string>
#include <algorithm>

enum ErrorCode {
  Ok = 0,
  PasswordNeedsAtLeastNineCharacters = 1,
  PasswordNeedsAtLeastOneNumber = 2,
  PasswordNeedsAtLeastOneSpecialCharacter = 3,
  PasswordNeedsAtLeastOneUppercaseLetter = 4,
  PasswordsDoNotMatch = 5
};

//basic
std::string getErrorMessage(enum ErrorCode);

bool doPasswordsMatch(std::string, std::string);

enum ErrorCode checkPasswordRules(std::string);

enum ErrorCode checkPassword(std::string, std::string);

//new, additional task
bool checkCharacterCount(std::string);

bool checkForNumbers(std::string);

bool checkForSpecialCharacters(std::string);

bool checkForUppercase(std::string);