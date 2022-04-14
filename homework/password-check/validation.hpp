#pragma once

#include <string>

enum class ErrorCode {
  Ok,
  PasswordNeedsAtLeastNineCharacters,
  PasswordNeedsAtLeastOneNumber,
  PasswordNeedsAtLeastOneSpecialCharacter,
  PasswordNeedsAtLeastOneUppercaseLetter,
  PasswordsDoNotMatch,
};

std::string toString(ErrorCode error_code);

std::string getErrorMessage(ErrorCode error_code);
