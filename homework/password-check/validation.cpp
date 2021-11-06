#include "validation.hpp"

std::string getErrorMessage(ErrorCode errorCode)    // returns a communicate based on the given error code
{
    switch(errorCode)
    {
        case Ok: return "Ok";
        case PasswordNeedsAtLeastNineCharacters: return "Password needs to have at least nine characters";
        case PasswordNeedsAtLeastOneNumber: return "Password needs to have at least one number";
        case PasswordNeedsAtLeastOneSpecialCharacter: return "Password needs to have at least one special character";
        case PasswordNeedsAtLeastOneUppercaseLetter: return "Password needs to have at least one uppercase letter";
        case PasswordsDoNotMatch: return "Passwords do not match";
    }
}

bool doPasswordsMatch(const std::string password_first, const std::string password_second) //returns boolean whether two provided password were identical
{
    return password_first == password_second;
}

/* CheckPasswordRuled based on randomization
ErrorCode checkPasswordRules(std::string password) //returns a random error code. Takes one password (string)
{
    std::default_random_engine defEngine;
    std::uniform_int_distribution<int> intDistro(1,5);
    const int random_error_code_id = intDistro(defEngine);
    switch(random_error_code_id){
        case 1: return ErrorCode::Ok;
        case 2: return ErrorCode::PasswordNeedsAtLeastNineCharacters;
        case 3: return ErrorCode::PasswordNeedsAtLeastOneNumber;
        case 4: return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
        case 5: return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
}
*/

bool checkPasswordNeedsAtLeastNineCharacters(const std::string password){
    return password.length() >= 9;
}

bool checkPasswordNeedsAtLeastOneNumber(const std::string password){
    return std::any_of(password.begin(), password.end(), [](char character){return std::isdigit(character);});
}

bool checkPasswordNeedsAtLeastOneSpecialCharacter(const std::string password){
    return std::any_of(password.begin(), password.end(), [](char character){return std::ispunct(character);});
}

bool checkPasswordNeedsAtLeastOneUppercaseLetter(const std::string password){
    return std::any_of(password.begin(), password.end(), [](char character){return std::isupper(character);});
}

ErrorCode checkPasswordRules(const std::string password) //returns an error code. Takes one password (string)
{
    if (checkPasswordNeedsAtLeastNineCharacters(password) == false) return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    if (checkPasswordNeedsAtLeastOneNumber(password) == false) return ErrorCode::PasswordNeedsAtLeastOneNumber;
    if (checkPasswordNeedsAtLeastOneSpecialCharacter(password) == false) return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    if (checkPasswordNeedsAtLeastOneUppercaseLetter(password) == false) return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string password_first, const std::string password_second) //returns an error code. Takes two passwords.
{
    if(doPasswordsMatch(password_first, password_second))
        return checkPasswordRules(password_first);
    else
        return ErrorCode::PasswordsDoNotMatch;
}
