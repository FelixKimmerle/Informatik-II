#include <iostream>

int main(int argc, char **argv)
{
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Geben sie die erste koordinate im Format x y ein: ";
    std::cin >> x1 >> y1;
    std::cout << "Geben sie die zweite koordinate im Format x y ein: ";
    std::cin >> x2 >> y2;
    std::cout << "Geben sie die dritte koordinate im Format x y ein: ";
    std::cin >> x3 >> y3;
    double A = 0.5 * ((y3 + y1) * (x3 - x1) + (y1 + y2) * (x1 - x2) + (y2 + y3) * (x2 - x3));
    std::cout << "Der orienterte Flaecheninhalt betraegt " << A << std::endl;
    return 0;
}