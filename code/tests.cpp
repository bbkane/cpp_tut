#include <algorithm>
#include <iostream>
#include <array>
#include <numeric>

int main()
{
    std::array<int, 10> my_array;
    // int my_array[10];

    std::cout << "Please enter 10 numbers" << std::endl;

    std::for_each(std::begin(my_array), std::end(my_array),
            [](int &n) { std::cout << ">>> "; std::cin >> n;  });

    auto max = *std::max_element(std::begin(my_array), std::end(my_array));
    std::cout << "max: " <<  max << std::endl;

    auto sum = std::accumulate(std::begin(my_array), std::end(my_array), 0);
    std::cout << "sum: " << sum << std::endl;

    auto avg = static_cast<float>(sum)/ my_array.size();
    std::cout << "avg: " << avg << std::endl;

#ifdef _WIN32
        system("PAUSE");
#endif
}
