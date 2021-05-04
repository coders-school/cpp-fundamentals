#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>

std::map<int, std::string> createMap(const std::vector<int>& vec,
                                     const std::list<std::string>& list) {
    if (list.size() != vec.size()) {
        return {};
    }
    std::map<int, std::string> map;
    auto list_it = list.begin();
    for (size_t i = 0; i < vec.size(); ++i) {
        map[vec[i]] = *list_it++;
    }

    return map;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
