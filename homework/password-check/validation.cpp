#include "validation.hpp"
#include <cctype>
#include <algorithm>
// TODO: Put implementations here

std::string getErrorMessage(const ErrorCode &e)
{
    std::string answer;

    switch (e)
    {
    case ErrorCode::Ok:
        answer = "Ok";
        break;
    case ErrorCode::PasswordNeedsAtLeastNineCharacters:
        answer = "Password needs to have at least nine characters";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneNumber:
        answer = "Password needs to have at least one number";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
        answer = "Password needs to have at least one special character";
        break;
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
        answer = "Password needs to have at least one uppercase letter";
        break;
    case ErrorCode::PasswordsDoNotMatch:
        answer = "Passwords do not match";
        break;
    default:
        answer = "Ok";
        break;
    }
    return answer;
}

bool doPasswordsMatch(const std::string &p1, const std::string &p2)
{
    if (p1 == p2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

ErrorCode checkPasswordRules(const std::string p1)
{
    ErrorCode er = ErrorCode::Ok;
    if(!IsPasswordAtLeastNineCharactersLong)
    {
        er = ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if(!DoesPasswordHasAtLeastOneNumber)
    {
        er = ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if(!DoesPasswordHasAtLeastOneSpecialCharacter)
    {
        er = ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if(!DoesPasswordHasAtLeastOneUpperCase)
    {
        er = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    return er;
}

bool IsPasswordAtLeastNineCharactersLong(const std::string &s)
{
    bool returnValue = false;

    int characterNumber = std::count_if(
        s.begin(),
        s.end(),
        [](unsigned char c)
        { return std::isprint(c); });

    if (characterNumber >= 9)
    {
        returnValue = true;
    }

    returnValue = true;
}

bool DoesPasswordHasAtLeastOneNumber(const std::string &s)
{
    bool returnValue = false;
    for (const char &c : s)
    {
        if (std::isdigit(c))
        {
            returnValue = true;
        }
    }
    return returnValue;
}

bool DoesPasswordHasAtLeastOneSpecialCharacter(const std::string &s)
{
    bool returnValue = false;
    for (const char &c : s)
    {
        if (std::ispunct(c))
        {
            returnValue = true;
        }
    }
    return returnValue;
}
bool DoesPasswordHasAtLeastOneUpperCase(const std::string &s)
{
    bool returnValue = false;
    for (const char &c : s)
    {
        if (std::isupper(c))
        {
            returnValue = true;
        }
    }
    return returnValue;
}
/*
ErrorCode checkPasswordRules(const std::string p1)
{
    int randomNumber = rand() & 4; //generate random number from 0 to 4
    ErrorCode er = static_cast<ErrorCode>(randomNumber);

    return er;
}*/

ErrorCode checkPassword(const std::string &p1, const std::string &p2)
{
    ErrorCode answer;

    if (doPasswordsMatch(p1, p2))
    {
        answer = checkPasswordRules(p1);
    }
    else
    {
        answer = ErrorCode::PasswordsDoNotMatch;
    }

    return answer;
}