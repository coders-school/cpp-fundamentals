int checkPassword(std::string firstpassword, std::string secondpassword) {
    if (!doPasswordsMatch(firstpassword, secondpassword))
        return static_cast<int>(Error::PasswordsDoNotMatch);
    else
        return checkPasswordRules(firstpassword);
}
