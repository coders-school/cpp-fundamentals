#include "validation.hpp"

#include <array>
#include <regex>

std::string getErrorMessage(ErrorCode error)
{
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
		return "";
	}
}

bool doPasswordsMatch(const std::string& firstPassword, const std::string& secondPassword)
{
	return firstPassword == secondPassword;
}

ErrorCode checkPasswordRules(const std::string& password)
{
	std::regex uppercaseLetter{ "[A-Z]" };
	std::regex digit{ "[0-9]" };
	std::regex specialChar{ "\\W" };

	if (password.size() < 9)
		return ErrorCode::PasswordNeedsAtLeastNineCharacters;

	if (!std::regex_search(password, digit))
		return ErrorCode::PasswordNeedsAtLeastOneNumber;

	if (!std::regex_search(password, specialChar))
		return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

	if (!std::regex_search(password, uppercaseLetter))
		return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

	return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword)
{
	const bool isPasswordsMatching = doPasswordsMatch(firstPassword, secondPassword);

	return isPasswordsMatching ? checkPasswordRules(firstPassword) : ErrorCode::PasswordsDoNotMatch;
}