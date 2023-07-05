#include "validation.hpp"
#include <string>
#include <cstdlib>
#include <ctime>

std::string getErrorMessage(ErrorCode code) {
    switch(code) {
        case 0:
            return "OK";
        case 1:
            return "Password needs to have at least nine characters";
        case 2:
            return "Password needs to have at least one number";
        case 3:
            return "Password needs to have at least one special character";
        case 4:
            return "Password needs to have at least one uppercase letter";
        case 5:
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

ErrorCode checkPasswordRules(std::string pass) {
    srand((unsigned)time(0));
    int random = rand() % 6;
    return (ErrorCode)random;
}

ErrorCode checkPassword(std::string pass1, std::string pass2) {
    if (doPasswordsMatch(pass1, pass2)) {
        return checkPasswordRules(pass1);
    }
    else {
        return ErrorCode::PasswordsDoNotMatch;
    }
}
