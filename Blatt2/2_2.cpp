#include <iostream>

int main(int argc, char **argv)
{
    float groesse;
    std::cout << "Bitte geben sie ihre Groesse in [m] ein: ";
    std::cin >> groesse;
    if (groesse > 50)
    {
        std::cout << "Die eingegeben Groesse wird in [cm] interpretiert" << std::endl;
        groesse /= 100;
    }

    float gewicht;
    std::cout << "Bitte geben sie ihr Gewicht in [kg] ein: ";
    std::cin >> gewicht;

    if (groesse < 1.f || groesse > 2.5f)
    {
        std::cout << "Die eingegebene Groesse scheint nicht korrekt zu sein." << std::endl;
        return 1;
    }

    if (gewicht < 25.f || gewicht > 250.f)
    {
        std::cout << "Das eingegebene Gewicht scheint nicht korrekt zu sein." << std::endl;
        return 1;
    }

    float bmi = gewicht / (groesse * groesse);

    std::cout << "Ihr BMI betraegt: " << bmi << std::endl;
    std::cout << "Das ist ";

    if(bmi < 16)
    {
        std::cout << "Starkes Untergewicht";
    }
    else if(bmi < 16.9f)
    {
        std::cout << "Maessiges Untergewicht";
    }
    else if(bmi < 18.4f)
    {
        std::cout << "Leichtes Untergewicht";
    }
    else if(bmi < 24.9f)
    {
        std::cout << "Normalgewicht";
    }
    else if(bmi < 29.9f)
    {
        std::cout << "Praeadipositas";
    }
    else if(bmi < 34.9f)
    {
        std::cout << "Adipositas Grad I";
    }
    else if(bmi < 39.9f)
    {
        std::cout << "Adipositas Grad II";
    }
    else
    {
        std::cout << "Adipositas Grad III";
    }
    std::cout << std::endl;

    return 0;
}