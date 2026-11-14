# Calculate

Zaimplementuj funkcję, której zadaniem ma być wykonywanie działań arytmetycznych na dwóch liczbach.

Sygnatura - `std::string calculate(const std::string& command, int first, int second)`.

## Parametry

* `const std::string& command` - rodzaj działania. Jedno z `add`, `subtract`, `multiply`, `divide`
* `int first` - pierwsza liczba
* `int second` - druga liczba

## Wartość zwracana

* `std::string` - wynik działania jako tekst

W przypadku podania błędnego parametru `command` funkcja powinna zwrócić napis "Invalid data".

Przy dzieleniu przez 0 funkcja powinna zwrócić napis "Division by 0".

## Przykłady użycia

```cpp
auto result = calculate("add", 2, 3);  // result = "5"
result = calculate("multiply", 2, 3);  // result = "6"
result = calculate("hello", 2, 3);     // result = "Invalid data"
result = calculate("divide", 5, 0);    // result = "Division by 0"
```
