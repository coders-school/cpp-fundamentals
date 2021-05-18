#pragma once
#include <string>

namespace {
const std::string addCommand = "add";
const std::string subtractCommand = "subtract";
const std::string multiplyCommand = "multiply";
} // namespace

std::string calculate(const std::string &command, int first, int second) {
  if (command == addCommand) {
    return std::to_string(first + second);
  } else if (command == subtractCommand) {
    return std::to_string(first - second);
  } else if (command == multiplyCommand) {
    return std::to_string(first * second);
  }
  return "Invalid data";
}
