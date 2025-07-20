#include <iostream>
#include "iter.hpp"

template <typename T>
void printElement(const T& x) {
    std::cout << x << std::endl;
}

template <typename T>
void increment(T& x) {
    ++x;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    size_t len = sizeof(array) / sizeof(array[0]);

    std::cout << "Original array:" << std::endl;
    iter(array, len, printElement<int>);

    std::cout << "\nAfter incrementing:" << std::endl;
    iter(array, len, increment<int>);
    iter(array, len, printElement<int>);

    std::string words[] = {"hello", "world", "template"};
    size_t wordLen = sizeof(words) / sizeof(words[0]);

    std::cout << "\nString array:" << std::endl;
    iter(words, wordLen, printElement<std::string>);

    return 0;
}
