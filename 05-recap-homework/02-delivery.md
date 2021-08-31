<!-- .slide: data-background="#111111" -->

# Podstawy C++

## Dostarczenie zadań

<a href="https://coders.school">
    <img width="500px" src="../img/coders_school_logo.png" alt="Coders School" class="plain">
</a>

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
13. Poczekaj chwilę na raport Continuous Integration (CI), aby sprawdzić, czy rozwiązanie kompiluje się i przechodzi testy na GitHubie
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
