#include <iostream>
#include "functions.hpp"

namespace func
{
    void read(int mas[100][100], int& i, int& j)
    {
        std::cout << "Enter i: ";
        std::cin >> i;
        std::cout << "Enter j: ";
        std::cin >> j;

        for (int a = 0; a<i; a++)
        {
            for (int b = 0; b<j; b++)
            {
                std::cin >> mas[a][b];
            }
        }
            
    }

    void write(int mas[100][100], int& i, int& j)
    {
        for (int a = 0; a<i; a++)
        {
            for (int b = 0; b<j; b++)
            {
                std::cout << mas[a][b] << " ";
            }
            std::cout << std::endl;
        }
            
    }
}