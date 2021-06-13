#include <iostream>

//#ifndef VALIDATION_HPP
//#define VALIDATION_HPP
enum class ErrorCode
{
	Ok,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(const std::string&, const std::string&);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);
//#endif