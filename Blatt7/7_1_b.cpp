#include <iostream>

int binomialSchleife(int n, int k)
{
    int erg = 1;
    for (int i = 1; i <= k; i++)
    {
        erg = (erg * (n - k + i)) / i;
    }
    return erg;
}

int main(int argc, char **argv)
{
    for (int n = 0; n < 6; n++)
    {
        for (int k = 0; k <= n; k++)
        {
            std::cout << binomialSchleife(n, k) << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}