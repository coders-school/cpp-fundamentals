<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Zasięg zmiennych

<a href="https://coders.school">
    <img width="500" data-src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Zmienne lokalne

Zmienne lokalne są to zmienne, które są widziane w obrębię jakiegoś zakresu.
<!-- .element: class="fragment fade-in" -->

```cpp
{
    int local_variable = 5;
    // ...
}
local_variable = 10;   // error -> local_variable doesn't exists
```
<!-- .element: class="fragment fade-in" -->

Zakres zawsze tworzą nawiasy klamrowe m.in: <!-- .element: class="fragment fade-in" -->

* <!-- .element: class="fragment fade-in" --> same nawiasy - <code>{ /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> ciała funkcji - <code>void fun() { /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> instrukcje warunkowe - <code>if (condition) { /* ... */ }</code>
* <!-- .element: class="fragment fade-in" --> pętle - <code>while (condition) { /* ... */ }</code>

___

## Zmienne globalne

Zmienna globalna, jest widoczna dla wszystkich zakresów. Zawsze możemy się do niej odwołać.
<!-- .element: class="fragment fade-in" -->

```cpp
int global_value = 5;

void foo() {
    std::cout << global_value;
}
  
int main() {
    std::cout << global_value;
}
```
<!-- .element: class="fragment fade-in" -->

Tworzenie zmiennych globalnych zazwyczaj jest złą praktyką.
<!-- .element: class="fragment fade-in" -->

___

## Co wypisze się na ekranie?

```cpp
int number = 1;

int main() {
    int number = 2;
    {
        int number = 3;
        std::cout << number;
        std::cout << ::number;
    }
    std::cout << number;
    std::cout << ::number;
}
```
<!-- .element: class="fragment fade-in" -->

### 3121
<!-- .element: class="fragment fade-in" -->

___

## Przesłanianie nazw

* <!-- .element: class="fragment fade-in" --> możemy mieć wiele zmiennych o takiej samej nazwie, jeśli będą w różnych zakresach
  * <!-- .element: class="fragment fade-in" --> aby unikać niejednoznaczności nie jest to raczej polecane
* <!-- .element: class="fragment fade-in" --> nazwa z lokalnego zakresu zawsze przesłania tę z szerszego zakresu (np. globalnego)
* <!-- .element: class="fragment fade-in" --> można odwoływać się do nazw z globalnego zakresu stosując <code>::</code> (operator zakresu)
