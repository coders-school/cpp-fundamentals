#include "validation.hpp"
#include <algorithm>
#include <functional>
#include <list>

const std::map<ErrorCode, std::string> errorsNames = {
    {ErrorCode::Ok, "Ok"},
    {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
    {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
    {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
    {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
    {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}};

std::string getErrorMessage(const ErrorCode error) {
    return errorsNames.at(error);
}

bool doPasswordsMatch(const std::string& first, const std::string& second) {
    if (first.compare(second)) {
        return false;
    }
    return true;
}

ErrorCode checkPasswordRules(const std::string& password) {
    auto moreThanEight = [lenght = 0](char) mutable{
        return ++lenght > 8;
    };

    std::list<std::pair<std::function<bool(char)>, ErrorCode>> rules = {
        {moreThanEight, ErrorCode::PasswordNeedsAtLeastNineCharacters},
        {isupper, ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter},
        {isdigit, ErrorCode::PasswordNeedsAtLeastOneNumber},
        {ispunct, ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter}};

    bool is_ok = std::any_of(begin(password), end(password), [&rules](char letter) {
        rules.remove_if([letter](auto& rule) {
            return rule.first(letter);
        });
        return rules.empty();
    });

    if (!is_ok) {
        return rules.front().second;
    }
    return ErrorCode::Ok;
}

ErrorCode checkPassword(const std::string& first, const std::string& second) {
    if (!doPasswordsMatch(first, second)) {
        return ErrorCode::PasswordsDoNotMatch;
    }
    return checkPasswordRules(first);
}
