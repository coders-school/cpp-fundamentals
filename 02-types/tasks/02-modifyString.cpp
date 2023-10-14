#include <iostream>
#include <string>

void modifyString(std::string &string){
    string = "Other string";
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
