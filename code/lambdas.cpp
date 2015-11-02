#include <iostream>
#include <functional>
#include <string>
#include <algorithm>
#include <vector>

auto add(auto a, auto b)
{
    return a + b;
}

int main()
{

    //auto and decltype
    auto a= 1;
    decltype(a) b = 2;
    //easiest way to determine if this works :)
    static_assert(std::is_same<decltype(a), int>::value, "is not an int");
    static_assert(std::is_same<decltype(b), int>::value, "is not an int");

    std::cout << add(a, b) << std::endl;

    //use of auto with type deduction
    auto f = [](std::string word) {std::cout << word << std::endl;};

    f("Hola");

    std::string hello = "Bok";

    auto g = [&hello](){std::cout << hello << std::endl;};
    g();

    std::vector<std::string> v {"a", "b", "c"};
    for(auto i: v)
    {
        std::cout << i << " " << std::endl;
    }

    auto is_b = std::find_if(std::begin(v), std::end(v), [](auto i) { return i == "b"; });
    std::cout << *is_b << std::endl;
}

