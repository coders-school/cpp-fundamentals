#include "validation.hpp"
// std headers
#include <algorithm>
#include <cctype>

// returns textual representation assigned to error code
std::string getErrorMessage(ErrorCode errCode)
{
    switch (errCode) {
        case ErrorCode::Ok:
            return "Ok";
        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";
        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
        default:
            return "Unknown error code";
    }
}

// checks if two passwords are identical
bool doPasswordsMatch(const std::string& first, const std::string& second)
{
    return first == second;
}

// checks if the password meets defined set of rules
ErrorCode checkPasswordRules(const std::string& password)
{
    auto begin = password.begin();
    auto end = password.end();

    if (password.length() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if (std::none_of(begin, end, isdigit)) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if (std::none_of(begin, end, ispunct)) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if (std::none_of(begin, end, isupper)) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }

    return ErrorCode::Ok;
}

// checks if two passwords are identical and follow defined set of rules
ErrorCode checkPassword(const std::string& passwd_one,
                        const std::string& passwd_two)
{
    if (!doPasswordsMatch(passwd_one, passwd_two)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    // if passwords match checking validness of one is enough
    return checkPasswordRules(passwd_one);
}