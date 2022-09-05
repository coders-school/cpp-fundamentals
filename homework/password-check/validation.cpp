#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(enum ErrorCode error)
{
    return "";
}

bool doPasswordsMatch(const std::string& pass1, const std::string pass2)
{
    return false;
}

enum ErrorCode checkPasswordRules(const std::string& pass)
{
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
}

enum ErrorCode checkPassword(const std::string& pass1, const std::string pass2)
{
    return ErrorCode::PasswordNeedsAtLeastOneNumber;
}