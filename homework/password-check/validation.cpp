#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <string>

std::string getErrorMessage(ErrorCode errorCode) { return ""; }

bool doPasswordsMatch(std::string password, std::string passwordConfirm) {
  return false;
}

ErrorCode checkPasswordRules(std::string password) {
  if (password.length() < 9) {
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
  }
  if (!std::any_of(password.begin(), password.end(), isdigit)) {
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
  }
  if (!std::any_of(password.begin(), password.end(), ispunct)) {
    return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
  }
  if (!std::any_of(password.begin(), password.end(), isupper)) {
    return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
  }
  return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string &password,
                        const std::string &passwordConfirm) {
  if (doPasswordsMatch(password, passwordConfirm)) {
    checkPasswordRules(password);
  }
  return ErrorCode::PasswordsDoNotMatch;
}
