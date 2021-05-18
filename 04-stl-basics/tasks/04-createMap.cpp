#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list

std::map<int,std::string> createMap(std::vector<int>,std::list<std::string> );

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5, 22, 6, 100, 0};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five", "Six", "dupa"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}

std::map<int,std::string> createMap(std::vector<int> v,std::list<std::string> l)
{
    std::map<int,std::string> m;
    auto l_ptr=l.begin();
    for (auto& el:v)
    {
        if (l_ptr==l.end()) break;
        m[el]=*l_ptr;
        l_ptr++;
    }
    return m;
}
