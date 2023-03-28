#include <string>
#include <stdlib.h>
#include <time.h>
enum class ErrorCode
{
	Ok,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch
};
std::string getErrorMessage(ErrorCode);
bool doPasswordsMatch(std::string,std::string);
ErrorCode checkPasswordRules(std::string);
ErrorCode checkPassword(std::string, std::string);


