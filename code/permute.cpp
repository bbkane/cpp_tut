#include <algorithm>
#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "Enter word" << "+>";
    std::cin >> word;
    std::cout << '\n';

    std::sort(std::begin(word), std::end(word));
    do
    {
        std::cout << word << std::endl;
    } while(std::next_permutation(std::begin(word), std::end(word)));
}
