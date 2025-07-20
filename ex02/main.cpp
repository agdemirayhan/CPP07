#include <iostream>
#include "Array.tpp"

#define PRINT(P) std::cout << P << std::endl

template <typename T>
void printArray(Array<T> &array)
{
    std::cout << "Size :\t" << array.size() << std::endl;
    std::cout << "Array:\t";
    for (unsigned int i = 0; i < array.size(); i++)
        std::cout << array[i] << " ";
    std::cout << std::endl;
}

int main()
{
    Array<int> array(20);

    for (unsigned int i = 0; i < array.size(); i++)
        array[i] = i;

    PRINT("----Array 1----");
    printArray(array);

    Array<int> array2(array);

    PRINT("\n----Array 2 - Copy Constructed of Array 1----");
    printArray(array2);

    Array<int> array3;
    array3 = array2;
    array2[0] = 14;

    PRINT("\n----Array 3 - Copy Assigned of Array 2----");
    printArray(array3);

    PRINT("\n----Array 2 - Modified----");
    printArray(array2);

    PRINT("\n----Exception----");
    try
    {
        std::cout << array[21] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    Array<int> array4;
    PRINT("Array 4 - Default Constructed");
    printArray(array4);
    PRINT("");

    return 0;
}