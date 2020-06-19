#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    for (int i = 8; i <= 100; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}