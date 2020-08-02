# Praca domowa

___

## Zadanie 1

Zaimplementuj funkcję, której zadaniem ma być wykonywanie działań arytmetycznych na dwóch liczbach.

Sygnatura - `std::string calculate(const std::string& command, int first, int second)`.

### Parametry

* `const std::string& command` - rodzaj działania. Jedno z `add`, `subtract`, `multiply`, `divide`
* `int first` - pierwsza liczba
* `int second` - druga liczba

### Wartość zwracana

* `std::string` - wynik działania jako tekst

W przypadku podania błędnego parametru `command` funkcja powinna zwrócić napis "Invalid data".

### Przykłady użycia

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

### Implementacja

Zmodyfikuj jedynie plik `calculate.hpp`. Reszty plików nie modyfikuj, chyba że chcesz się po prostu pobawić tym projektem :)

Plik `main.cpp` zawiera funkcję główną. Jeśli chcesz manualnie przetestować swój program po skompilowaniu go uruchom `./calculate`

Plik `test.cpp` zawiera testy. Testy uruchamia się wpisując `ctest -V` po skompilowaniu. Przełącznik `-V` powoduje, że wyświetlane są informacje o testach, które przeszły lub nie.

___

## Zadanie 2 - Fibonacci

Zaimplementuj dwie funkcje. Obie mają liczyć n-tą liczbę [ciągu Fibonacciego](https://pl.wikipedia.org/wiki/Ciąg_Fibonacciego), ale na odmienne sposoby.

* iteracyjnie (z użyciem pętli)
* rekurencyjnie (funkcja ma wołać samą siebie)

Funkcje muszą mieć określone sygnatury:

```cpp
int fibonacci_iterative(int sequence);
int fibonacci_recursive(int sequence);
```

___

## Dostarczenie zadań

1. Zrób fork repo [kurs_cpp_podstawowy](https://github.com/coders-school/kurs_cpp_podstawowy)
2. Ściągnij swój fork - `git clone https://github.com/YOURNICK/kurs_cpp_podstawowy.git`
3. Przejdź do katalogu kurs_cpp_podstawowy - `cd kurs_cpp_podstawowy`
4. Utwórz gałąź o nazwie `calculate` na rozwiązanie zadania calculate - `git checkout -b calculate`
5. Przejdź do katalogu module1/homework/calculate - `cd module1/homework/calculate`
6. Tutaj znajduje się szkielet programu, który musisz wypełnić. Szkielet programu zawiera już testy, które sprawdzą, czy Twoja implementacja jest poprawna. Zanim rozpoczniesz implementację wpisz następujące zaklęcia:

```bash
mkdir build   # tworzy katalog build
cd build      # przechodzi do katalogu build
cmake ..      # generuje system budowania wg przepisu z pliku ../CMakeLists.txt
make          # kompiluje
ctest -V      # odpala testy
```

7. Zaimplementuj funkcjonalność (najlepiej po kawałku, np. zacznij od samego dodawania)
8. Sprawdź, czy implementacja przechodzi testy - `make` (kompilacja) oraz `ctest -V` (uruchomienie testów)
9. Zrób commit z opisem działającej funkcjonalności - `git commit -am"adding works"`
10. Wróć do punktu 7 i zaimplementuj kolejny kawałek. Jeśli rozwiązanie przechodzi wszystkie testy przejdź do kolejnego punktu
11. Wypchnij zmiany do swojego forka - `git push origin calculate`
12. Wyklikaj Pull Request na GitHubie.
13. Poczekaj chwilę na raport Continuous Integration (CI), aby sprawdzić, czy rozwiązanie kompiluje się i przechodzi testy także na GitHubie.
14. Jeśli jest ✅ - brawo, rozwiązanie jest poprawne. Jeśli jest ❌ kliknij na niego i sprawdź opis błędu. Popraw go (punkty 7-11) i poczekaj na kolejny raport CI.

___

## Dostarczenie kolejnych zadań

Najpierw wróć na gałąź główną - `git checkout master` i postępuj od kroku 4 dla kolejnego zadania (stworzenie nowej gałęzi o innej nazwie)

Możesz zaobserwować, że przełączenie się na inną gałąź spowodowało, że nie masz rozwiązania pierwszego zadania. Spokojnie, jest ono po prostu na innej gałęzi. Możesz do niego wrócić przechodząc na gałąź tego zadania - `git checkout nazwa`.
