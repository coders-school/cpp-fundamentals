#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::map<size_t, std::string> createMap(std::vector<int> vec, std::list<std::string> list) {
    std::map<size_t, std::string> resultMap;
    std::transform(vec.begin(), vec.end(), list.begin(), std::inserter(resultMap, resultMap.end()),
                    [](size_t kay, std::string const& info) {
                        return std::make_pair(kay, info);
                    });
    return resultMap;
}

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
