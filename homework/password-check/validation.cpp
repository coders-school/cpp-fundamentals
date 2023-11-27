#include "validation.hpp"
#include <algorithm>

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

bool hasMinimumLength(std::string pass) {
    return pass.size() >= 9;
}

bool hasNumber(std::string pass) {
    std::string required_chars = "0123456789";
    return std::any_of(required_chars.begin(), required_chars.end(), [&pass](auto char_of_required) {
        return std::any_of(pass.begin(), pass.end(), [char_of_required](auto char_of_pass) {
            return char_of_required == char_of_pass;
        });
    });
}

bool hasSpecialCharacter(std::string pass) {
    std::string required_chars = "~!@#$%^&*()?><.,/;;";
    return std::any_of(required_chars.begin(), required_chars.end(), [&pass](auto char_of_required) {
        return std::any_of(pass.begin(), pass.end(), [char_of_required](auto char_of_pass) {
            return char_of_required == char_of_pass;
        });
    });
}

bool hasUppercaseLetter(std::string pass) {
    std::string required_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return std::any_of(required_chars.begin(), required_chars.end(), [&pass](auto char_of_required) {
        return std::any_of(pass.begin(), pass.end(), [char_of_required](auto char_of_pass) {
            return char_of_required == char_of_pass;
        });
    });
}

ErrorCode checkPasswordRules(std::string pass) {
    if (!hasMinimumLength(pass))
        return PasswordNeedsAtLeastNineCharacters;
    else if (!hasNumber(pass))
        return PasswordNeedsAtLeastOneNumber;
    else if (!hasSpecialCharacter(pass))
        return PasswordNeedsAtLeastOneSpecialCharacter;
    else if (!hasUppercaseLetter(pass))
        return PasswordNeedsAtLeastOneUppercaseLetter;
    return Ok;
}

ErrorCode checkPassword(std::string passA, std::string passB) {
    if (doPasswordsMatch(passA, passB))
        return checkPasswordRules(passA);
    else
        return PasswordsDoNotMatch;
}
