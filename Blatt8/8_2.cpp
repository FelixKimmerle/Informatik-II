#include <iostream>

const int N = 50;

class PKW
{
public:
    int pos;
    char name;
    int v;

    void drucke();
    void bewege();
};

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
    PKW a;
    a.name = 'B';
    a.pos = 2;
    a.v = 7;

    a.drucke();

    for (size_t i = 0; i < 10; i++)
    {
        a.bewege();
        a.drucke();
    }
    return 0;
}