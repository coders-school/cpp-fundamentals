#include "validation.hpp"

std::string toString(ErrorCode error_code) {
  switch (error_code) {
  case ErrorCode::Ok:
    return "Ok";
  case ErrorCode::PasswordNeedsAtLeastNineCharacters:
    return "Password needs at least nine characters";
  case ErrorCode::PasswordNeedsAtLeastOneNumber:
    return "Password needs at least one number";
  case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
    return "Password needs at least one special character";
  case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
    return "Password needs at least one uppercase letter";
  case ErrorCode::PasswordsDoNotMatch:
    return "Passwords do not match";
  }
}

std::string getErrorMessage(ErrorCode error_code) {
  return toString(error_code);
}

bool doPasswordsMatch(std::string password1, std::string password2) {
  return password1 == password2;
}