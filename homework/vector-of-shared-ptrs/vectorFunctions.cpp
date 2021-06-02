#include <iostream>
#include <memory>
#include <vector>

std::vector<std::shared_ptr<int>> generate(int count){
  std::vector<std::shared_ptr<int>> vector;
  for(size_t i = 0; i < count; ++i){
    vector.push_back(std::make_shared<int>(i));
  }
  return vector;
}

void print(std::vector<std::shared_ptr<int>> vector){
    for(const auto& el:vector){
        std::cout << *el << " ";
    }
    std::cout << "\n";
}

void add10(std::vector<std::shared_ptr<int>> vector){
    for(auto& el:vector){
        if(el){
            *el += 10;
        }
    }
}

void sub10(int * const ptr){
    if(ptr){
        *ptr -= 10;
    }
}

void sub10(std::vector<std::shared_ptr<int>> vector){
    for(auto& el:vector){
        if(el){
            sub10(el.get());
        }
    }
}