// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once
#pragma once
#include <string>

enum class ErrorCode {};

std::string getErrorMessage(ErrorCode code);

bool doPasswordsMatch(std::string password, std::string repeatedPassword);

ErrorCode checkPasswordRules(std::string password);

ErrorCode checkPassword(std::string password, std::string repeatedPassword);
