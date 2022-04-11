#pragma once
#include<iostream>

enum class ErrorCode {Ok,PasswordNeedsAtLeastNineCharacters,PasswordNeedsAtLeastOneNumber
,PasswordNeedsAtLeastOneSpecialCharacter,PasswordNeedsAtLeastOneUppercaseLetter,PasswordsDoNotMatch};

std::string getErrorMessage(const ErrorCode& errCode);
bool doPasswordsMatch(const std::string& pas1, const std::string& pass2);
ErrorCode checkPasswordRules(const std::string& pass);
ErrorCode checkPassword(const std::string& pass1, const std::string& pass2);

