#include "vectorFunctions.hpp"

//wygeneruje wektor wspóldzielonych wskazników na liczby od 0 do count
std::vector<std::shared_ptr<int>> generate(int count){
  std::vector<std::shared_ptr<int>> newVector;
  
  for (auto i = 0; i < count; ++i){
    auto num = std::make_shared<int>(i);
    newVector.push_back(num);
  }
  return newVector;
}

//przyjmie wektor i wypisze wszystkie elementy ze wskazników wektora
void print(std::vector<std::shared_ptr<int>> passedVector){
  for(auto& element : passedVector){
    std::cout << *element << "\t";
  }
  std::cout << std::endl;
}

//przyjmie wektor i doda do kazdej liczby 10
void add10(std::vector<std::shared_ptr<int>> passedVector){
  for(auto& element : passedVector){
    if(element != nullptr){
      *element += 10;
    }
  }
}

//która przyjmie staly wskaznik na int i odejmie od tego elementu 10
void sub10(int* const input){
  if(input != nullptr){
    *input -= 10;
  }
}

//przyjmie wektor wspóldzielonych wskazników i wywola dla kazdego elementu powyzsze przeciazenie funkcji sub10()
void sub10(std::vector<std::shared_ptr<int>> passedVector){
  for(auto& element : passedVector){
    sub10(element.get());
  }
}