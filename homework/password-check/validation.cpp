#include "validation.hpp"
#include <algorithm>
#include <cstdlib>
#include <map>
#include <string>

std::map<ErrorCode, std::string> convertEnumsToString() {
    std::map<ErrorCode, std::string> result{
        {ErrorCode::Ok, "Ok"},
        {ErrorCode::PasswordNeedsAtLeastNineCharacters, "Password needs to have at least nine characters"},
        {ErrorCode::PasswordNeedsAtLeastOneNumber, "Password needs to have at least one number"},
        {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "Password needs to have at least one special character"},
        {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "Password needs to have at least one uppercase letter"},
        {ErrorCode::PasswordsDoNotMatch, "Passwords do not match"}};
    return result;
}
std::string getErrorMessage(ErrorCode er) {
    auto res = convertEnumsToString();
    return res.at(er);
}
bool doPasswordsMatch(std::string password1, std::string password2) {
    if (password1.size() != password2.size()) {
        return false;
    }
    if ((password1.empty() == password2.empty())) {
        return true;
    } 
    else if (password1.size() == password2.size()) {
        auto pair = std::mismatch(password1.begin(), password1.end(), password2.begin());
        if (pair.first == password1.begin()) {
            return true;
        }
    }
    return false;
}
ErrorCode checkPasswordRules(std::string password) {
    std::srand(time(nullptr));
    auto res = convertEnumsToString();
    int rand = std::rand() % (res.size());
    std::map<ErrorCode, std::string>::iterator it = res.begin();
    int i = 0;
    while (i < rand) {
        ++it;
        ++i;
    }
    return it->first;
}
ErrorCode checkPassword(std::string password1, std::string password2) {
    auto res = convertEnumsToString();
    if (!doPasswordsMatch(password1, password2)) {
        return ErrorCode::PasswordsDoNotMatch;
    } else {
        return checkPasswordRules(password1);
    }
}