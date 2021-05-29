#include "validation.hpp"


std::string getErrorMessage(ErrorCode error)
{
	if(static_cast<int>(error) == 0)
		return "Ok";
	if(static_cast<int>(error) == 1)
		return "PasswordNeedsAtLeastNineCharacters";
	if(static_cast<int>(error) == 2)
		return "PasswordNeedsAtLeastOneNumber";
	if(static_cast<int>(error) == 3)
		return "PasswordNeedsAtLeastOneSpecialCharacter";
	if(static_cast<int>(error) == 4)
		return "PasswordNeedsAtLeastOneUppercaseLetter";
	if(static_cast<int>(error) == 5)
		return "PasswordsDoNotMatch";
}

bool doPasswordsMatch(std::string ps1, std::string ps2)
{
	return ps1 == ps2;
}

ErrorCode checkPasswordRules(std::string password)
{
	return static_cast<ErrorCode>(rand()%5);
}

ErrorCode checkPassword(std::string ps1, std::string ps2)
{
	if(!doPasswordsMatch(ps1,ps2))
		return ErrorCode::PasswordsDoNotMatch;
	return checkPasswordRules(ps1);
}
// TODO: Put implementations here