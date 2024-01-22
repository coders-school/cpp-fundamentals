#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

auto createMap (std::vector<int> vecin, std::list<std::string>  listin) {
    size_t i, j, k;
    i = vecin.size();
    j = listin.size();
    std::map<int, std::string> mapout;
    if (i == j) {
        for (i = 0; i < j; ++i) {
            auto it = listin.begin();
            for (k = 0; k < i; ++k) {
                ++it;
            }
            mapout.insert({vecin[i], *it});
        }
    }
    else if (i > j ) {
        for (i = 0; i < j; ++i) {
            auto it = listin.begin();
            for (k = 0; k < i; ++k) {
                ++it;
            }
            mapout.insert({vecin[i], *it});
        }
        std::cout << "More vector than list."<< '\n';
    }
    else {
        for (j = 0; j < i; ++j) {
            auto it = listin.begin();
            for (k = 0; k < j; ++k) {
                ++it;
            }
            mapout.insert({vecin[j], *it});
        }
        std::cout << "More list than vector."<< '\n';
    }
    return mapout;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
