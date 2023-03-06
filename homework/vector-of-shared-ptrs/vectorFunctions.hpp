#pragma once
#include <memory>
#include <vector>

auto generate(int count) -> std::vector<std::shared_ptr<int>>;

auto print(std::vector<std::shared_ptr<int>> vector) -> void;

auto add10(std::vector<std::shared_ptr<int>> vector) -> void;

auto sub10(const std::shared_ptr<int> pointer) -> void;

auto sub10(std::vector<std::shared_ptr<int>> vector) -> void;
