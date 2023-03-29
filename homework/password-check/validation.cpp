#include "validation.hpp"

bool checkForChars(const std::string& password,const std::string& sChars)
{
		std::string::iterator it;
		ErrorCode error = ErrorCode::UnknownError;
		for(char sChar : sChars)
		{
			for(char sign : password)
			{
				if (sign == sChar)
				{
					return true;
				}
			}
		}
		return false;
}


std::string getErrorMessage(const ErrorCode& code)
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
			return "Unknown error";
	}
}
bool doPasswordsMatch(const std::string& a, const std::string& b)
{
	if(a.compare(b) == 0)
		return true;
	else
		return false;
}
ErrorCode checkPasswordRules(const std::string& a)
{

	if(!checkForChars(a,"!@#$%^&*()<>?,./:\"\'{}[]\'-=_+`~"))
		return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;

	else if(!checkForChars(a,"1234567890"))
		return ErrorCode::PasswordNeedsAtLeastOneNumber;

	else if(a.length()<9)
		return ErrorCode::PasswordNeedsAtLeastNineCharacters;

	else if(!checkForChars(a,"QWERTYUIOPASDFGHJKLZXCVBNM"))
			return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

	else
		return ErrorCode::Ok;

}
ErrorCode checkPassword(const std::string& a, const std::string& b)
{
	if(doPasswordsMatch(a, b))
		return checkPasswordRules(a);
	else
		return ErrorCode::PasswordsDoNotMatch;
}
