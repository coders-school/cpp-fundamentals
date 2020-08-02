#include <iostream>
#include <string>

void foo(std::string& text) {
    text = "Other string";
}

int main() {
    std::string str("Some string");
    foo(str);
    std::cout << str << '\n';
    return 0;
}
