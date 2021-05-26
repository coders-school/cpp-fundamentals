#include "validation.hpp"

std::string getErrorMessage(ErrorCode error) {
    return "";
}

bool doPasswordsMatch(std::string firstPassword, std::string secondPassword) {
    return false;
}

ErrorCode checkPasswordRules(std::string password) {
    return ErrorCode::Ok;
}

ErrorCode checkPassword(std::string firstPassword, std::string secondPassword) {
    return ErrorCode::Ok;
}