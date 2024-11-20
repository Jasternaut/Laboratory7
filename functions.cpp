#include <iostream>
#include "functions.hpp"

namespace func
{
    void read(int mas[10000], int& n)
    {
        std::cin >> n;
        for (int i = 0; i<n; i++)
            std::cin >> mas[i];
    }

    void write(int mas[10000], int& n)
    {
        for (int i = 0; i<n; i++)
            std::cout << mas[i] << " ";
    }
}