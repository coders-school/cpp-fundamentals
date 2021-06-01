// TODO: I'm empty :) Put enum and function headers here.
#pragma once
#include <string>
#include <vector>

enum class ErrorCode : unsigned {
	Ok = 0,
	PasswordNeedsAtLeastNineCharacters,
	PasswordNeedsAtLeastOneNumber,
	PasswordNeedsAtLeastOneSpecialCharacter,
	PasswordNeedsAtLeastOneUppercaseLetter,
	PasswordsDoNotMatch
};

struct ErrorCodePair {
	ErrorCode code;
	std::string message;
};

static const std::vector<ErrorCodePair> errorCodes{
	{ErrorCode::Ok, "Ok"},
	{ErrorCode::PasswordNeedsAtLeastNineCharacters, "PasswordNeedsAtLeastNineCharacters"},
	{ErrorCode::PasswordNeedsAtLeastOneNumber, "PasswordNeedsAtLeastOneNumber"},
	{ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "PasswordNeedsAtLeastOneSpecialCharacter"},
	{ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "PasswordNeedsAtLeastOneUppercaseLetter"},
	{ErrorCode::PasswordsDoNotMatch, "PasswordsDoNotMatch"}
};

std::string getErrorMessage(const ErrorCode code);

//która otrzyma dwa hasła i sprawdzi czy są identyczne. Powinna zwrócić odpowiednią wartość typu bool.
bool doPasswordsMatch(const std::string_view lhs, const std::string_view rhs);


//która przyjmie jedno hasło i losowo zwróci jeden z kodów błędu PasswordNeedsAtLeast* lub Ok.
ErrorCode checkPasswordRules(const std::string_view password);

/*
 Powinna ona przyjąć dwa hasła i używać funkcji doPasswordsMatch() w celu określenia czy hasła
 się zgadzają. W przypadku gdy się nie zgadzają ma ona zwrócić kod błędu PasswordsDoNotMatch,
 a w przeciwnym przypadku powinna wywołać funkcję checkPasswordRules() i
 zwrócić kod błędu zwrócony przez nią.
*/
ErrorCode checkPassword(const std::string& password, const std::string& repeatedPassword);