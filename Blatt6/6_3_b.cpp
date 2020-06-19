#include <iostream>

void tausch(int &x, int &y)
{
    std::cout << "In tausch() vor dem Tausch: x = " << x << " y = " << y << std::endl;
    int tmp = x;
    x = y;
    y = tmp;
    std::cout << "In tausch() nach dem Tausch: x = " << x << " y = " << y << std::endl;
}

void sortiere(int &a, int &b, int &c)
{
    if (a > b)
    {
        tausch(a, b);
    }

    if (b > c)
    {
        tausch(b, c);
        if (a > b)
        {
            tausch(a, b);
        }
    }
}

int main(int argc, char **argv)
{
    int a, b, c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;

    sortiere(a, b, c);

    std::cout << "Werte sortiert: " << a << ", " << b << ", " << c << std::endl;

    return 0;
}