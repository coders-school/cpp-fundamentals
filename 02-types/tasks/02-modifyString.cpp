#include <iostream>
#include <string>

void modifyString (std::string& word)
{
    word = "Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
