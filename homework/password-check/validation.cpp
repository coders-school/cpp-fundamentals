#include <iostream>
#include <string>
#include <ctime>
#include "validation.hpp"

// TODO: Put implementations here
std::string getErrorMessage (ErrorCode Error) {
    switch (Error) {
        case ErrorCode::Ok:
            return "OK";

        case ErrorCode::PasswordNeedsAtLeastNineCharacters:
            return "Password needs to have at least nine characters";
        
        case ErrorCode::PasswordNeedsAtLeastOneNumber:
            return "Password needs to have at least one number";

        case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter:
            return "Password needs to have at least one special character";

        case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter:
            return "Password needs to have at least one uppercase letter";

        case ErrorCode::PasswordsDoNotMatch:
            return "Passwords do not match";
    }
}

bool doPasswordsMatch (const std::string &password, const std::string& repeatedPassword) {
    if (password.length() != repeatedPassword.length()) {
        return 0;
    }
    for (int i = 0 ; i < password.length() ; ++i) {
        if (password [i] != repeatedPassword [i]) {
            return 0;
        }
    }
    return 1;
 }

ErrorCode checkPasswordRules (const std::string& password) {
    srand (time(NULL));
    int Random = rand() % 3;
    ErrorCode RandomError = static_cast <ErrorCode> (Random);
    return RandomError;
}

ErrorCode checkPassword (const std::string& password, const std::string& repeatedPassword) {
    if (doPasswordsMatch (password, repeatedPassword)) {
        checkPasswordRules (password); 
    } else {
        ErrorCode::PasswordsDoNotMatch;
    }
}