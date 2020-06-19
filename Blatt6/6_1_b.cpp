#include <iostream>

void drucke_dreieck(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << std::string(n - (i + 1), ' ')
                  << std::string(i * 2 + 1, 'X')
                  << std::string(n - (i + 1), ' ') << std::endl;
    }
}

int main(int argc, char **argv)
{
    drucke_dreieck(3);
    drucke_dreieck(5);
    drucke_dreieck(9);
    return 0;
}