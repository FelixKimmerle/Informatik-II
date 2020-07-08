#include <iostream>
#include <vector>

struct tierart
{
    std::string name;
    int anzahl;
};

void druckeArt(tierart art)
{
    std::cout << art.name << ": " << art.anzahl << std::endl;
}

tierart eingabeArt()
{
    tierart art;
    std::cout << "Name: ";
    std::cin >> art.name;

    std::cout << "Anzahl: ";
    std::cin >> art.anzahl;
    return art;
}

struct zoo
{
    std::string name;
    std::vector<tierart> arten;
};

int zaehleTiere(zoo z)
{
    int sum = 0;
    for (auto &&art : z.arten)
    {
        sum += art.anzahl;
    }
    return sum;
}

void druckeZoo(zoo &z)
{
    std::cout << "Zoo " << z.name << std::endl;
    std::cout << z.arten.size() << " Tierarten" << std::endl;
    for (auto &&art : z.arten)
    {
        druckeArt(art);
    }
    std::cout << "Insgesammt " << zaehleTiere(z) << " Tiere" << std::endl;
}

zoo eingabeZoo()
{
    zoo z;
    std::cout << "Name des Zoos: ";
    std::cin >> z.name;

    unsigned int anzahl;
    std::cout << "Anzahl der Tierarten: ";
    std::cin >> anzahl;

    for (unsigned int i = 0; i < anzahl; i++)
    {
        z.arten.push_back(eingabeArt());
    }
    return z;
}

void ausbruch(tierart &art)
{
    art.anzahl /= 2;
}

void ausbruch(zoo &z)
{
    for (auto &&art : z.arten)
    {
        ausbruch(art);
    }
}

int main(int argc, char **argv)
{
    zoo z = eingabeZoo();
    std::cout << std::endl;
    druckeZoo(z);
    ausbruch(z);
    std::cout << std::endl;
    std::cout << "Nach dem Ausbruch:" << std::endl;
    druckeZoo(z);
    return 0;
}