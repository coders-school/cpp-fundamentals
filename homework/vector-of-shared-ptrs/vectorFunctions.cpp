#include "vectorFunctions.hpp"

auto generate(int count) -> std::vector<std::shared_ptr<int>> {
    std::vector<std::shared_ptr<int>> result_vector;
    for (int i = 0; i < count; i++) {
        result_vector.push_back(std::make_shared<int>(i));
    }
    return result_vector;
}

auto print(std::vector<std::shared_ptr<int>> vector) -> void {
}

auto add10(std::vector<std::shared_ptr<int>> vector) -> void {
}

auto sub10(int* const pointer) -> void {
}

auto sub10(std::vector<std::shared_ptr<int>> vector) -> void {
}
