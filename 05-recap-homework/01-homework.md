<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Podsumowanie

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Co pamiętasz z ostatnich lekcji?

### Zapisz w notatkach do tej lekcji jak najwięcej haseł
<!-- .element: class="fragment fade-in" -->

1. <!-- .element: class="fragment fade-in" --> Typy danych
    * `void`, `bool`, `char`, `int`, `double` + ich odmiany
1. <!-- .element: class="fragment fade-in" --> Funkcje
    * sygnatura (deklaracja) = typ zwracany, nazwa, argumenty
1. <!-- .element: class="fragment fade-in" --> Instrukcje warunkowe
    * `if`, `switch/case`
1. <!-- .element: class="fragment fade-in" --> Pętle
    * `for`, `while`, `do/while`
1. <!-- .element: class="fragment fade-in" --> Tablice
    * `Type t[N]`, `operator[]`

___
<!-- .slide: style="font-size: 0.95em" -->

## Praca domowa

### Post-work

<!-- * Jeśli nie wiesz czym jest `operator %` to się dowiedz. Przyda się do pracy domowej :) -->
* Poczytaj dokumentację [`std::string`](https://en.cppreference.com/w/cpp/string/basic_string). Znajdziesz tam m.in. opis funkcji `std::to_string`. Przyda się 🙂
* Calculate (6 XP)
* Fibonacci - rekurencja i iteracja (6 XP)
* NWD i NWW (6 XP)

Opisy za chwilę 🙂 Znajdziesz je też w repo [➡️ Zadania w repo](https://github.com/coders-school/cpp-fundamentals/tree/master/05-recap-homework)

#### Bonus za punktualność

* **19.05.2021 (środa)** to ostatni dzień na zebranie bonusowych punktów za punktualność
* **3 XP** wpadną Ci za każde zadanie dostarczone w terminie (razem aż 9 punktów)

___

### Pre-work

Wykonaj te zadania, aby lepiej przygotować się do kolejnych lekcji

* Poczytaj dokumentację typu [`std::vector`](https://en.cppreference.com/w/cpp/container/vector). Poklikaj na różne funkcje i patrz głównie na przykłady użycia na samym dole stron.
* Możesz przyjrzeć się plikom z testami w zadaniach i spróbować dopisać własne przypadki testowe

___
<!-- .slide: style="font-size: 0.75em" -->

## Calculate

Zaimplementuj funkcję, której zadaniem ma być wykonywanie działań arytmetycznych na dwóch liczbach.

Sygnatura - `std::string calculate(const std::string& command, int first, int second)`.

### Parametry

* `const std::string& command` - rodzaj działania. Jedno z `add`, `subtract`, `multiply`, `divide`
* `int first` - pierwsza liczba
* `int second` - druga liczba

### Wartość zwracana

* `std::string` - wynik działania jako tekst
* W przypadku podania błędnego parametru `command` funkcja powinna zwrócić napis "Invalid data".

### Przykłady użycia

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
```

___

## Fibonacci

Zaimplementuj dwie funkcje. Obie mają liczyć n-tą liczbę [ciągu Fibonacciego](https://pl.wikipedia.org/wiki/Ciąg_Fibonacciego), ale na odmienne sposoby.

* iteracyjnie (z użyciem pętli)
* rekurencyjnie (funkcja ma wołać samą siebie)

Funkcje muszą mieć określone sygnatury:

```cpp
int fibonacci_iterative(int sequence);
int fibonacci_recursive(int sequence);
```

___

## NWD (LCM) i NWW (GCD)

Zaimplementuj dwie funkcje:

* NWD, która ma liczyć Największy Wspólny Dzielnik 2 liczb
* NWW, która ma liczyć Najmniejszą Wspólną Wielokrotność 2 liczb.

Uważaj na nietypowe przypadki, takie jak `0` lub liczby ujemne.

### Przykład użycia

```cpp
std::cout << "NWW(255, 15) = " << NWW(255, 15) << "\n";
std::cout << "NWD(255, 15) = " << NWD(255, 15) << "\n";
```

___
<!-- .slide: style="font-size: 0.56em" -->

## Dostarczenie zadania `calculate`

1. Zrób fork repo [coders-school/cpp-fundamentals](https://github.com/coders-school/cpp-fundamentals)
2. Ściągnij swój fork - `git clone https://github.com/YOURNICK/cpp-fundamentals.git`
3. Przejdź do katalogu z repo cpp-fundamentals - `cd cpp-fundamentals`
4. Przełącz się na gałąź `calculate` - `git checkout calculate`
5. Przejdź do katalogu homework/calculate - `cd homework/calculate`
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
12. Wyklikaj Pull Request na GitHubie ze swojej gałęzi `calculate` do **`coders-school/cpp-fundamentals:calculate`**
13. Poczekaj chwilę na raport Continuous Integration (CI), aby sprawdzić, czy rozwiązanie kompiluje się i przechodzi testy na GitHubie.
14. Jeśli jest ✅ - brawo, rozwiązanie jest poprawne. Jeśli jest ❌ kliknij na niego i sprawdź opis błędu. Popraw go (punkty 7-11) i poczekaj na kolejny raport CI.

___

## Dostarczenie kolejnych zadań

Po prostu przełącz się na odpowiednią gałąź - `fibonacci` lub `nwd-nww`.

Możesz zaobserwować, że przełączenie się na inną gałąź spowodowało, że nie masz rozwiązania pierwszego zadania. Spokojnie, jest ono po prostu na innej gałęzi. Możesz do niego wrócić przechodząc na jego gałąź - `git checkout calculate`.

Pracę domową znajdziesz zawsze w katalogu homework.

Pull Request zgłoś na odpowiednią gałąź - `fibonacci` lub `nwd-nww`.

___

## Dlaczego działamy na gałęziach?

* Tak zazwyczaj pracuje się w gicie
* Gdy zadania są od siebie niezależne, powinny mieć oddzielne gałęzie
* Modyfikacja treści lekcji na gałęzi master nie robi problemów z integracją tych zmian na gałęziach
* Modyfikacja skryptów Continuous Integration, w celu ich ulepszenia nie wpływa na to, że trzeba ponownie puścić CI dla innych, niezależnych zadań
