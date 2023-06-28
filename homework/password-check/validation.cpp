#include "validation.hpp"
#include <string>

enum errorCode {
    Ok = 0,
    PasswordNeedsAtLeastNineCharacters = 1,
    PasswordNeedsAtLeastOneNumber = 2,
    PasswordNeedsAtLeastOneSpecialCharacter = 3,
    PasswordNeedsAtLeastOneUppercaseLetter = 4,
    PasswordsDoNotMatch = 5
};

std::string getErrorMessage(errorCode) {
    switch {
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
    }
}
