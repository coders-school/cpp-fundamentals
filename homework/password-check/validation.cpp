#include "validation.hpp"
// TODO: Put implementations here

std::string getErrorMessage(ErrorCode error) {
    switch (error) {
    case ErrorCode::Ok : return "Ok";
    case ErrorCode::PasswordNeedsAtLeastNineCharacters : return "PasswordNeedsAtLeastNineCharacters";
    case ErrorCode::PasswordNeedsAtLeastOneNumber : return "PasswordNeedsAtLeastOneNumber";
    case ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter : return "PasswordNeedsAtLeastOneSpecialCharacter";
    case ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter : return "PasswordNeedsAtLeastOneUppercaseLetter";
    case ErrorCode::PasswordsDoNotMatch : return "PasswordsDoNotMatch";
    default : return "Invalid error code";
    }
}
