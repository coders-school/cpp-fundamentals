#include "validation.hpp"

#include <algorithm>
#include <cctype>

std::string toString(ErrorCode error_code) {
  switch (error_code) {
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
  }
}

std::string getErrorMessage(ErrorCode error_code) {
  return toString(error_code);
}

bool doPasswordsMatch(const std::string &password1,
                      const std::string &password2) {
  return password1 == password2;
}

ErrorCode checkPasswordRules(const std::string &password) {
  if (password.length() < kPasswordMinLength) {
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
  }
  if (!(std::any_of(password.begin(), password.end(), ::isdigit))) {
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
  }
  if (!(std::any_of(password.begin(), password.end(), ::ispunct))) {
    return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
  }
  if (!(std::any_of(password.begin(), password.end(), ::isupper))) {
    return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
  }

  return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string &password1,
                        const std::string &password2) {
  if (!(doPasswordsMatch(password1, password2))) {
    return ErrorCode::PasswordsDoNotMatch;
  }

  return checkPasswordRules(password1);
}
