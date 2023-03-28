#ifndef VALIDATION_HPP_INCLUDED
#define VALIDATION_HPP_INCLUDED

#pragma once

#include <string>

enum class ErrorCode {
    Ok,
    PasswordNeedsAtLeastNineCharacters,
    PasswordNeedsAtLeastOneNumber,
    PasswordNeedsAtLeastOneSpecialCharacter,
    PasswordNeedsAtLeastOneUppercaseLetter,
    PasswordsDoNotMatch
};


#endif // VALIDATION_HPP_INCLUDED
