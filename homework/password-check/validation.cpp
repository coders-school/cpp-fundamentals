#include "validation.hpp"
#include <string>

std::string getErrorMessage(ErrorCode errorNumber) {
    switch(static_cast<int>(errorNumber)) {
        case 0: 
        return "Ok";
        break;

        case 1: 
        return "Password needs to have at least nine characters";
        break;

        case 2:
        return "Password needs to have at least one number";
        break;

        case 3:
        return "Password needs to have at least one special character";
        break;

        case 4:
        return "Password needs to have at least one uppercase letter";
        break; 

        case 5:
        return "Passwords do not match";
        break;
    }
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    return firstPassword == secondPassword;
}

ErrorCode checkPasswordRules(std::string password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword) {
    if (!doPasswordsMatch(firstPassword, secondPassword)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(firstPassword);
}