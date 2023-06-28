#pragma once

enum errorCode;

std::string getErrorMessage(errorCode code);
bool doPasswordsMatch(std::string pass1, std::string pass2);
errorCode checkPasswordRules(std::string pass);
errorCode checkPassword(std::string pass1, std::string pass2);
