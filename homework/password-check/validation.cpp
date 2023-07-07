#include "validation.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

bool isInPassDigit(std::string pass) {
    for (char el : pass) {
        if (isdigit(el)) {
            return true;
        }
        return false;
    }
}

bool isInPassSpecialChar(std::string pass) {
    for (char el : pass) {
        if (ispunct(el)) {
            return true;
        }
        return false;
    }
}

bool isInPassUppercaseLetter(std::string pass) {
    for (char el : pass) {
        if (isupper(el)) {
            return true;
        }
        return false;
    }
}

std::string getErrorMessage(ErrorCode code) {
    switch(code) {
        case ErrorCode::Ok:
            return "Ok";
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
        default:
            return "Undefined";
    }
}

bool doPasswordsMatch(std::string pass1, std::string pass2) {
    if (pass1.compare(pass2) == 0) {
        return true;
    }
    return false;
}

//ErrorCode checkPasswordRules(std::string pass) {
//    srand((unsigned)time(0));
//    int random = rand() % 6;
//    return (ErrorCode)random;
//}

ErrorCode checkPasswordRules(std::string pass) {
    if (pass.size() < 9) {
        return ErrorCode::PasswordNeedsAtLeastNineCharacters;
    }
    else if (!isInPassDigit) {
        return ErrorCode::PasswordNeedsAtLeastOneNumber;
    }
    else if (!isInPassSpecialChar) {
        return ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter;
    }
    else if (!isInPassUppercaseLetter) {
        return ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;
    }
    else {
        return ErrorCode::Ok;
    }
}

ErrorCode checkPassword(std::string pass1, std::string pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    }
    else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
