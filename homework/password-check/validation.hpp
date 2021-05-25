#pragma
#include<string>

enum class ErrorCode{


    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch,

};

std::string getErrorMessage(ErrorCode c);
bool doPasswordsMatch(std::string pas1,std::string pas2);
ErrorCode checkPasswordRules(std::string p);
ErrorCode checkPassword(std::string pas_1,std::string pas_2);
