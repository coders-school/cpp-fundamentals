#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) //która wygeneruje wektor współdzielonych wskaźników na liczby od `0` do `count`
{
    std::vector<std::shared_ptr<int>> vec;

    for (int i = 0; i < count; ++i)
    {
        vec.push_back(std::make_shared<int>(i));
    }

    return vec;
}
void print(const std::vector<std::shared_ptr<int>> &vec) //która przyjmie wektor i wypisze wszystkie elementy ze wskaźników wektora
{
    for (const std::shared_ptr<int> &shPTR : vec)
    {
        if (shPTR != nullptr)
        {
            std::cout << shPTR.get();
            std::cout << "\n";
        }
    }
}
void add10(std::vector<std::shared_ptr<int>> &vec) //która przyjmie wektor i doda do każdej liczby `10`
{
    for (std::shared_ptr<int> &shPTR : vec)
    {
        if (shPTR != nullptr)
        {
            *shPTR = *shPTR + 10;
        }
    }
}
void sub10(int *const a) // która przyjmie stały wskaźnik na `int` i odejmie od tego elementu `10`
{
    if (a != nullptr)
    {
        *a -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> &vec) //Która przyjmie wektor współdzielonych wskaźników i wywoła dla każdego elementu powyższe przeciążenie funkcji `sub10()`
{
    for (std::shared_ptr<int> &shPTR : vec)
    {
        sub10(shPTR.get());
    }
}