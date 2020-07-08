#include <iostream>

const int N = 50;

class PKW
{
public:
    int pos;
    char name;
    int v;
};

void drucke(PKW a)
{
    std::cout << "PKW " << a.name << ": Position " << a.pos << " Geschwindigkeit " << a.v << "." << std::endl;
}

void bewege(PKW &a)
{
    a.pos += a.v;
    a.pos %= N;
}

int main(int argc, char **argv)
{
    PKW a;
    a.name = 'B';
    a.pos = 2;
    a.v = 7;

    drucke(a);

    for (size_t i = 0; i < 10; i++)
    {
        bewege(a);
        drucke(a);
    }
    return 0;
}