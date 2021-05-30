#include <map>
#include <string>
#include <algorithm>
#include "validation.hpp"
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
    if(password1.size() != password2.size()){
        return false;
    }
    auto pair = std::mismatch(password1.begin(),password1.end(),password2.begin());
    if(pair.first == password1.end()){
        return false;
    }
    return true;

}
ErrorCode checkPasswordRules(std::string password) {
}
ErrorCode checkPassword(std::string password1, std::string password2) {
}