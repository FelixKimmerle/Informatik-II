#include <iostream>

int binomialRekursiv(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    return (n * binomialRekursiv(n - 1, k - 1)) / k;
}

int main(int argc, char **argv)
{
    for (int n = 0; n < 6; n++)
    {
        for (int k = 0; k <= n; k++)
        {
            std::cout << binomialRekursiv(n,k) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}