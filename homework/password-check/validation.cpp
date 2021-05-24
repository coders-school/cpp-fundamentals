#include "validation.hpp"

#include <array>

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
	std::array<ErrorCode, 5> infos = 
	{
		ErrorCode::Ok,
		ErrorCode::PasswordNeedsAtLeastNineCharacters,
		ErrorCode::PasswordNeedsAtLeastOneNumber,
		ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter,
		ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter
	};

	return infos[ rand() % infos.size() ];
}

ErrorCode checkPassword(const std::string& firstPassword, const std::string& secondPassword)
{
	const bool isPasswordsMatching = doPasswordsMatch(firstPassword, secondPassword);

	return isPasswordsMatching ? checkPasswordRules(firstPassword) : ErrorCode::PasswordsDoNotMatch;
}