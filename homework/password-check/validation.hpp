// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <iostream>
#include <ctype.h>
#include <algorithm>
#include <string>

enum class ErrorCode
{
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(ErrorCode error);
bool doPasswordsMatch(std::string password, std::string realPassword);
ErrorCode checkPasswordRules(std::string wej);
ErrorCode checkPassword(std::string pass1, std::string pass2);

bool doPasswordHave9orMoreLetters(const std::string& password);
bool doPasswordHaveNumber(const std::string& password);
bool doPasswordHaveBigLetter(const std::string& password);
bool doPasswordHaveSpecialCharacter(const std::string& password);