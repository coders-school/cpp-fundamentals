#include <iostream>
#include <list>
#include <vector>

std::list<int> createSortedList(const std::vector<int>& vec) {
    std::list<int> list(vec.begin(), vec.end());
    list.sort();

    return list;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
