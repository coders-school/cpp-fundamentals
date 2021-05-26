#include "gtest/gtest.h"
#include "validation.hpp"

const std::string PROPER_PASSWORD = "abcABC123!@#";
const std::string TOO_FEW_CHARS = "aA1!";
const std::string MISSING_NUMBERS = "abcABC!@#";
const std::string MISSING_SPECIAL_CHARS = "abcABC123";
const std::string MISSING_UPPERCASE = "abc123!@#";
const std::string MIS_U = "***q111000l";
const std::string PROPER_PASSWORD_b = "Rt$44pAm*23";
const std::string TOO_FEW_CHARS_b = "";
const std::string MISSING_NUMBERS_b = "aaaaaaaB!!!!!!";



TEST(checkPasswordRulesBonusTests, returnProperErrorCodes) {
    EXPECT_EQ(checkPasswordRules(PROPER_PASSWORD), ErrorCode::Ok);
    EXPECT_EQ(checkPasswordRules(TOO_FEW_CHARS), ErrorCode::PasswordNeedsAtLeastNineCharacters);
    EXPECT_EQ(checkPasswordRules(MISSING_NUMBERS), ErrorCode::PasswordNeedsAtLeastOneNumber);
    EXPECT_EQ(checkPasswordRules(MISSING_SPECIAL_CHARS), ErrorCode::PasswordNeedsAtLeastOneSpecialCharacter);
    EXPECT_EQ(checkPasswordRules(MISSING_UPPERCASE), ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
    EXPECT_EQ(checkPasswordRules(MIS_U), ErrorCode::PasswordNeedsAtLeastOneUppercaseLetter);
    EXPECT_EQ(checkPasswordRules(PROPER_PASSWORD_b), ErrorCode::Ok);
    EXPECT_EQ(checkPasswordRules(TOO_FEW_CHARS_b), ErrorCode::PasswordNeedsAtLeastNineCharacters);
    EXPECT_EQ(checkPasswordRules(MISSING_NUMBERS_b), ErrorCode::PasswordNeedsAtLeastOneNumber);
}
