#include <iostream>
#include <vector>

// Implement createSortedList
// add proper include :)
 list <int> createSortedList(vector<int> vec){
 list <int> myList;

    for (size_t i =0; i<vec.size(); i++){
    myList.push_back(vec[i]);
     }
myList.sort();
return myList;
}

int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
