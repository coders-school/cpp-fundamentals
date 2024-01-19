#include <iostream>
#include <vector>
#include <list>

std::vector<int> createSortedList(std::vector<int> incoming) {
    size_t i, j, k;
    auto it = incoming.begin();
    int container1, container2;
    for (i = 0; i < incoming.size(); ++i)
        for (j = (incoming.size()-1); j > i; --j) {
            it = incoming.begin();
            for (k = 0; k < j; ++k) {
                ++it;
            }
            container1 = *it;
            it = incoming.begin();
            for (k = 0; k < j-1; ++k) {
                ++it;
            }
            container2 = *it;
            if (container1 < container2) {
                it = incoming.begin();
                for (k = 0; k < (j); ++k) {
                    ++it;
                }
                *it=container2;
                it = incoming.begin();
                for (k = 0; k < (j-1); ++k) {
                    ++it;
                }
                *it=container1;
            }
        }
    return incoming;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
