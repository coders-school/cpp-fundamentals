#include "validation.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

std::string getErrorMessage(const ErrorCode err)
{
	switch (err) 
	{
		case ErrorCode::Ok: 
			return "Ok";
		case ErrorCode::PasswordNeedsAtLeastNineCharacters: 
			return "Password needs to have at least nine characters";
		case ErrorCode::PasswordNeedsAtLeastOneNumber: 
			return "Password needs to have at least one number";
		case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: 
			return "Password needs to have at least one special character";
		case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: 
			return "Password needs to have at least one uppercase letter";
		case ErrorCode::PasswordsDoNotMatch: 
			return "Passwords do not match";

	}
}



bool doPasswordsMatch(const std::string& pass1, const std::string& pass2)
{	
	return !(pass1.compare(pass2)); 	
}


ErrorCode checkPasswordRules(const std::string pass)
{
	std::srand(std::time(nullptr));		//seed
	int rules = std::rand() % 4;
	
	return static_cast<ErrorCode>(rules);
}

ErrorCode checkPassword(const std::string pass1, const std::string pass2)
{	
	ErrorCode output;
	output = doPasswordsMatch(pass1, pass2) ? checkPasswordRules(pass1) : ErrorCode::PasswordsDoNotMatch;
	return output;
}
