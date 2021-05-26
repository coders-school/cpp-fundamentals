#include <iostream>
#include <ctime>
#include <cctype>


        enum class ErrorCode {
            Ok,
            PasswordNeedsAtLeastNineCharacters,
            PasswordNeedsAtLeastOneNumber,
            PasswordNeedsAtLeastOneSpecialCharacter,
            PasswordNeedsAtLeastOneUppercaseLetter,
            PasswordsDoNotMatch
        };

std::string getErrorMessage(const ErrorCode& error);
bool doPasswordsMatch(const std::string& password, const std::string& new_password);
ErrorCode checkPasswordRules(const std::string& password);
ErrorCode checkPassword(const std::string& password, const std::string& new_password);

