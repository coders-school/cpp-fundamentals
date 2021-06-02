#pragma once
// TODO: I'm empty :) Put enum and function headers here.
#include <map>

enum ErrorCode {
Ok,
PasswordNeedsAtLeastNineCharacters,
PasswordNeedsAtLeastOneNumber,
PasswordNeedsAtLeastOneSpecialCharacter,
PasswordNeedsAtLeastOneUppercaseLetter,
PasswordDoNotMatch
};

std::map <ErrorCode,std::string> map_Error_String{
{Ok, "Ok"},
{PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
{PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
{PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
{PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
{PasswordDoNotMatch,"Passwords do not match"}
};

std::string getErrorMessage(ErrorCode);
ErrorCode checkPassword(std::string, std::string);
ErrorCode checkPasswordRules(std::string password);
bool doPasswordsMatch(std::string,std::string);