#pragma once
#include <string>
#include <vector>
#include <ctime>

enum ErrorCode {
	Ok,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch
};

struct ErrorCodePair {
	ErrorCode code;
	std::string message;
};

static const std::vector<ErrorCodePair> errorCodes{
	{ErrorCode::Ok, "Ok"},
	{ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
	{ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
	{ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
	{ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
	{ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}
};

std::string getErrorMessage(const ErrorCode code);

bool doPasswordsMatch(const std::string_view lhs, const std::string_view rhs);

ErrorCode checkPasswordRules(const std::string_view password);

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword);

bool isPasswordHasUppercase(const std::string_view pass);
bool isPasswordHasSpecialChars(const std::string_view pass);
bool isPasswordToShort(const std::string_view pass);
bool isPasswordHasNumbers(const std::string_view pass);
