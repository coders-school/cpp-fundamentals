#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
	switch (error)
	{
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
		return "Error unknown";
	}
}
bool doPasswordsMatch(std::string password, std::string reprepeatedPassword) {
	if (password == reprepeatedPassword) {
		return true;
	}
	else {
		return false;
	}
}
ErrorCode checkPasswordRules(std::string password) {
	if (password.size() < 9) { return ErrorCode::PasswordNeedsAtLeastNineCharacters; }
	if (std::none_of(password.begin(), password.end(), ::isdigit)) { return ErrorCode::PasswordNeedsAtLeastOneNumber; }
	if (std::none_of(password.begin(), password.end(), ::ispunct)) { return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter; }
	if (std::none_of(password.begin(), password.end(), ::isupper)) { return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter; }
	return ErrorCode::Ok;
}
ErrorCode checkPassword(std::string password, std::string repeatedPassword) {
	if (doPasswordsMatch(password, repeatedPassword)) {
		return checkPasswordRules(password);
	}
	return  ErrorCode::PasswordsDoNotMatch;
}