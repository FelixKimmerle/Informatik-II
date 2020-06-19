#include <iostream>

void drucke_etage(int start, int ende, int leerzeichen)
{
    for (int i = start - 1; i < ende; i++)
    {
        std::cout << std::string(leerzeichen, ' ')
                  << std::string(ende - (i + 1), ' ')
                  << std::string(i * 2 + 1, 'X')
                  << std::string(ende - (i + 1), ' ') << std::endl;
    }
}

int main(int argc, char **argv)
{
    for (size_t i = 0; i < 8; i += 2)
    {
        drucke_etage(i + 1, i + 4, 6 - i);
    }

    return 0;
}