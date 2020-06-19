#include <iostream>

int main(int argc, char **argv)
{
    int n;
    std::cout << "Geben sie n ein: ";
    std::cin >> n;

    std::cout << "--=== a) ===--" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << "X";
    }

    std::cout << std::endl;

    std::cout << "--=== b) ===--" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--=== c) ===--" << std::endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "X";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--=== d) ===--" << std::endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            std::cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            std::cout << "X";
        }

        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--=== e) ===--" << std::endl;
    for (int i = -n + 1; i < n; i++)
    {
        for (int j = -n + 1; j < n; j++)
        {
            if (i * i + j * j < n*n)
            {
                std::cout << "X";
            }
            else
            {
                std::cout << " ";
            }
            
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}