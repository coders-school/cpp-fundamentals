#include <iostream>
#include <vector>
#include <list>
// Implement createSortedList
// add proper include :)

std::list<int> createSortedList(std::vector<int> & Vec){
        std::list<int> myList(Vec.begin(), Vec.end());;
        myList.sort();

        return myList;

}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list){
        std::cout << el << " ";
    }
    std::cout << "\n";

    return 0;
}
