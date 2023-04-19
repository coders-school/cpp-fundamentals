#pragma once

#include <string>

enum class ErrorCode {
	Ok,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch
};

std::string getErrorMessage(const ErrorCode& err);
bool doPasswordsMatch(const std::string& left, const std::string& right);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& left, const std::string& right);
