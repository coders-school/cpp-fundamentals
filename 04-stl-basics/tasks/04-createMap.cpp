#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

std::map<int, std::string> createMap(std::vector<int> vec, std::list<std::string> list){
    std::map<int, std::string> map;
    for (size_t i = 0; i < vec.size(); i++){
        map[vec[i]] = list.front();
        list.pop_front();
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
