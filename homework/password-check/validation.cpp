#include "validation.hpp"
#include <random>
#include <cctype>

// TODO: Put implementations here
//



std::string getErrorMessage(enum ErrorCode code) {

    switch (code)   {
        case Ok:
            return "Ok";
            break;
        case PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
            break;
        case PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";
            break;
        case PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character"; 
            break;
        case PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";
            break;
        case PasswordsDoNotMatch:
            return "Passwords do not match"; 
            break;
    }
return "dupa";
}

bool doPasswordsMatch(std::string pass1, std::string pass2)  {

    if (pass1==pass2) return true;
    
    return false;
}

enum ErrorCode checkPasswordRules(std::string pass)    {
//    int errorNo = std::rand()%5;
//    ErrorCode rndError = (ErrorCode)errorNo;

    bool nErrNumber=false;
    bool nErrSpecial=false;
    bool nErrUpper=false;
    int noOfChars=0;

    for(unsigned char el:pass)  {
        nErrNumber|=std::isdigit(el);
        nErrSpecial|=std::ispunct(el);
        nErrUpper|=std::isupper(el);
        noOfChars++;
    }

    if(noOfChars<9) return PasswordNeedsAtLeastNineCharacters;
    if(not nErrNumber)  return PasswordNeedsAtLeastOneNumber;
    if(not nErrSpecial) return PasswordNeedsAtLeastOneSpecialCharacter;
    if(not nErrUpper) return PasswordNeedsAtLeastOneUppercaseLetter;

return Ok;
}

enum ErrorCode checkPassword(std::string pass1, std::string pass2)   {
    if(doPasswordsMatch(pass1,pass2)) return checkPasswordRules(pass1);
    return PasswordsDoNotMatch;
}

