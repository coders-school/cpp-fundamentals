<!-- .slide: data-background="#111111" -->

# C ++ basics

## `std::string`

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

## Character container - `std::string`

* <!-- .element: class="fragment fade-in" --> a special container that stores characters
* <!-- .element: class="fragment fade-in" --> <code>std::string</code> it also has a beginning and an end, like any container
* <!-- .element: class="fragment fade-in" --> similar functions as <code>std::vector</code>

___

## Operations on `std::string`

* <!-- .element: class="fragment fade-in" --> adding a mark at the end
  * `str.push_back('a')` (nobody does that :))
  * we recommend `str += 'a';`
* <!-- .element: class="fragment fade-in" --> reading a single character
  * `str[1]`
* <!-- .element: class="fragment fade-in" --> initialization
  * `std::string str("Witam")`
  * `std::string str = "Witam"`
* <!-- .element: class="fragment fade-in" --> assigning the entire string
  * `str = "Witam"`
* <!-- .element: class="fragment fade-in" --> getting the first character
  * `str.front()`
* <!-- .element: class="fragment fade-in" --> getting the last character
  * `str.back()`
