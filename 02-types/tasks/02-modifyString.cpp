#include <iostream>
#include <string>

std::string modifyString(std::string& string)
{
    return string = "Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
