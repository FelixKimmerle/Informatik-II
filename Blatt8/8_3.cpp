#include <iostream>

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

int main(int argc, char **argv)
{
    PKW a('B', 2, 7);

    a.drucke();

    for (size_t i = 0; i < 10; i++)
    {
        a.bewege();
        a.drucke();
    }
    return 0;
}