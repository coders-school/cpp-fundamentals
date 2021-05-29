#include "validation.hpp"


std::string getErrorMessage(ErrorCode error)
{
	switch (static_cast<int>(error))
	{
     case 0 : return "Ok";
     case 1 : return "Password needs to have at least nine characters";
     case 2 : return "Password needs to have at least one number";
     case 3 : return "Password needs to have at least one special character";
     case 4 : return "Password needs to have at least one uppercase letter";
     case 5 : return "Passwords do not match";
     default : return "Invalid error code";
    }
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