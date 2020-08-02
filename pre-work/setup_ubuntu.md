1. Zainstaluj gita, g++, make

  * `sudo apt update`
  * `sudo apt install git`
  * `sudo apt install build-essential`
  * `sudo apt-get install manpages-dev`
  
2. Sprawdź, czy programy się zainstalowały. Komunikat `command not found` oznacza błąd w instalacji.

  * `git --version`
  * `g++ --version`
  * `make --version`

3. Zainstaluj Visual Studio Code

  * `sudo apt update`
  * `sudo apt install software-properties-common apt-transport-https wget`
  * `wget -q https://packages.microsoft.com/keys/microsoft.asc -O- | sudo apt-key add -`
  * `sudo add-apt-repository "deb [arch=amd64] https://packages.microsoft.com/repos/vscode stable main"`
  * `sudo apt update`
  * `sudo apt install code`

4. Uruchom VSC i zainstaluj rozszerzenia

  * C/C++
  * C++ Intellisense
  * CMake
  * CMake Tools

5. Zainstaluj CMake: 

  `sudo apt-get install cmake`
  
  lub wersja trudniejsza, gdy powyższe nie zadziała, czyli instalacja z archiwum:
  
  ```bash
  wget https://github.com/Kitware/CMake/releases/download/v3.15.2/cmake-3.15.2.tar.gz
  tar -zxvf cmake-3.15.2.tar.gz
  cd cmake-3.15.2
  ./bootstrap
  make
  sudo make install
  ```
  
6. Sprawdź, czy cmake się zainstalował: `cmake --version`

7. Budowanie kodu

  * utwórz plik zadanie1.cpp
  
  ```cpp
  #include<iostream>
  #include<string>

  int main() {
    std::cout << "Podaj swoje imie: ";
    std::string name;
    std::cin >> name;
    std::cout << "\nHello world! " << name << "\n";
    
    return 0;
  }
  ```
  
  * wpisz `g++ -std=c++17 zadanie1.cpp -o zadanie1`
  * uruchom `./zadanie1`

8. Budowanie kodu za pomocą CMake

  * Utwórz plik CMakeLists.txt w tym samym katalogu co zadanie1.cpp i wpisz do niego
  
  ```
  cmake_minimum_required(VERSION 3.10)

  # Possible, that you don't need this 2 lines.
  set(CMAKE_C_COMPILER "/usr/bin/gcc")
  set(CMAKE_CXX_COMPILER "/usr/bin/g++")

  # set the project name
  project(Tutorial)

  # add the executable
  add_executable(Tutorial zadanie1.cpp)
  ```
  
  * Utwórz katalog build `mkdir build`
  * Przejdź do katalogu `cd build`
  * Uruchom cmake `cmake ..`
  * Zbuduj plik `make`
  * Uruchom program `./Tutorial`
