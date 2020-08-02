# Pierwsze 4 podpunkty, wszystko jest w PreWork

# 5 Typy wbudowane i auto

Czym jest 1 bajt -> jest to 8 bitów.
Prosta matematyka, jeżeli mamy binarnego totolotka, wylosowane liczny mogą mieć 0 lub 1.
Zatem podczas losowania 8 numerków możemy otrzymać przykładowo: 1 0 1 0 1 0 1 0
Takich kombinacji jest dokładnie 128 -> (2^8).
Zatem na 1 bajcie (8 bitach) możemy zapisać 128 liczb -> np. od 0 do 127.
Jeżeli w totolotku losujemy 32 numerki, (32/8 = 4) czyli 4 bajty to takich kombinacji jest, 2^32 (czyli ponad 4 miliardy).
Przejdźmy teraz do typów wbudowanych w standardzie c++

Podstawowe typy wbudowane (przedrostek unsigned oznacza, że typ jest bez znaku, czyli od 0 do jakieś dodatniej wartości).
  * bool 1bajt -> false lub true
  * char 1batj -> od -128 do 127
  * unsigned char 1bajt -> od 0 do 255
  
  *Wielkość poniższych typów zależy od platformy np. 32 bity, 64 bity*
  
  * short	(unsigned short) - zwykle 2 bajty
  * int (unsigned int) - zwykle 4 bajty 
  * long (unsigned long) - zwykle 4 bajty
  * long long(unsigned long long)	- jeżeli platforma jest 64 bitowa to 8 bajtów

  * float	- zwykle 4 bajty
  * double - jeżeli platforma 64 bitowa to 8 bajtów
  
  *Istnieją też typy, która są aliasami (inne nazewnictwo, w celu lepszego zrozumienia typu) jak*
  size_t -> który w zależności od kompilatora może być typu (unsigned short, unsigned int, unsigned long, unsigned long long). Przeważnie jest on typu unsigned int. Warto wykorzystywać go gdy nasza zmienna będzie odnosić się do jakiegoś rozmiaru np. wielkość tablicy.

  * oczywiście zawsze możemy użyć słowa `auto` i kompilator sam wydedukuje typ:
  auto num = 5; -> int
  auto num = 5.5 -> double
  auto num = 5.f -> float
  auto letter = 'a' = -> char
  auto num = false -> bool

Na koniec mały suchar. Kim jest Hobbit? -> Jest to 1/8 Hobbajta :)

# 6 Funkcje

*Funkcja* jest to fragment programu, któremu nadano nazwę i który możemy wykonać poprzez podanie jego nazwy 
oraz ewentualnych argumentów (o ile istnieją). Argumentami są natomiast dane przekazywane do funkcji np. `void fun(int)`. Funkcja ma nazwę fun, nic nie wraca a przyjmuje jeden argument typu int.
Zatem funkcja to nic innego jak jakiś podprogram. Przykładowo, w trakcie jazdy na rowerze,
naszą główną funkcją jest przemieszczanie się z punktu a do b. Jednak wykonujemy także kilka podprogramów, jak zmiana biegów,
hamowanie, rozpędzanie roweru, skręcanie ect... Podobnie w programie możemy wydzielić konkretne zachowania
i przenieść je do funkcji, które nazwiemy tak by sugerowały, co robią. Ważne, aby funkcja robiła tylko jedną rzecz.
Czyli jedna funkcja zmienia biegi, druga hamuje, trzecia skręca. 
Przyjrzyjmy się innym funkcją:

`void foo(double)` jest to funkcja o nazwie foo, która nic nie zwraca a przyjmuje jeden argument typu double.
`double bar(float, const int)` jest to funkcja o nazwie bar, która zwraca typ double a przyjmuje 2 argumenty
pierwszy to float, a drugi to const int (const oznacza, że wartość ta nie może zostać zmodyfikowana).

Przykład wywołania funkcji:
`foo(5)` -> wywołujemy funkcję foo z argumentem int, który jest równy 5.
`double result = bar(5.4, 10) -> wywołujemy funkcję bar z argumentem float (5.4) oraz int (10)
a jej wynik przypisujemy do zmiennej double.

Operacje arytmetyczne:
  * Podstawowe: + - * /
  * Modyfikujące zmienną: += -= *= /=
  
Przykład: `a = 5 + 7 (a = 12)` natomiast `a = 5; a+=7 (a=12)`.

# 7 instrukcje warunkowe
Instrukcja warunkowa `if`

Instrukcja warunkowa to nic innego jak zadanie programowi pytania np.: 
 * Czy otrzymałeś już wszystkie dane?
 * Czy życie bossa spadło do 0?
 * Czy osiągnięcie zostało zdobyte przez gracza?
 * Czy liczba jest większa od maksymalnie dopuszczanej?

Jej konstrukcja jest prosta:
```
if (condition) {
  // do sth
}
```
A co w przypadku, gdy wiele informacji musi być spełnionych?
Możemy połączyć warunki operatorem *lub* `||` bądź *i* `&&` np:
 * `if (czy_ziemniaki_zjedzone && czy_mieso_zjedzone && czy_surówka_zjedzona)` 
   -> wszystkie 3 warunki muszą zostać spełnione.
 * `if (czy_gracz_ma_20_zręcznośći || czy_gracz_ma_18_inteligencji || czy_gracz_ma_22_siły)
   -> w tym przypadku wystarczy spełnić jeden z 3 warunków. Mogą zostać spełnione wszystkie,
   ale wystarczy by został spełniony jeden dowolny
 
Jeżeli program może różnie zareagować na spełnienie jakiś warunków możemy zastosować konstrukcje `if else`
```
 if (number < 2) {
   critical_miss();
 } else if (number < 18) {
   hit();
 } else {
   critical_hit();
 } 
```

Instrukcja warunkowa switch case.
Jest ona podobna w zachowaniu do instrukcji `if`. Jednak różni się nieco konstrukcją:
```
  char option;
  switch (option) {
  case 'l':
    GoLeft();
    break;
  case 'r':
    GoRight();
    break;
  case 'f':
    GoForward();
    break;
  case 'b':
    GoBackward();
    break;
  default:
    Exit();
    break;
  }
```
`case` oznacza konkretny przypadek. `break` informuje, że wychodzimy z instrukcji warunkowej i konstytuujemy dalej program.
`deafult` jest to miejsce gdzie program dotrze, gdy żaden inny warunek nie zostanie spełniony.

# 8 Pętle

Pętla w największym uproszczeniu służy do powtarzania instrukcji, które chcemy by się wykonały więcej 
niż raz bez konieczności ich wielokrotnego pisania w kodzie.

Podstawowe pętle: while(), for()

while() -> używamy, gdy chcemy coś wykonać dopóki nie zostanie spełniony jakiś warunek.
przeważnie nie mamy pojęcia, kiedy to następy (nie znamy liczby kroków) np:
  * Przeglądamy koszule w Internecie dopóki nie znajdziemy pasującej do nas,
  * Powtarzamy walkę z tym samym bossem aż go nie pokonamy,
  * Jemy zupę, aż talerz nie będzie pusty,
  * Przeszukujemy kontakty w telefonie aż nie znajdziemy interesującej nas osoby,

for() -> używamy, gdy chcemy coś wykonać określoną liczbę razy, przeważnie znamy liczbę kroków np.
  * Wypełniamy ankietę składającą się z 10 pytań -> liczba kroków 10,
  * Przemieszczamy się z punktu A do B -> liczba kroków dystans / długość kroku,
  * Piszemy egzamin składający się z 4 zadań -> liczba kroków (jak umiemy to 4, jak nie to jeszcze wykonujemy podprogram `ściągaj`).
  * Zapinamy koszule (o ile nie wyrwiemy żadnego guzika).
  
Konstrukcja pętli jest bardzo prosta:
```
  while (warunek) {
    // Do sth
  }
```
oraz

```
  for (zmienna_do_inkrementacji ; warunek ; inkrementacja_zmiennej) {
    Do sth
  }
```

Przykład:
```
  while (if(a == b)) {
    std::cin >> a;
    std::cin >> b;
  }
```

```
  for (size_t i = 0 ; i < 10 ; i+=2) {
    std::cout << "i: " << i << '\n';
  }
```

# 9 Wprowadzenie to tablic
Tablice można traktować jak wagony w pociągu. Są one ustawione kolejno jeden po drugim i połączone ze sobą.
Mogą pomieścić różne typy, jak człowiek, węgiel ect.
Zatem jeżeli mamy 10 wagonów z węglem możemy zapisać sobie to `Coal tab[10]` oznacza to, że tworzymy
tablicę, która przechowuje 10 elementów typu Coal (węgiel).
W C++ tablica znajduje się w jednym miejscu w pamięci i jest nierozłączna tak jak wagony.
(proponuje wrzucić zdjęcie pociągu oraz ładną ilustracje jak wygląda tablica w pamięci).
Oczywiście możemy usuwać poszczególne wagony, ale póki co nie komplikujmy sprawy :)
Tablica jest zawsze indeksowana od 0, zatem pierwszy element tablicy 10 elementowej to `tab[0]` a ostatni `tab[9]`.

Przykład modyfikacji tablicy:
```
 int tab[10];
 tab[0] = 1;
 tab[1] = 2;
 ...
 tab[9] = 9;
```
Jak widać do elementu tablicy odwołujemy się przez `operator []`. Musimy pamiętać, żeby zawsze odwoływać się
do istniejącego elementu tablicy. Inaczej program będzie miał niezdefiniowane zachowanie, gdyż spróbujemy
uzyskać dostęp do pamięci, która nie należy do tablicy. Mówimy, że znajdują się tam śmieci. W najlepszym przypadku
system operacyjny to wykryje i dostaniemy „crash”. W najgorszym będziemy działać na niepoprawnych danych przez długi
okres zanim program zakończy się "crashem".

# 10 Podstawy STL
STL -> jest to podstawowa biblioteka szablonów dostępna w standardzie języka C++.
Pierwszym z ciekawych elementów tej biblioteki jest std::vector.
Czyli dynamiczna tablica, która sama zarządza pamięcią. Więc nie musimy z góry precyzować ile ma być elementów.
std::vector sam zadba o alokacje nowej pamięci, gdy będzie to potrzebne, oraz jej dealokację, gdy już jej nie
będziemy potrzebować.

Przykład utworzenia std::vector `std::vector<int> vec;` jak można zauważyć podałem typ int, tak samo jak dla zwykłych tablic.
Wektor, zawsze musi wiedzieć, jakiego typu przechowuje dane.

  * Modyfikacja wektora: `vec.push_back(5)`
  * Odczytanie z wektora: `vec[1]`
  * Inicjalizacja wielu elementów wektora naraz: `std::vector<int> vec {1,2,3,4,5}`
  * przypisanie wielu elementów do wektora: `vec = {1,2,3,4,5}`
  * pobieranie pierwszego elementu z wektora: `vec.front()`
  * pobieranie ostatniego elementu z wektora: `vec.back()`
  
# 11 Range loop
Każdy kontener (w tym również tablica, czy wektor) posiada swój koniec i początek.
begin() -> określa początek wektora
end() -> określa koniec wektora.
Narazie nie jest istotne, jaki typ jest zwracany. Ważne jest dla nas, tylko to, że otrzymujemy początek i koniec zakresu :)
Zatem możemy sobie napisać pętle: `for (const auto& element : vec)`. Co ta pętla robi?
Dzięki informacji o początku i końcu zakresu, kompilator może sobie sam wygenerować pętle przez cały zakres wektora.
to troszkę tak jakbyśmy zapisali `for (auto i = vec.begin() ; i != vec.end() ; ++i)` jednak taki zapis jest niepotrzebnie
złożony i mało czytelny. Dlatego powstały `range loop` które umożliwiają łatwy zapis `for (typ nazwa : kontener)`

# 12 std::string

Innym typem kontenera jest std::string. Jest to specjalny kontener, który przechowuje znaki.
Ma on podobne funkcję jak std::vector:
  * Modyfikacja std::string: `str.push_back('a')` ale nikt tak nie robi :). Polecam `str += 'a';
  * Odczytanie z std::string: `str[1]`
  * Inicjalizacja wielu elementów std::string naraz: `std::stringc str("Witam");
  * przypisanie wielu elementów do std::string: `str = "Witam"
  * pobieranie pierwszego elementu z std::string: `str.front()`
  * pobieranie ostatniego elementu z std::string: `str.back()`
std::string ma również swój początek i koniec :) tak jak każdy kontener.
