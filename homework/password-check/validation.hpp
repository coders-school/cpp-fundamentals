#pragma once
#ifndef VALIDATION_H_INCLUDED
#define VALIDATION_H_INCLUDED



enum class ErrorCode {
Ok,
PasswordNeedsAtLeastNineCharacters,
PasswordNeedsAtLeastOneNumber,
PasswordNeedsAtLeastOneSpecialCharacter,
PasswordNeedsAtLeastOneUppercaseLetter,
PasswordsDoNotMatch
};


std::string getErrorMessage(ErrorCode errorCode);
bool doPasswordsMatch(const std::string& password1, const std::string& password2);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& password1, const std::string& password2);


#endif // VALIDATION_H_INCLUDED
