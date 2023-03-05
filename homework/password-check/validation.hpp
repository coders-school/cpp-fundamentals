#pragma once
#include <string>

enum class ErrorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters = 1,
    PasswordNeedsAtLeastOneNumber = 2,
    PasswordNeedsAtLeastOneSpecialCharacter = 3,
    PasswordNeedsAtLeastOneUppercaseLetter = 4,
    PasswordsDoNotMatch = 5
};

auto getErrorMessage(ErrorCode code_to_convert) -> std::string;

auto doPasswordsMatch(std::string password_first, std::string password_second) -> bool;

auto checkPasswordRules(std::string password) -> ErrorCode;

auto checkPassword(std::string password_first, std::string password_second) -> ErrorCode;
