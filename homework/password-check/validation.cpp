#include "validation.hpp"

#include <algorithm>
#include <cctype>
#include <iostream>

std::string getErrorMessage(ErrorCode code) {
	switch (code) {
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
			return "Undefined behavior ;)";
	}
}

ErrorCode checkPassword(std::string pass, std::string repeatedPass) {
	if(doPasswordsMatch(pass, repeatedPass)) {
		return checkPasswordRules(repeatedPass);
	}
	return ErrorCode::PasswordsDoNotMatch;
}

bool doPasswordsMatch(std::string password, std::string repeatedPassword) {
  if(password.compare(repeatedPassword) != 0 ) {
    return false;
  }
  return true;
}

ErrorCode checkPasswordRules(std::string password) {
  if(password.length() < 9) {
    return ErrorCode::PasswordNeedsAtLeastNineCharacters;
  } else if(std::none_of(password.cbegin(),password.cend(), ::isdigit)) {
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
  } else if(std::none_of(password.cbegin(),password.cend(), ::ispunct)){
    return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
  } else if(std::none_of(password.cbegin(),password.cend(), ::isupper)){
    return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
  } else {
    return ErrorCode::Ok;
  }
}
