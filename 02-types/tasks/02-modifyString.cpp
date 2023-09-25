#include <iostream>
#include <string>

std::string modifyString(std::string& toModify) {
    toModify.assign("Other string");
    return toModify;
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
