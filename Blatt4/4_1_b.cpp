#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Anzahl der Eckpunkte: ";
    int n;
    std::cin >> n;

    double x1, y1, x2, y2;
    std::cout << "Geben sie einen Punkt ein: ";
    std::cin >> x1 >> y1;
    std::cout << "Geben sie einen Punkt ein: ";
    std::cin >> x2 >> y2;

    double sum = (y1 + y2) * (x1 - x2);
    double xlast = x2;
    double ylast = y2;
    for (size_t i = 3; i <= n; i++)
    {
        double x, y;
        std::cout << "Geben sie einen Punkt ein: ";
        std::cin >> x >> y;
        sum += (ylast + y) * (xlast - x);
        double A = ((y + y1) * (x - x1) + sum) / 2.0;
        std::cout << "Der momentane Flaecheninhalt betraegt " << A << std::endl;
        ylast = y;
        xlast = x;
    }
}