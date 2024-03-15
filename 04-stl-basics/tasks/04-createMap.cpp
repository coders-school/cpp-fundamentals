#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

auto createMap(std::vector<int> vec, std::list<std::string> list)
{
    std::map<int, std::string> map; auto it=list.begin();
    for(int el : vec)
    {   
        map[el]=*it;
        ++it;
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
