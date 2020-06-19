#include <iostream>

double berechne_BMI(double groesse, double gewicht)
{
    return gewicht / (groesse * groesse);
}

int main(int argc, char **argv)
{
    double groesse;
    std::cout << "Bitte geben sie ihre Groesse int [m] ein: ";
    std::cin >> groesse;

    double gewicht;
    std::cout << "Bitte geben sie ihr Gewicht int [kg] ein: ";
    std::cin >> gewicht;

    std::cout << "Ihr BMI ist: " << berechne_BMI(groesse, gewicht) << std::endl;

    return 0;
}