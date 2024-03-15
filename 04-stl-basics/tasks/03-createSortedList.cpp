#include <iostream>
#include <vector>
#include <list>

auto createSortedList(std::vector<int> vec)
{
    std::list<int> list;
    for(int el : vec)
    {
        list.push_back(el);
    }
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
