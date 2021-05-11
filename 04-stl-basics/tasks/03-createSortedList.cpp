#include <iostream>
#include <vector>
#include <list>

// Implement createSortedList
// add proper include :)
auto createSortedList(std::vector<int> input){
	std::list<int> lista {};
	for(auto el : input){
		lista.push_back(el);
	}
	lista.sort();
	return lista;
}


int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto lista = createSortedList(vec);

    for (const auto& el : lista)
        std::cout << el << " ";

    return 0;
}
