#include <iostream>

void drucke_dreieck()
{
    int n;
    std::cout << "Anzahl Ebenen im Dreieck: ";
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        std::cout << std::string(n - (i + 1), ' ')
                  << std::string(i * 2 + 1, 'X')
                  << std::endl;
    }
}

int main(int argc, char **argv)
{
    drucke_dreieck();
    return 0;
}