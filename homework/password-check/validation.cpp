#include "validation.hpp"
#include <algorithm>
#include <cstdlib>
#include <map>
#include <string>
// TODO: Put implementations here

static const std::map<ErrorCode, std::string>& convertEnumsToString() {
    std::map<ErrorCode, std::string> result{
        {ErrorCode::Ok, "Ok"},
        {ErrorCode::PasswordNeedsAtLeastNineCharacters, "PasswordNeedsAtLeastNineCharacters"},
        {ErrorCode::PasswordNeedsAtLeastOneNumber, "PasswordNeedsAtLeastOneNumber"},
        {ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter, "PasswordNeedsAtLeastOneSpecialCharacter"},
        {ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter, "PasswordNeedsAtLeastOneUppercaseLetter"},
        {ErrorCode::PasswordsDoNotMatch, "PasswordsDoNotMatch"}};
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
    auto pair = std::mismatch(password1.begin(), password1.end(), password2.begin());
    if (pair.first == password1.end()) {
        return true;
    }
    return false;
}
std::string checkPasswordRules(std::string password) {
    std::srand(time(nullptr));
    auto res = convertEnumsToString();
    int rand = std::rand() % (res.size());
    std::map<ErrorCode, std::string>::iterator it = res.begin();
    int i = 0;
    while (i < rand){
        ++it;
        ++i;
    }
    return it->second;
}
std::string checkPassword(std::string password1, std::string password2) {

    if (!doPasswordsMatch(password1,password2)){
        auto res = convertEnumsToString();
        return res.at(ErrorCode::PasswordsDoNotMatch);
    }else{
        return checkPasswordRules(password1);
    }
}