#include "validation.hpp"
#include <string>

std::string getErrorMessage(ErrorCode errorCode) {
    return "";
}

bool doPasswordsMatch(std::string password, std::string passwordConfirm) {
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string password, std::string passwordConfirm) {
    return ErrorCode::Ok;
}
