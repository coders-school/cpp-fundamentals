#include "validation.hpp"
#include <algorithm>
#include <cctype>
#include <string>

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
    return checkPasswordRules(password);
  }
  return ErrorCode::PasswordsDoNotMatch;
}

std::string getErrorMessage(ErrorCode errorCode) {

  switch (errorCode) {

  case ErrorCode::Ok:
    return "Ok";

  case ErrorCode::PasswordNeedsAtLeastNineCharacters:
    return "Password needs to have at least nine characters";

  case ErrorCode::PasswordNeedsAtLeastOneNumber:
    return "Password needs to have at least one number";

  case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    return "Password needs to have at least one special character";

  case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
    return "Password needs to have at least one uppercase letter";

  case ErrorCode::PasswordsDoNotMatch:
    return "Passwords do not match";

  default:
    return "Unknown error code";
  }
}

bool doPasswordsMatch(std::string password, std::string passwordConfirm) {
  return password == passwordConfirm;
}