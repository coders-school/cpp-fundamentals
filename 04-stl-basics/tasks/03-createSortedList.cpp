#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

std::list<int> createSortedList(std::vector<int> vec) {
    std::list<int> resultList (vec.begin(), vec.end());
    resultList.sort();
    return resultList;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
