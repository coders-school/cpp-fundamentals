#include <iostream>
#include <vector>

// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.

std::vector<int> concatenateVector(std::vector<int>& Vector_1, std::vector<int>& Vector_2){

        std::vector<int> zip;
        std::vector<int> First;
        std::vector<int> Second;
        int max = 0; //initialize max as size of biger vector
        //Check Which vector is longer and set as max
        if (Vector_1.size() < Vector_2.size()){
                max = Vector_2.size();
                First = Vector_2;
                Second = Vector_1;
        } else {
                max = Vector_1.size();
                First = Vector_1;
                Second = Vector_2;
        }

        for (int i = 0; i != max; i++) {
                zip.push_back(First[i]); //Add element from first vector
                if (i <= Second.size()){
                        zip.push_back(Second[i]);
                }
        }
                        // do sth on element

        return zip;
}

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
