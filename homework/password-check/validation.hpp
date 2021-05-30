#ifndef PASSWORD_CHECK_VALIDATION_HPP
#define PASSWORD_CHECK_VALIDATION_HPP
#include <string>

typedef enum ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};

std::string getErrorMessage( ErrorCode errorCode);
bool doPasswordsMatch(std::string password1, std::string password2 );
ErrorCode checkPasswordRules(std::string password);
ErrorCode checkPassword(std::string password1, std::string password2 );

#endif //PASSWORD_CHECK_VALIDATION_HPP