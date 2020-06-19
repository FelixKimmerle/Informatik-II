#include <iostream>

struct adresse
{
    std::string strasse;
    int nummer;
};

struct brief
{
    adresse absender;
    adresse empfaenger;
    double gewicht;
};

int main(int argc, char **argv)
{
    adresse a;
    std::cout << "Geben sie ihre Strasse ein: ";
    std::cin >> a.strasse;
    std::cout << "Geben sie ihre Hausnummer ein: ";
    std::cin >> a.nummer;

    std::cout << "Sie wohnen in der Strasse " << a.strasse << " in der Hausnummer " << a.nummer << std::endl;

    brief b;
    b.absender.strasse = "Gartenstr.";
    b.absender.nummer = 21;
    b.empfaenger.strasse = "Fliederweg";
    b.empfaenger.nummer = 24;
    b.gewicht = 1234.5;

    std::cout << "Der Brief wird gesendet von "
              << b.absender.strasse << " " << b.absender.nummer << " zu "
              << b.empfaenger.strasse << " " << b.empfaenger.nummer << " und wiegt "
              << b.gewicht << "g" << std::endl;
    return 0;
}