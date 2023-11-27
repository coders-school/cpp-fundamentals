#include "validation.hpp"
#include <stdlib.h>
#include <time.h>

std::map<ErrorCode, std::string> codeDict{
    {Ok, "Ok"},
    {PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {PasswordsDoNotMatch, "Passwords do not match"}};

std::string getErrorMessage(ErrorCode code) {
    return codeDict[code];
}

bool doPasswordsMatch(std::string passA, std::string passB) {
    return passA == passB;
}

ErrorCode checkPasswordRules(std::string passA) {
    std::srand(time(NULL));
    return static_cast<ErrorCode>(rand() % 5);
}

ErrorCode checkPassword(std::string passA, std::string passB) {
    if (doPasswordsMatch(passA, passB))
        return checkPasswordRules(passA);
    else
        return PasswordsDoNotMatch;
}
