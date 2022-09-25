#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <map>

std::map<int, std::string> createMap(std::vector<int> myVec, std::list<std::string> myList){
        std::map<int, std::string> myMap;
        auto it = myList.begin();

        if (myVec.size() == myList.size()){
                for (int i = 0; i < myVec.size(); i++) {
                        myMap[myVec[i]] = *it;
                        ++it;
                }
                return myMap;
        } else {
                myMap[1] = "Something goes wrong!";
                return myMap;
        }
}

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list


int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
