#include <iostream>
#include <vector>
#include <list>

std::list<int> createSortedList(std::vector<int> vec){
    std::list<int> listed_vec;
    for (const auto& el : vec){
        listed_vec.push_back(el);
    }
    listed_vec.sort();
    return listed_vec;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
