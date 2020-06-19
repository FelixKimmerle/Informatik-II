#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<int> primzahlen = {2, 3, 5, 7};
    for (int i = 8; i <= 100; i++)
    {
        if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
            primzahlen.push_back(i);
        }
    }
    for (int i = 0; i < primzahlen.size(); i++)
    {
        std::cout << primzahlen[i] << (i != (primzahlen.size() - 1) ? ", " : "");
    }
    std::cout << std::endl;
    return 0;
}