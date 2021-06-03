#include "validation.hpp"
#include <algorithm>
#include <array>
#include <cctype>
#include <map>
#include <optional>

const std::map<ErrorCode, const std::string> errorsText = {
    {ErrorCode::Ok, "Ok"},
    {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}};

const std::string& getErrorMessage(const ErrorCode error) {
    return errorsText.at(error);
}

bool doPasswordsMatch(const std::string& first, const std::string& second) {
    return first == second;
}

constexpr unsigned int letters_minimum_number = 9;

int countLetters(int) {
    static unsigned int lenght = 0;
    if (++lenght == letters_minimum_number) {
        lenght = 0;
        return true;
    }
    return false;
}

struct Rule {
    int (&test)(int);
    const ErrorCode error;

    constexpr Rule(int (&test)(int), ErrorCode error)
        : test(test), error(error) {}

    std::optional<ErrorCode> check(const std::string& password) const {
        bool fail = std::none_of(begin(password), end(password), [=](char letter) {
            return test(letter);
        });
        if (fail) {
            return error;
        }
        return std::nullopt;
    }
};

constexpr std::array rules{
    Rule{countLetters, ErrorCode::PasswordNeedsAtLeastNineCharacters},
    Rule{::isupper, ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter},
    Rule{::isdigit, ErrorCode::PasswordNeedsAtLeastOneNumber},
    Rule{::ispunct, ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter}};

ErrorCode checkPasswordRules(const std::string& password) {
    for (const auto& rule : rules) {
        if (auto error = rule.check(password)) {
            return error.value();
        }
    };
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& first, const std::string& second) {
    if (!doPasswordsMatch(first, second)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}
