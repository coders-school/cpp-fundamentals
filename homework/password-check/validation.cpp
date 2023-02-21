#include "validation.hpp"
// TODO: Put implementations here
#include <cstdlib>
#include <ctime>

std::string getErrorMessage(ErrorCode a)
{
		switch (a)
				{
						case ErrorCode::Ok: return "Ok";
								    	case ErrorCode::PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters";
															    	case ErrorCode::PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number";
																					       	case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character";
																													 	case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter";
																																						case ErrorCode::PasswordsDoNotMatch: return "Passwords do not match";

																																										     	}
}

bool doPasswordsMatch(std::string a, std::string b)
{
		if (a == b)
				{
							return true;
								}
			else
					{
								return false;
									}

}


ErrorCode checkPasswordRules(std::string a)
{
		int x;
			srand(time(NULL));
				x = (rand() % 6) + 1;

					switch (x)
							{
									case 1: return ErrorCode::Ok;
											case 2: return ErrorCode::PasswordNeedsAtLeastNineCharacters;
													case 3: return ErrorCode::PasswordNeedsAtLeastOneNumber;
															case 4: return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
																	case 5: return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
																			case 6: return ErrorCode::PasswordsDoNotMatch;
																					}


}

ErrorCode checkPassword(std::string a, std::string b)
{

		if (doPasswordsMatch(a, b))
					return checkPasswordRules(a);
			else
						return ErrorCode::PasswordsDoNotMatch;

}

