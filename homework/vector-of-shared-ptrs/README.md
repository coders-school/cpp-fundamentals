# Vector Of Shared Pointers

Napisz program, który zawierać będzie 5 funkcji. Deklaracje powinny znaleźć się w pliku nagłówkowym `vectorFunctions.hpp`, a implementacje w pliku źródłowym `vectorFunctions.cpp`. Stwórz te pliki.

* `std::vector<std::shared_ptr<int>> generate(int count)` która wygeneruje wektor współdzielonych wskaźników na liczby od `0` do `count`
* `void print()` która przyjmie wektor i wypisze wszystkie elementy ze wskaźników wektora
* `void add10()` która przyjmie wektor i doda do każdej liczby `10`
* `void sub10()` która przyjmie stały wskaźnik na `int` i odejmie od tego elementu `10`
* `void sub10()` Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji `sub10()`

## Przykład użycia

```cpp
int main() {
    auto vec = generate(10);
    print(vec);
    add10(vec);
    print(vec);
    sub10(vec);
    print(vec);
}
```
