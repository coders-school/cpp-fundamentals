#include <iostream>
#include <string>

void modifyString(std::string&);

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}

void modifyString(std::string& str){

    str = "Other string";

}
