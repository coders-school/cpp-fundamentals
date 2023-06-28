#include "validation.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

enum errorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters = 1,
    PasswordNeedsAtLeastOneNumber = 2,
    PasswordNeedsAtLeastOneSpecialCharacter = 3,
    PasswordNeedsAtLeastOneUppercaseLetter = 4,
    PasswordsDoNotMatch = 5
};

std::string getErrorMessage(errorCode code) {
    switch(code) {
        case 0:
            return "OK";
        case 1:
            return "Password needs at least nine characters";
        case 2:
            return "Password needs at least one number";
        case 3:
            return "Password needs at least one special character";
        case 4:
            return "Password needs at least one uppercase letter";
        case 5:
            return "Passwords do not match";
        default:
            return "Undefined";
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2) {
    if (pass1.compare(pass2) == 0) {
        return True;
    }
    return False;
}

errorCode checkPasswordRules(std::string pass) {
    srand((unsigned)time(0));
    int random = rand() % 6;
    return (errorCode)random;
}

errorCode checkPassword(std::string pass1, std::string pass2) {
    if (doPasswordsMatch(pass1, pass2) {
        return checkPasswordRules(pass1);
    }
    else {
        return errorCode.PasswordsDoNotMatch;
    }
}
