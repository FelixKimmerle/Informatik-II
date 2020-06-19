#include <iostream>

double berechne_BMI(double groesse, double gewicht)
{
    return gewicht / (groesse * groesse);
}

std::string berechne_BMI_Text(double bmi)
{
    if (bmi < 16)
    {
        return "starkes Untergewicht";
    }
    else if (bmi < 17)
    {
        return "maessiges Untergewicht";
    }
    else if(bmi < 25)
    {
        return "Normalgewicht";
    }
    else if(bmi < 30)
    {
        return "Praeadipositas";
    }
    else if(bmi < 35)
    {
        return "Adipositas Grad I";
    }
    else if(bmi < 40)
    {
        return "Adipositas Grad II";
    }
    return "Ab zum Arzt!!!";
}

int main(int argc, char **argv)
{
    double groesse;
    std::cout << "Bitte geben sie ihre Groesse int [m] ein: ";
    std::cin >> groesse;

    double gewicht;
    std::cout << "Bitte geben sie ihr Gewicht int [kg] ein: ";
    std::cin >> gewicht;

    double bmi = berechne_BMI(groesse, gewicht);

    std::cout << "Ihr BMI ist: " << bmi << std::endl;
    std::cout << berechne_BMI_Text(bmi) << std::endl;
    std::cout << berechne_BMI_Text(berechne_BMI(groesse,gewicht)) << std::endl;

    return 0;
}