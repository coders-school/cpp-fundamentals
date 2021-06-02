#include <algorithm>
#include "validation.hpp"

std::string getErrorMessage(const ErrorCode code)
{
	for (auto& el : errorCodes)
	{
		if (code == el.code) {
			return el.message;
		}
	}
	return {};
}

bool doPasswordsMatch(const std::string_view lhs, const std::string_view rhs)
{
	if (lhs == rhs) {
		return true;
	}
	else { return false; }

}

ErrorCode checkPasswordRules(const std::string_view password)
{

	if (checkPasswordTooFewChars(password)) {
		return ErrorCode::PasswordNeedsAtLeastNineCharacters;
	}
	else if (checkPasswordSpecialChars(password)) {
		return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
	}
	else if (checkPasswordMissingUppercase(password)) {
		return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
	}
	else if (checkPasswordMissingNumbers(password)) {
		return ErrorCode::PasswordNeedsAtLeastOneNumber;
	}
	else {
		return ErrorCode::Ok;
	}

}


ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword)
{
	auto result = doPasswordsMatch(password, repeatedPassword);
	if (result) {
		return checkPasswordRules(password);
	}
	else {
		return ErrorCode::PasswordsDoNotMatch;
	}

}

bool checkPasswordMissingUppercase(const std::string_view pass)
{

	auto result = std::any_of(pass.begin(), pass.end(), [](char c) {

		if (c <= 'Z' && c >= 'A') {
			return true;
		}
		else {
			return false;
		}
		});

	return result;
}

bool checkPasswordSpecialChars(const std::string_view pass)
{
	auto result = std::any_of(pass.begin(), pass.end(), [](char c) {

		if (c <= '/' && c >= 32) { //32 - space
			return true;
		}
		else if (c <= '@' && c >= ':') {
			return true;
		}
		else if (c <= '`' && c >= '[') {
			return true;
		}
		else if (c <= '~' && c >= '{') {
			return true;
		}
		else {
			return false;
		}
		});
	return result;
}

bool checkPasswordTooFewChars(const std::string_view pass)
{
	if (pass.size() < 10) {
		return true;
	}
	else
	{
		return false;
	}
}

bool checkPasswordMissingNumbers(const std::string_view pass)
{
	auto result = std::any_of(pass.begin(), pass.end(), [](char c) {

		if (c <= '9' && c >= '0') {
			return true;
		}
		else {
			return false;
		}
		});

	return result;
}
