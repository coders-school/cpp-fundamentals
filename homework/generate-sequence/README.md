# Generate Sequence

Napisz funkcję, która przyjmuje 2 argumenty:

* `int count`
* `int step`

oraz zwraca `std::vector<int>` posiadający `count` elementów i każdy z nich jest większy od poprzedniego o `step`. Pierwszy ma wynosić tyle, ile `step`.

## Przykład użycia

```cpp
auto result = generateSequence(5, 3);  // result = {3, 6, 9, 12, 15}
```
