#include "validation.hpp"
#include <random>

// TODO: Put implementations here
//


std::string getErrorMessage(enum ErrorCode code) {

    switch (code)   {
        case Ok:
            return "Ok";
            break;
        case PasswordNeedsAtLeastNineCharacters:
            return "Password Needs At Least Nine Characters";
            break;
        case PasswordNeedsAtLeastOneNumber:
            return  "Password Needs At Least One Number";
            break;
        case PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password Needs At Least One Special Character"; 
            break;
        case PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password Needs At Least One Uppercase Letter";
            break;
        case PasswordsDoNotMatch:
            return "Passwords Do Not Match"; 
            break;
    }

}

bool doPasswordsMatch(std::string pass1, std::string pass2)  {

    if (pass1==pass2) return true;
    
    return false;
}

enum ErrorCode checkPasswordRules(std::string pass)    {
    int errorNo = std::rand()%5;
    ErrorCode rndError = (ErrorCode)errorNo;

return Ok;
}

enum ErrorCode checkPassword(std::string pass1, std::string pass2)   {


return Ok;
}

