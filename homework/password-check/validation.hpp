#pragma once
#include <string>
// TODO: I'm empty :) Put enum and function headers here.
// Don't forget the header guard - #pragma once

enum class ErrorCode;
std::string getErrorMessage(int errorNum);
bool doPasswordsMatch(std::string& pass1, std::string& pass2);
int checkPasswordRules(std::string& pass);
int checkPassword(std::string& pass, std::string&repPass);
bool checkSpecialChar(std::string& pass);
