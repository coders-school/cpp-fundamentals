#include "validation.hpp"
// TODO: Put implementations here
std::string getErrorMessage(class ErrorCode error) {
    std::string msg;
    switch (error) {
    case OK:
        msg = "OK";
        break;
    case PasswordNeedsAtLeastNineCharacters:
        msg = "PasswordNeedsAtLeastNineCharacters";
        break;
    case PasswordNeedsAtLeastOneNumber:
        msg = "PasswordNeedsAtLeastOneNumber";
        break;
    case PasswordNeedsAtLeastOneSpecialCharacter:
        msg = "PasswordNeedsAtLeastOneSpecialCharacter";
        break;
    case PasswordNeedsAtLeastOneUppercaseLetter:
        msg = "PasswordNeedsAtLeastOneUppercaseLetter";
        break;
    case PasswordsDoNotMatch:
        msg = "PasswordsDoNotMatch";
        break;
    }
    return msg;
}