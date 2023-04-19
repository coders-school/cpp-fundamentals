#include "validation.hpp"
#include <algorithm>
#include <cctype>


std::string getErrorMessage(const ErrorCode& err) {
	std::string output;
	switch (err) {
	case ErrorCode::Ok:
		output = "Ok";
		break;

	case ErrorCode::PasswordNeedsAtLeastNineCharacters:
		output = "Password needs to have at least nine characters";
		break;

	case ErrorCode::PasswordNeedsAtLeastOneNumber:
		output = "Password needs to have at least one number";
		break;

	case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
		output = "Password needs to have at least one special character";
		break;

	case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
		output = "Password needs to have at least one uppercase letter";
		break;

	case ErrorCode::PasswordsDoNotMatch:
		output = "Passwords do not match";
		break;
	}

	return output;
}

bool doPasswordsMatch(const std::string& left, const std::string& right) {
	return left == right;
}

ErrorCode checkPasswordRules(const std::string& password) {
	if (password.size() < 9)
		return ErrorCode::PasswordNeedsAtLeastNineCharacters;
	if (std::none_of(password.begin(), password.end(), isdigit))
		return ErrorCode::PasswordNeedsAtLeastOneNumber;
	if (std::all_of(password.begin(), password.end(), isalnum))
		return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
	if (std::none_of(password.begin(), password.end(), isupper))
		return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

	return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& left, const std::string& right) {
	if (doPasswordsMatch(left, right))
		return checkPasswordRules(left);
	return ErrorCode::PasswordsDoNotMatch;
}
