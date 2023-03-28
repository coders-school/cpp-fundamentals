#include "validation.hpp"
std::string getErrorMessage(ErrorCode code)
{
	switch (code)
	{
		case ErrorCode::Ok:
		{
			return "Ok";
		}
		case ErrorCode::PasswordNeedsAtLeastNineCharacters:
		{
			return "Password needs to have at least nine characters";
		}
		case ErrorCode::PasswordNeedsAtLeastOneNumber:
		{
			return "Password needs to have at least one number";
		}
		case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
		{
			return "Password needs to have at least one special character";
		}
		case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
		{
			return "Password needs to have at least one uppercase letter";
		}
		case ErrorCode::PasswordsDoNotMatch:
		{
			return "Passwords do not match";
		}
		default:
			return "Passwords do not match";
	}
}
bool doPasswordsMatch(std::string a, std::string b)
{
	if(a.compare(b) == 0)
		return true;
	else
		return false;
}
ErrorCode checkPasswordRules(std::string a)
{
	srand (time(NULL));
	switch (rand()%6)
	{
		case 0:
		{
			return ErrorCode::Ok;
		}
		case 1:
		{
			return ErrorCode::PasswordNeedsAtLeastNineCharacters;
		}
		case 2:
		{
			return ErrorCode::PasswordNeedsAtLeastOneNumber;
		}
		case 3:
		{
			return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
		}
		case 4:
		{
			return ErrorCode::PasswordsDoNotMatch;
		}
		default:
			return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
	}
}
ErrorCode checkPassword(std::string a, std::string b)
{
	if(doPasswordsMatch(a, b))
		return checkPasswordRules(a);
	else
		return ErrorCode::PasswordsDoNotMatch;
}
