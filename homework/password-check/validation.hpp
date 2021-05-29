#pragma once
#include <string>

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
bool doPasswordsMatch(std::string ps1, std::string ps2);
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string ps1, std::string ps2);
// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once