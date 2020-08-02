<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Wstęp do STLa

### Algorytmy i iteratory

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

Wróćmy na chwilę do iteratorów begin oraz end. Jak pamiętamy zwracały one początek i koniec naszego kontenera np. std::vector.
tak naprawdę to begin i end zwraca nam iterator wskazujący na 1 element naszego kontenera oraz na element znajdujący się tuż za ostatnim elementem. (tutaj zdjęcie kilku kwadracików i zaznaczone na co wskazuje begin a na co end).

Czym jest iterator? Najprościej jest to element, który wskazuje nam na element kontenera. Możemy go swobodnie inkrementować, czyli przesuwać się do kolejnych elementów kontenera. Rozróżniamy kilka typów iteratorów ale na ten moment będziemy zajmować się tylko jednym.
Ma on nazwę random acces iterator. Dla nas ważne jest to, że taki iterator może swobodnie odwoływać się do dowolnego elementu w naszym kontenerze. Random itarator otrzymujemy między innymi gdy wywołamy begin lub end dla std::vector. Aby odwołać się do elementu, na który wskazuje iterator używamy `*`.

Co zostanie wypisane w kolejnych linijkach?
```
  std::vector<int> vec {1, 2, 3, 4, 5, 6};
  auto random_iterator = vec.begin();
  std::cout << *random_iterator;
  ++random_iterator;
  std::cout << *random_iterator;
  random_iterator += 2;
  std::cout << *random_iterator;
```

Biblioteka STL posiada ponad 100 algorytmów, jednym z nich są:
  *std::sort, 
  *find, 
  *all_of,
  *any_off,
  *fill,
  *min_max_element;
  *for_each.
 
 Wszystkie algorytmy działają dla iteratorów np.:
 ```
  template< class RandomIt >
  void sort( RandomIt first, RandomIt last );
```
Algorytm sort wymaga 2 iteratorów w celu posortowania kontenera. Najczęściej początek i koniec zakresu. Wywołanie takiego algorytmu wygląda następująco:
```
  int main()
  {
      std::vector<int> vec = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3}; 

      std::sort(vec.begin(), vec.end());
      for (auto element : vev) {
          std::cout << element << " ";
      }   
      std::cout << '\n';
  }
```
Posortowanie jest naprawdę proste. Ciekawostka dla tych, którzy zastanawiają się, dlaczego nie można dać po prostu std::sort(vec).
Komisji standaryzacyjnej zajęło to kilkanaście lat zanim zauważyli, że taka opcja jest przydatna i jest ona dostępna dopiero w standardzie C++20.

- Pytanie: Jaką konstrukcje może mieć std::find?

```
template< class InputIt, class T >
InputIt find( InputIt first, InputIt last, const T& value );
```

- Pytanie: Jak wywołać taki algorytm?

```
int main()
{
    int n1 = 3;
    int n2 = 5;
 
    std::vector<int> v{0, 1, 2, 3, 4};
 
    auto result1 = std::find(std::begin(v), std::end(v), n1);
    auto result2 = std::find(std::begin(v), std::end(v), n2);
 
    if (result1 != std::end(v)) {
        std::cout << "v contains: " << n1 << '\n';
    } else {
        std::cout << "v does not contain: " << n1 << '\n';
    }
 
    if (result2 != std::end(v)) {
        std::cout << "v contains: " << n2 << '\n';
    } else {
        std::cout << "v does not contain: " << n2 << '\n';
    }
}
```

W powyższym kodzie można zauważyć linijkę `result1 != std::end(v)` jest to nic innego jak sprawdzenie, czy liczba została znaleziona.
Algorytm zwraca `std::end` gdy nie znajdzie żadnego elementu. 

- Pytanie: Jaką konstrukcje może mieć `all_of` oraz `any_of` ?

```
template< class InputIt, class UnaryPredicate >
bool all_of( InputIt first, InputIt last, UnaryPredicate p );
```
```
template< class InputIt, class UnaryPredicate >
bool any_of( InputIt first, InputIt last, UnaryPredicate p );
```

UnaryPredicate -> określa warunek jaki musi zostać spełniony. Np. Chcemy sprawdzić czy wszystkie liczby są mniejsze od 10 możemy sobie napisać funkcję: `bool isLessThen5(int num) { return num < 5; }`
Gdy chcemy sprawdzić, czy żadna liczba nie jest większa od 10 możemy napisać funkcję: `bool isGreaterThen10(int num) { return num > 10; }`

Przykład użycia:
```
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

bool isLessThen5(int num) { return num < 5; }
bool isGreaterThen10(int num) { return num > 10; }

int main() {
  std::vector<int> vec{1, 2, 3, 4, 5, 6};
  
  if (std::all_of(vec.begin(), vec.end(), isLessThen5)) {
    std::cout << "Every numbers in vector are less then 5\n";
  } else {
    std::cout << "Some numbers in vector aren't less then 5\n";
  }

  if (std::none_of(vec.begin(), vec.end(), isGreaterThen10)) {
    std::cout << "None of numbers in vector are grater then 10\n";
  } else {
    std::cout << "Some numbers in vector are grater then 10\n";
  }

}
```

- Pytanie: Jaka konstrukcje może mieć algorytm std::fill?
```
template< class ForwardIt, class T >
void fill( ForwardIt first, ForwardIt last, const T& value );
```

Algorytm fill wypełnia cały zakres kontenera jakąś liczbą.
- Pytanie: Jak wypełnić wektor 10 elementami równymi 5?
```
  int main() {
      std::vector<int> v(10);
      std::fill(v.begin(), v.end(), 5);

      for (auto elem : v) {
          std::cout << elem << " ";
      }
      std::cout << "\n";
  }
```

- Pytanie:, Jaka konstrukcje może mieć algorytm min_max_element?
```
template< class ForwardIt >
std::pair<ForwardIt,ForwardIt>
    minmax_element( ForwardIt first, ForwardIt last );
```
- Pytanie: Jak znaleźć w std::vector najmiejszy i największy element?
```
  int main() {
      const auto v = { 3, 9, 1, 4, 2, 5, 9 };
      const auto [min, max] = std::minmax_element(begin(v), end(v));

      std::cout << "min = " << *min << ", max = " << *max << '\n';
  }
```

- Pytanie: Jaka konstrukcje może mieć algorytm std::for_each?
```
template< class InputIt, class UnaryFunction >
UnaryFunction for_each( InputIt first, InputIt last, UnaryFunction f );
```
- Pytanie: Jak może wyglądać predykat dla takiego algorytmu?
```
void(Type& element) {
  do_sth_with_element(element);
}
```
- Pytanie: Jak dodać do każdego elementu wektora liczbę 1?
```

void plus1(int& element) { element += 1; }

int main() {
    std::vector<int> vec {1,2,3,4,5};
    std::for_each(vec.begin(), vec.end(), plus1);
}
```
- Pytanie a jak wypisać jego elementy?
```

void plus1(int& element) { element += 1; }
void print(const int& element) { std::cout << element << '\n'; }

int main() {
    std::vector<int> vec {1,2,3,4,5};
    std::for_each(vec.begin(), vec.end(), plus1);
    std::for_each(vec.begin(), vec.end(), print);
}
```
