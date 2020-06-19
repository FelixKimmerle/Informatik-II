#include <iostream>
#include <vector>

int main()
{
    std::vector<int> primzahlen = {2, 3, 5, 7};
    int n;
    std::cout << "Bis zu welcher Zahl sollen die Primzahlen berechnet werden? ";
    std::cin >> n;
    for (int i = 8; i <= n; i++)
    {
        bool prim = true;
        for (int primzahl : primzahlen)
        {
            if (i % primzahl == 0)
            {
                prim = false;
                break;
            }
        }
        if (prim)
        {
            primzahlen.push_back(i);
        }
    }
    for (int i = 0; i < primzahlen.size(); i++)
    {
        std::cout << primzahlen[i] << (i != (primzahlen.size() - 1) ? ", " : "");
    }
    std::cout << std::endl;
}