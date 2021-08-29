// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#include <iostream>
#include <string>

enum class ErrorCode {
  Ok,
  PasswordNeedsAtLeastNineCharacters,
  PasswordNeedsAtLeastOneNumber,
  PasswordNeedsAtLeastOneSpecialCharacter,
  PasswordNeedsAtLeastOneUppercaseLetter,
  PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode err);
bool doPasswordsMatch(const std::string& pwd1,const std::string& pwd2 );
ErrorCode checkPasswordRules(const std::string& );
ErrorCode checkPassword(const std::string&, const std::string& );