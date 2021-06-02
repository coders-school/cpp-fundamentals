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
{ErrorCode::Ok, "Ok"},
{ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
{ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
{ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
{ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
{ErrorCode::PasswordDoNotMatch,"Passwords do not match"}
};

std::string getErrorMessage(ErrorCode);
ErrorCode checkPassword(std::string, std::string);
ErrorCode checkPasswordRules(std::string password);
bool doPasswordsMatch(std::string,std::string);