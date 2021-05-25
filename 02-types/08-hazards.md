<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Zagrożenia

### w stosowaniu referencji i wskaźników

<a href="https://coders.school">
    <img width="500" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Puste wskaźniki

```cpp
int* a = nullptr;
std::cout << *a;
```

Dostęp do zmiennej wskazywanej przez pusty wskaźnik to niezdefiniowane zachowanie.
<!-- .element: class="fragment fade-in" -->

Pusty wskaźnik oznaczamy zawsze używając `nullptr`.
<!-- .element: class="fragment fade-in" -->

Nie używamy `NULL` znanego z języka C lub wcześniejszych standardów, bo jest on mniej bezpieczny.
<!-- .element: class="fragment fade-in" -->

```cpp
void foo(int);
foo(NULL);     // bad - no error
foo(nullptr);  // good - compilation error
```
<!-- .element: class="fragment fade-in" -->

___

## Niezainicjalizowane wskaźniki

```cpp
int* a;
std::cout << *a;
```

Wskaźnik `a` zawiera tzw. śmieci.
Dostęp do obiektu wskazywanego przez taki wskaźnik to niezdefiniowane zachowanie.
<!-- .element: class="fragment fade-in" -->

___

## Odwołania do usuniętych zmiennych

Jak już dobrze wiemy, zmienne lokalne są usuwane po wyjściu z zakresu, w którym je utworzyliśmy.
Można już domyślać się, jakie problemy sprawią nam wskaźniki i referencje, gdy będą dalej istniały, a obiekt, do którego się odwołują już zostanie zniszczony.
Będzie to w najlepszym przypadku <span class="fragment highlight-red">„crash”</span>, w najgorszym <span class="fragment highlight-red">„undefined behaviour”</span>.

### Jak zapobiegać takim przypadkom?
<!-- .element: class="fragment fade-in" -->

Zawsze musimy zapewnić, aby czas życia zmiennej, był dłuższy niż czas życia jej wskaźnika, czy referencji.
<!-- .element: class="fragment fade-in" -->

___

## Usunięte zmienne - przykład

```cpp
std::vector<int*> vec;

void createAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
        vec.push_back(&i);
    }
    // local variable i does not exist here anymore
    // vec contains addresses to not existing local variables
}

int main() {
    createAndAddToVec(5);
    for (const auto& el : vec) {
        std::cout << *el << '\n';   // UB
    }
}
```

___

## Jak sobie poradzić z takim problemem?

Odpowiedzią może być dynamicznie alokowana pamięć.
<!-- .element: class="fragment fade-in" -->

Najprościej jest to osiągnąć używając biblioteki `#include <memory>`, która posiada `std::shared_ptr<T>`.
<!-- .element: class="fragment fade-in" -->

Wskaźnik ten nie bez powodu nazywany jest _inteligentnym_. Odpowiada on za zarządzanie dynamiczną pamięcią i sam zwalnia zasób, gdy już go nie potrzebujemy.
<!-- .element: class="fragment fade-in" -->

### Jak taki wskaźnik utworzyć?
<!-- .element: class="fragment fade-in" -->

```cpp
auto ptr = std::make_shared<int>(5);  // preferred
auto ptr = std::shared_ptr<int>(new int{5});
```
<!-- .element: class="fragment fade-in" -->

___

## Poprawiony listing

```cpp
std::vector<std::shared_ptr<int>> vec; // previously: std::vector<int*> vec;

void createAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
        vec.push_back(std::make_shared<int>(i));
        // previously: vec.push_back(&i);

        // the same in 2 lines:
        // auto num = std::make_shared<int>(i);
        // vec.push_back(num);
    }
}

int main() {
    createAndAddToVec(5);
    for (const auto& el : vec) {
        std::cout << *el << '\n';
    }
}
```

___
<!-- .slide: style="font-size: 0.85em" -->

## Zadanie

Napisz funkcję `foo()`. Ma ona przyjmować shared_ptr na int i ma przypisać wartość 20 do wskazywanego przez niego obiektu.

Ponadto `foo()` ma wyświetlić wartość inta wskazywanego przez wskaźnik oraz liczbę shared_ptrów, które wskazują na ten obiekt.

Wyświetl także to samo w `main()` przed i po zawołaniu `foo()`. [Pobierz zadanie][zadanie-domowe]

```cpp
#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    foo(number);
    // display the value under number pointer and use_count() of it

    return 0;
}
```

[zadanie-domowe]: ../02-types/tasks/04-sharedPtr.cpp

___

## Inteligentne wskaźniki rozwiązaniem wszystkich problemów?

Teraz po utworzeniu inteligentnego wskaźnika, nie musimy się martwić o czas życia zmiennej.
Możemy spokojnie po wyjściu z funkcji wypisać te wartości.
<!-- .element: class="fragment fade-in" -->

Jeżeli funkcja potrzebuje przyjąć zwykły wskaźnik (ang. raw pointer), czyli np. `int* i` możemy to zrobić
używając funkcji `std::shared_ptr::get()` jak na przykładzie:
<!-- .element: class="fragment fade-in" -->

```cpp
void foo(int* num) {
    do_sth(num);
}

int main() {
    auto ptr = std::make_shared<int>(5);
    foo(ptr.get())
}
```
<!-- .element: class="fragment fade-in" -->

___
<!-- .slide: style="font-size: 0.9em" -->

## Pułapka powraca

```cpp
void foo(int* num) {
    if (num) {
        do_sth(num);
    }
}

int main() {
    auto ptr = std::make_shared<int>(5);
    int* raw = ptr.get();
    ptr.reset();    // delete object, deallocate memory
    foo(raw);       // problem, dangling pointer is passed
    foo(ptr.get()); // not a problem, nullptr is passed
}
```

Jeżeli wszystkie obiekty `shared_ptr<T>` odwołujące się do tej zmiennej zostaną usunięte, to zasób zostanie zwolniony.
<!-- .element: class="fragment fade-in" -->

Nasz zwykły wskaźnik, który pobraliśmy wcześniej za pomocą `get()`, będzie posiadał adres do nieistniejącego już zasobu.
<!-- .element: class="fragment fade-in" -->

Próba jego użycia spowoduje UB lub crash. Należy bardzo uważać na zwykłe wskaźniki.
<!-- .element: class="fragment fade-in" -->

___

## Wnioski

* <!-- .element: class="fragment fade-in" --> wskaźniki mogą nie wskazywać na nic (<code>nullptr</code>), referencje muszą wskazywać na jakiś wcześniej stworzony obiekt
* <!-- .element: class="fragment fade-in" --> wskaźniki i referencje mogą być niebezpieczne (częściej wskaźniki), jeśli są powiązane z nieistniejącymi już obiektami
  * są to tzw. dangling pointers/references, wiszące wskaźniki/referencje
* <!-- .element: class="fragment fade-in" --> referencji nie można przypisać innego obiektu niż ten podany podczas jej inicjalizacji
* <!-- .element: class="fragment fade-in" --> wskaźnikom można przypisać nowe adresy, aby wskazywały inne obiekty (za wyjątkiem stałych wskaźników)
* <!-- .element: class="fragment fade-in" --> lepiej domyślnie nie używać zwykłych wskaźników (raw pointers)
* <!-- .element: class="fragment fade-in" --> lepiej stosować inteligentne wskaźniki

___

## Zadanie

Napisz funkcję `calculateProduct()`. Ma ona przyjąć 2 wartości typu `int` oraz zwrócić ich iloczyn jako `shared_ptr`. Sprawdź ilu właścicieli posiada `shared_ptr`. [Pobierz zadanie][zadanie-domowe2]

```cpp
#include <iostream>

// TODO: Implement calculateProduct()
// It should take 2 int values and return their product as a shared_ptr.
// Additionally, check how many owners are there.

int main() {
    auto number = calculateProduct(10, 20);
    std::cout << "num: " << *number << " | owners: " << number.use_count() << "\n";

    return 0;
}
```

[zadanie-domowe2]: ../02-types/tasks/05-calculateProduct.cpp
