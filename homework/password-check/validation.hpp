// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
//
#include <string>

enum ErrorCode  {
  Ok,
  PasswordNeedsAtLeastNineCharacters,
  PasswordNeedsAtLeastOneNumber,
  PasswordNeedsAtLeastOneSpecialCharacter,
  PasswordNeedsAtLeastOneUppercaseLetter,
  PasswordsDoNotMatch
};

std::string getErrorMessage(enum ErrorCode);
bool doPasswordsMatch(std::string, std::string);
enum ErrorCode checkPasswordRules(std::string);
enum ErrorCode checkPassword(std::string, std::string);


