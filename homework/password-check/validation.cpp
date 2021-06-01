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
	return {};
}

ErrorCode checkPasswordRules(const std::string_view password)
{
	return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword)
{
	return ErrorCode::Ok;
}
