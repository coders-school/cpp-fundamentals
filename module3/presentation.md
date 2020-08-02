# 0 Krótkie przypomnienie, co już wiemy

- Co zapamiętaliście z poprzednich zajęć?
- Co sprawiło największą trudność?
- Co najłatwiej było Wam zrozumieć?

# 1 Zasięg zmiennych

Zmienne lokalne są to zmienne, które są widziane w obrębię jakiegoś zakresu np.

```
{
  int local_variable = 5;
  ...
}
local_variable = 5 // error -> local_variable doesn't exists
```

Jeżeli utworzymy 2 zmienne o takiej samej nazwie, (co nie jest polecane) to kompilator będzie traktować
tą zmienna w zależności od zakresu w którym się do niej odwołujemy np.

```
int number = 5; 
{
  int number = 10;
  std::cout << number; // print 10
}
std::cout << number; // print 5
```

Zmienna globalna, jest widoczna dla wszystkich zakresów. Zawsze możemy się do niej odwołać np.

```
  int global_value = 5;
  
  void foo() {
    std::cout << global_value;
  }
  
  int main() {
    std::cout << global_value;
  }
```

# 2 Referencja i wskaźnik

## Referencja
Magiczny znaczek `&` oznacza referencję. Np -> int& num -> oznacza zmienną num, typu int&, czyli referencji na typ int.
No dobrze, ale czym jest referencja? Najprościej mówiąc, referencja odwołuje się do istniejącego obiektu.
Czyli jeżeli utworzymy obiekt `num` to poprzez referencje `int& reference = num` będziemy mogli się do niego bezpośrednio odwoływać.

Spójrzmy na fragment kodu.
```
  int number = 5;
  int& refer = number;

  std::cout << refer << '\n';   // 5
  std::cout << ++refer << "\n"; // 6
  std::cout << number << "\n";  // 6
```
Co zyskujemy w ten sposób? Nie musimy kopiować elementów. Wystarczy, że przekażemy referencje. W ten sposób możemy
swobodnie w wielu miejscach programu odczytywać wartość tej zmiennej, bez zbędnego jej kopiowania. 
Oczywiście referencja zajmuje 4 bajty w pamięci
zatem tworzenie referencji do typu int (4 bajty) nie zawsze ma sens, chyba, że chcemy zmodyfikować te element.
Przekazywanie argumentów przez referencje nabierze więcej sensu, kiedy poznamy już klasy i obiekty :).

Jak przekazać element przez referencje?
```
  void foo (int& num) {
    std::cout << num; // good
    num += 2; // good
  }
```
Gdy chcemy mieć pewność, ze nikt nie zmodyfikuje nam wartości (chcemy ja przekazać tylko do odczytu) dodajemy const
```
  void bar (const int& num) {
    std::cout << num; // good
    num += 2; // bad! num is const reference!
  }
```
Wywołanie funkcji to po prostu:
```
  int num = 5;
  foo(num);
  bar(num);
```

## Wskaźnik

Po za referencja istnieją także wskaźnik. Wskaźniki działają podobnie.
Wyobraźmy sobie, że planujemy wycieczkę na Majorkę. Pakujemy do walizki wszystkie potrzebne ciuchy, ładowarkę do telefonu,
laptopa ect. Wsiadamy do samolotu i lecimy. Na miejscu okazuje się, ze zapomnieliśmy jaki jest adres hotelu :(
W celu znalezienia go, musimy zadzwonić do biura podróży, poczekać na obsługę, następnie wytłumaczyć cała zawiłą historie aż 
w końcu po długim czasie otrzymujemy adres naszego hotelu. Proces zdobycia tych informacji był dla nas czasochłonny.
Wyobraźmy sobie jednak, że uprzednio zapisaliśmy sobie w telefonie adres naszego hotelu. Aby przypomnieć sobie, gdzie on się znajdował
wystarczy, że sprawdziliśmy sobie notatnik i już wiemy. Proces ten zajął nam dużo mniej czasu.
Podobnie jest w C++. Wskaźniki służą do wskazywania miejsca w pamięci, gdzie znajduje się pożądany przez nas obiekt.
Jeżeli funkcja przyjmuje wskaźnik, nie musi ona kopiować całej zawartości obiektu, (co jest czasochłonne), można dużo szybciej
wskazać gdzie ten obiekt już istnieje.

Jak przekazać element przez wskaźnik?
```
  void foo (int* num) {
    std::cout << *num; // good
    *num += 2; // good
  }
```
Gdy chcemy mieć pewność, ze nikt nie zmodyfikuje nam wartości (chcemy ja przekazać tylko do odczytu) dodajemy const
```
  void bar (int const* num) {
    std::cout << num; // good
    num += 2; // bad! num is const pointer!
  }
```
Wywołanie funkcji to:
```
  int num = 5;
  foo(&num);
  bar(&num);
```
Możemy zauważyć pewne rozbieżności pomiędzy referencja a wskaźnikiem. Do referencji odwołujemy się tak samo jak do zwykłego obiektu
a aby uzyskać element wskazywany przez wskaźnik musimy dodać `*`. Symbol ten oznacza obiekt wskazywany. Jeżeli nie damy `*` wypisany
zostanie adres tego obiektu. Ma to sens, ponieważ wskaźnik, wskazuje miejsce w pamięci, gdzie znajduje się obiekt.

Różnicę widać także, przy przekazywaniu argumentów do funkcji. Dla referencji i zwyklej zmiennej postępujemy tak samo, natomiast dla
wskaźnika musimy dodać `&`. `&` -> Oznacza w tym przypadku adres naszej zmiennej. Ma to również sens, ponieważ wskaźnik przechowuje 
adres obiektu, do którego chcemy się odwołać przez `*`.

# 3 Zagrożenia wskaźniki i referencje.

Jak już dobrze wiemy, zmienne lokalne są usuwane po wyjściu z zakresu, w którym je utworzyliśmy.
Można już domyślać się, jakie problemy sprawią nam wskaźniki i referencje, gdy będą dalej istniały
a obiekt, do którego się odwołują już zostanie zniszczony. Bedzie to w najlepszym wypadku „crash”, w najgorszym „undefined behaviour”.
Jak zapobiegać takim przypadkom? Zawsze musimy zapewnić, aby czas życia zmiennej, był dłuższy niż czas życia jej wskaźnika, czy referencji.

Błędny Przykład:

```
  std::vector<int*> vec;

  void CreateAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
      int new_value = generateNewNumber();
      vec.push_back(&i);
    }
  }

  int main() {
    CreateAndAddToVec(5);
    for (const auto& el : vec) {
      std::cout << *el << '\n';
    }
  }

```
Jak sobie poradzić z takim problemem? Odpowiedzią jest dynamicznie alokowana pamięć.
Najprościej jest to osiągnąć używając biblioteki `#include <memory>`, która posiada `std::shared_ptr`.
Wskaźnik ten nie jest bez powodu nazywany `inteligentnym`. Odpowiada od na alokacje dynamicznej pamięci,
która nie jest usuwana po wyjściu z zasięgu oraz sam zwalnia zasób, gdy już go nie potrzebujemy.
Jak taki wskaźnik utworzyć? `auto ptr = std::make_shared<int>(5);`
Przyjrzyjmy się teraz poprawionemu listingowi:
```
  std::vector<std::shared_ptr<int>> vec;

  void CreateAndAddToVec(int amount) {
    for (int i = 0 ; i < amount ; ++i) {
      vec.push_back(std::make_shared<int>(i));
      // lub w 2 linijkach
      // auto num = std::make_shared<int>(i);
      // vec.push_back(num);
    }
  }

  int main() {
    CreateAndAddToVec(5);
    for (const auto& el : vec) {
      std::cout << *el << '\n';
    }
}
```
Teraz po utworzeniu inteligentnego wskaźnika, nie musimy się martwic o czas życia zmiennej. Możemy spokojnie
po wyjściu z funkcji wypisać te wartości.

Jeżeli funkcja potrzebuje przyjąć surowy wskaźnik (ang. raw pointer), czyli np. `int* i` możemy to zrobić
używając funkcji `std::shared_ptr::get()` jak na przykładzie:
```
  void foo(int* num) {
    do_sth(num);
  }
  
  int main() {
    auto num = std::make_shared<int>(5);
    foo(num.get())
  }
```

Jednak pułapka tutaj znowu powraca. Jeżeli wszystkie obiekty shard_ptr odwołujące się do tej zmiennej zostaną usunięte.
To zasób zostanie zwolniony. Zatem nasz surowy wskaźnik będzie posiadał adres do nieistniejącego już zasobu, co spowodowuje
udifined behaviour lub crash programu.

# 4 Wstęp do algorytmów biblioteki STL i iteratorów

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

# 5 enum i enum class

enum to inaczej typ wyliczeniowy, w C++11 zaprezentowano także enum class zwany silnym type wyliczeniowym.

Załóżmy, że piszemy oprogramowanie do pralki.
Chcielibyśmy utworzyć także interfejs zwracający numer błędu np. 
  - brak wody,
  - zbyt duże obciążenie,
  - problem z łożyskami,
  - blokada pompy ect.
  
odpowiedzą na to jest typ eum:
```
enum ErrorCode {
  lack_of_water;
  to_much_load;
  bearing_problem;
  block_of_pump;
}
```
lub enmum class:
```
enum class ErrorCode {
  lack_of_water;
  to_much_load;
  bearing_problem;
  block_of_pump;
}
```

Typ enum numerowany jest od 0 do n, gdzie n liczba elementów. Jeżeli chcemy nadać inne wartości musimy to zrobić ręcznie:

```
enum class ErrorCode {
  lack_of_water = 333;
  to_much_load; // will be 334
  bearing_problem = 600;
  block_of_pump; // will be 601
}
```

enum od enum class różni się głownie tym, że możemy niejawnie skonwertować typ enum na int (w końcu to typ wyliczeniowy).
Natomiast typ enum class możemy skonwertować na int, poprzez rzutowanie. Nie będziemy na razie omawiać rzutowania. Warto tylko
pamiętać że robimy to wywołując `int num = static_cast<int>(ErrorCode::lack_of_water)`. 

Pytanie - W jakich innych przepadkach zastosowalibyście typ wyliczeniowy?

Druga różnica polega na tym, że dla enum możemy mieć konflikt nazw, natomiast dla enum class nie.
```
   enum color{
      RED,
      GREEN,
      BLUE,
      YELLOW
   }
   enum traffic_light {
      RED,
      YELLOW,
      GREEN
   }
   
   auto light_color = GetColor();
   if (light_color == RED) {
      Stop();
   } else {
      Go();
   }
```
 
Aby uniknąć konfliktu nazw stosujemy enum class:
```
   enum class color{
      RED,
      GREEN,
      BLUE,
      YELLOW
   }
   enum class traffic_light {
      RED,
      YELLOW,
      GREEN
   }
   
   auto light_color = GetColor();
   if (light_color == traffic_light::RED) {
      Stop();
   } else {
      Go();
   }
```
