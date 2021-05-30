#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode errCode){
    switch(errCode){
        case Ok: return "Ok";

    }
    return "Ok";
}

bool doPasswordsMatch(std::string password1, std::string password2){
    return true;
}
ErrorCode checkPasswordRules(std::string password){
    return Ok;
}
ErrorCode checkPassword(std::string password1, std::string password2){
    return Ok;
}