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