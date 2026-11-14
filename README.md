# Zadanie `calculate` – sprawdź się w C++

[![Open in GitHub Codespaces](https://github.com/codespaces/badge.svg)](https://codespaces.new/coders-school/cpp-fundamentals?ref=calculate)

Na tej gałęzi czeka zadanie z mojego kursu „Podstawy C++”. Opis zadania znajdziesz w [homework/calculate/README.md](homework/calculate/README.md). Rozwiązanie wpisujesz w `homework/calculate/calculate.hpp`, a testy sprawdzą je automatycznie.

## Droga A – najszybciej, bez instalacji

1. Kliknij **Fork** w prawym górnym rogu i **odznacz „Copy the main branch only”** – inaczej w forku nie będzie gałęzi `calculate`.
2. W swoim forku przełącz się na gałąź `calculate` i otwórz `homework/calculate/calculate.hpp`.
3. Kliknij ikonę ołówka, wpisz rozwiązanie i zatwierdź przyciskiem **Commit changes**.
4. Kliknij **Contribute → Open pull request**.

> [!IMPORTANT]
> Sprawdź na górze strony PR-a: **base repository: `coders-school/cpp-fundamentals`, base: `calculate`**. GitHub domyślnie podsuwa `main` – to najczęstszy błąd. Z gałęzią `main` testy się nie uruchomią.

## Droga B – Codespaces, kompilacja i testy u siebie

Kliknij przycisk **Open in GitHub Codespaces** powyżej. W przeglądarce otworzy się VS Code z kompilatorem i CMake. W terminalu:

```bash
cmake -S homework/calculate -B build && cmake --build build && cd build && ctest --output-on-failure
```

Gdy testy przejdą, zrób commit i push – Codespaces zaproponuje utworzenie forka. Potem otwórz PR jak w drodze A, z bazą `calculate`.

## Co dalej

- CI sprawdzi Twój PR, a bot napisze w komentarzu, czy wszystko przeszło. Każdy kolejny push sprawdza zadanie od nowa.
- Punkty zobaczysz w kokpicie: [kokpit.coders.school](https://kokpit.coders.school/) – zaloguj się tym samym kontem GitHub. Konto na platformie kursów nie jest potrzebne.
- PR jest publiczny – Twój nick GitHub będzie widoczny w tym repozytorium.
