<!-- .slide: data-background="#111111" -->

# C++ basics

## Introduction to STL

### Algorithms and iterators

<a href="https://coders.school">
    <img width="500" data-src="../coders_school_logo.png" alt="Coders School" class="plain">
</a>

___

Let's go back to begin and end iterators for a moment. As we remember, they returned the beginning and the end of our container, e.g. std :: vector.
in fact, begin and end returns to us an iterator pointing to 1 element of our container and to the element immediately after the last element. (here a photo of a few squares and marked as indicated by the begin and the end).

What is an iterator? The easiest way is an element that points to a container element. We can freely increment it, i.e. move to the next elements of the container. We distinguish several types of iterators, but at the moment we will only deal with one.
It is called random access iterator. It is important to us that such an iterator can freely refer to any element in our container. We get the random iterator when we call begin or end for std :: vector. To refer to the element the iterator points to, we use `*`.

What will be listed in the following lines?
```
  std::vector<int> vec {1, 2, 3, 4, 5, 6};
  auto random_iterator = vec.begin();
  std::cout << *random_iterator;
  ++random_iterator;
  std::cout << *random_iterator;
  random_iterator += 2;
  std::cout << *random_iterator;
```

The STL library has over 100 algorithms, one of them are:
  * std :: sort,
  * find,
  * all_of,
  * any_off,
  * fill,
  * min_max_element;
  * for_each.
 
 All algorithms work for iterators, e.g .:
 ```
  template< class RandomIt >
  void sort( RandomIt first, RandomIt last );
```
The sort algorithm requires 2 iterators to sort a container. Most often the beginning and the end of the range. Such an algorithm is called as follows:
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
Sorting is really easy. Fun fact for those wondering why you can't just give std :: sort (vec).
It took several years for the standardization committee to notice that this option was useful and that it was only available in the C ++ 20 standard.

- Question: What construction can std :: find have?

```
template< class InputIt, class T >
InputIt find( InputIt first, InputIt last, const T& value );
```

- Question: How to invoke such an algorithm?

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

You can see a line in the code above `result1 != std::end(v)` this is nothing but checking whether a number has been found.
The algorithm returns `std::end` when no item is found.

- Question: What design can it have `all_of` and `any_of` ?

```
template< class InputIt, class UnaryPredicate >
bool all_of( InputIt first, InputIt last, UnaryPredicate p );
```
```
template< class InputIt, class UnaryPredicate >
bool any_of( InputIt first, InputIt last, UnaryPredicate p );
```

UnaryPredicate -> specifies the condition that must be met. For example, we want to check if all numbers are less than 10, we can write a function: `bool isLessThen5(int num) { return num < 5; }`
When we want to check if no number is greater than 10, we can write a function: `bool isGreaterThen10(int num) { return num > 10; }`

Example of use:
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

- Question: What can the std :: fill algorithm have?
```
template< class ForwardIt, class T >
void fill( ForwardIt first, ForwardIt last, const T& value );
```

The fill algorithm fills the entire range of a container with some number.
- Question: How to fill a vector with 10 elements equal to 5?
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

- Question: What construction can the min_max_element algorithm have?
```
template< class ForwardIt >
std::pair<ForwardIt,ForwardIt>
    minmax_element( ForwardIt first, ForwardIt last );
```
- Question: How do I find the smallest and largest element in std :: vector?
```
  int main() {
      const auto v = { 3, 9, 1, 4, 2, 5, 9 };
      const auto [min, max] = std::minmax_element(begin(v), end(v));

      std::cout << "min = " << *min << ", max = " << *max << '\n';
  }
```

- Question: What can the std :: for_each algorithm have?
```
template< class InputIt, class UnaryFunction >
UnaryFunction for_each( InputIt first, InputIt last, UnaryFunction f );
```
- Question: What could the predicate for such an algorithm look like?
```
void(Type& element) {
  do_sth_with_element(element);
}
```
- Question: How do I add the number 1 to each vector element?
```

void plus1(int& element) { element += 1; }

int main() {
    std::vector<int> vec {1,2,3,4,5};
    std::for_each(vec.begin(), vec.end(), plus1);
}
```
- The question and how to list its elements?
```

void plus1(int& element) { element += 1; }
void print(const int& element) { std::cout << element << '\n'; }

int main() {
    std::vector<int> vec {1,2,3,4,5};
    std::for_each(vec.begin(), vec.end(), plus1);
    std::for_each(vec.begin(), vec.end(), print);
}
```
