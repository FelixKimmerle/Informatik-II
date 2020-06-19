#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Startwert: ";
    int x;
    std::cin >> x;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x /= 2;
        }
        else
        {
            x = 3 * x + 1;
        }
        std::cout << x << std::endl;
    }
}