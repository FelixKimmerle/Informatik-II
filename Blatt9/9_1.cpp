#include <iostream>
#include <vector>
const int N = 50;

class PKW
{
public:
    PKW(char n = '*', int pos0 = 0, int v0 = 0);

    int pos;
    char name;
    int v;

    void drucke();
    void bewege();
    void setzeV(PKW &vordermann);
};

PKW::PKW(char n, int pos0, int v0)
{
    name = n;
    pos = pos0;
    v = v0;
}

void PKW::drucke()
{
    std::cout << "PKW " << name << ": Position " << pos << " Geschwindigkeit " << v << "." << std::endl;
}

void PKW::bewege()
{
    pos += v;
    pos %= N;
}

void PKW::setzeV(PKW &vordermann)
{
    v++;
    int abstand = vordermann.pos - pos;
    if (abstand < 0)
    {
        abstand += N;
    }
    if (v >= abstand)
    {
        v = abstand - 1;
    }
    if (v > 0 && rand() / double(RAND_MAX) <= 0.1)
    {
        v--;
    }
}

class strasse
{
public:
    std::vector<PKW> autos;
    size_t erster_PKW();
    void drucke();
    void drucke_in_zeile();
    void bewegen();
    void setzeV();
};

size_t strasse::erster_PKW()
{
    size_t min = 0;
    for (size_t i = 1; i < autos.size(); i++)
    {
        if (autos[i].pos < autos[min].pos)
        {
            min = i;
        }
    }
    return min;
}

void strasse::drucke()
{
    int ind0 = erster_PKW();
    for (size_t i = 0; i < autos.size(); i++)
    {
        autos[(ind0 + i) % autos.size()].drucke();
    }
}

void strasse::drucke_in_zeile()
{
    int ind0 = erster_PKW();
    int zeichen = 0;
    for (size_t i = 0; i < autos.size(); i++)
    {
        PKW a = autos[(ind0 + i) % autos.size()];
        std::cout << std::string(a.pos - zeichen, '.') << a.name;
        zeichen += a.pos - zeichen + 1;
    }
    std::cout << std::string(N - zeichen, '.') << std::endl;
}

void strasse::bewegen()
{
    for (size_t i = 0; i < autos.size(); i++)
    {
        autos[i].bewege();
    }
}

void strasse::setzeV()
{
    for (size_t j = 0; j < autos.size(); j++)
    {
        autos[j].setzeV(autos[(j + 1) % autos.size()]);
    }
}

int main(int argc, char **argv)
{
    strasse str;
    for (size_t i = 0; i < 10; i++)
    {
        str.autos.push_back(PKW('A' + i, i * 2, 7));
    }

    str.drucke();
    str.drucke_in_zeile();
    for (size_t i = 0; i < 100; i++)
    {
        str.setzeV();
        str.bewegen();
        //str.drucke();
        str.drucke_in_zeile();
    }

    str.drucke();

    return 0;
}