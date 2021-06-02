#include "validation.hpp"
// TODO: Put implementations here

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
	srand(time(NULL));
	auto v1 = rand() % errorCodes.size();

	return errorCodes.at(v1).code;
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
