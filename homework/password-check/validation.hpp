#pragma once

#include <string>

constexpr size_t kPasswordMinLength = 9;

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

bool doPasswordsMatch(const std::string &password1,
                      const std::string &password2);

ErrorCode checkPasswordRules(const std::string &password);

ErrorCode checkPassword(const std::string &password1,
                        const std::string &password2);
