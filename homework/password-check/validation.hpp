#pragma once
#include <bits/stdc++.h>

enum ErrorCode{
    Ok = 1,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage(int a);
bool doPasswordsMatch(std::string pass1, std::string pass2);
int checkPasswordRules(std::string pass1);
int checkPassword(std::string pass1, std::string pass2);
