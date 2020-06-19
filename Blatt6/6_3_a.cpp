#include <iostream>

void tausch(int &x, int &y)
{
    std::cout << "In tausch() vor dem Tausch: x = " << x << " y = " << y << std::endl;
    int tmp = x;
    x = y;
    y = tmp;
    std::cout << "In tausch() nach dem Tausch: x = " << x << " y = " << y << std::endl;
}

void tausch_experiment(int x, int y)
{
    std::cout << "In tausch() vor dem Tausch: x = " << x << " y = " << y << std::endl;
    int tmp = x;
    x = y;
    y = tmp;
    std::cout << "In tausch() nach dem Tausch: x = " << x << " y = " << y << std::endl;
}

int main(int argc, char **argv)
{
    int x, y;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    std::cout << "In main() vor dem Tausch: x = " << x << " y = " << y << std::endl;
    tausch_experiment(x, y);
    std::cout << "In main() nach dem Tausch: x = " << x << " y = " << y << std::endl;

    return 0;
}