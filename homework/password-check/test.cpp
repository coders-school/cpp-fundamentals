#include "gtest/gtest.h"
#include "validation.hpp"

const std::string EMPTY_PASSWORD = "";
const std::string PROPER_PASSWORD = "abcABC123!@#";
const std::string TOO_SHORT_PASSWORD = "12345678";
const std::string DOES_NOT_CONTAIN_NUMBER = "abcabcabcabc";
const std::string DOES_NOT_CONTAIN_UPPER = "abcabc123!@#";
const std::string DOES_NOT_CONTAIN_SPECIAL = "123456789";
auto MIN_ALLOWED_ERROR_CODE = ErrorCode::Ok;
auto MAX_ALLOWED_ERROR_CODE = ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter;

TEST(DoPasswordsMatchTests, returnsTrueForIdenticalPasswords) {
    EXPECT_TRUE(doPasswordsMatch(EMPTY_PASSWORD, EMPTY_PASSWORD));
    EXPECT_TRUE(doPasswordsMatch(PROPER_PASSWORD, PROPER_PASSWORD));
    EXPECT_TRUE(doPasswordsMatch(TOO_SHORT_PASSWORD, TOO_SHORT_PASSWORD));
}

TEST(DoPasswordsMatchTests, returnsFalseForDifferentPasswords) {
    EXPECT_FALSE(doPasswordsMatch(EMPTY_PASSWORD, PROPER_PASSWORD));
    EXPECT_FALSE(doPasswordsMatch(PROPER_PASSWORD, EMPTY_PASSWORD));
    EXPECT_FALSE(doPasswordsMatch(PROPER_PASSWORD, TOO_SHORT_PASSWORD));
}

TEST(checkPasswordTests, returnsPasswordsDoNotMatchForDifferentPasswords) {
    EXPECT_EQ(checkPassword(PROPER_PASSWORD, EMPTY_PASSWORD), ErrorCode::PasswordsDoNotMatch);  // equal ==
    EXPECT_EQ(checkPassword(EMPTY_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoNotMatch);
    EXPECT_EQ(checkPassword(TOO_SHORT_PASSWORD, PROPER_PASSWORD), ErrorCode::PasswordsDoNotMatch);
}

TEST(checkPasswordRulesTests, returnsValuesBetweenOkAndPasswordNeedsAtLeastOneUppercaseLetter) {
    EXPECT_GE(checkPasswordRules(EMPTY_PASSWORD), MIN_ALLOWED_ERROR_CODE);  // greater or equal >=
    EXPECT_LE(checkPasswordRules(EMPTY_PASSWORD), MAX_ALLOWED_ERROR_CODE);  // less or equal <=
    EXPECT_GE(checkPasswordRules(TOO_SHORT_PASSWORD), MIN_ALLOWED_ERROR_CODE);
    EXPECT_LE(checkPasswordRules(TOO_SHORT_PASSWORD), MAX_ALLOWED_ERROR_CODE);
}

TEST(checkPasswordTests, returnsValuesBetweenOkAndPasswordNeedsAtLeastOneUppercaseLetter) {
    EXPECT_GE(checkPassword(PROPER_PASSWORD, PROPER_PASSWORD), MIN_ALLOWED_ERROR_CODE);
    EXPECT_LE(checkPassword(PROPER_PASSWORD, PROPER_PASSWORD), MAX_ALLOWED_ERROR_CODE);
}

TEST(checkPasswordRulesTests, returnsPasswordNeedsAtLeastOneSpecialCharacter) {
    EXPECT_EQ(checkPassword(DOES_NOT_CONTAIN_SPECIAL, DOES_NOT_CONTAIN_SPECIAL), ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
}

TEST(checkPasswordRulesTests, returnsPasswordNeedsAtLeastOneUppercaseLetter) {
    EXPECT_EQ(checkPassword(DOES_NOT_CONTAIN_UPPER, DOES_NOT_CONTAIN_UPPER), ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
}

TEST(checkPasswordRulesTests, returnsPasswordNeedsAtLeastOneNumber) {
    EXPECT_EQ(checkPassword(DOES_NOT_CONTAIN_NUMBER, DOES_NOT_CONTAIN_NUMBER), ErrorCode::PasswordNeedsAtLeastOneNumber);
}

TEST(checkPasswordRulesTests, returnsPasswordNeedsAtLeastNineCharacters) {
    EXPECT_EQ(checkPassword(TOO_SHORT_PASSWORD, TOO_SHORT_PASSWORD), ErrorCode::PasswordNeedsAtLeastNineCharacters);
}

TEST(getErrorMessageTests, returnsErrorCodeAsString) {
    EXPECT_EQ(getErrorMessage(ErrorCode::Ok), "Ok");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastNineCharacters), "Password needs to have at least nine characters");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneNumber), "Password needs to have at least one number");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter), "Password needs to have at least one special character");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter), "Password needs to have at least one uppercase letter");
    EXPECT_EQ(getErrorMessage(ErrorCode::PasswordsDoNotMatch), "Passwords do not match");
}
