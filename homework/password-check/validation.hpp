#pragma once
#include <map>
#include <string>

enum ErrorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters = 1,
    PasswordNeedsAtLeastOneNumber = 2,
    PasswordNeedsAtLeastOneSpecialCharacter = 3,
    PasswordNeedsAtLeastOneUppercaseLetter = 4,
    PasswordsDoNotMatch = 5
};

extern std::map<ErrorCode, std::string> codeDict;

std::string getErrorMessage(ErrorCode code);

bool doPasswordsMatch(std::string passA, std::string passB);

ErrorCode checkPasswordRules(std::string pass);

ErrorCode checkPassword(std::string passA, std::string passB);

bool hasMinimumLength(std::string pass);
bool hasNumber(std::string pass);
bool hasSpecialCharacter(std::string pass);
bool hasUppercaseLetter(std::string pass);
