#pragma once
#include <string>

namespace {
    const std::string addCommand = "add";
}

std::string calculate(const std::string &command, int first, int second) {
  if (command == addCommand) {
    return std::to_string(first + second);
  }
  return "Invalid data";
}
