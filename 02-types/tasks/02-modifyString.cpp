#include <iostream>
#include <string>

void modifyString(string & str)
{
str="Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
