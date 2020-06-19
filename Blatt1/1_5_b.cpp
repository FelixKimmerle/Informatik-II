#include <iostream>

int main(int argc, char **argv)
{
    std::ostream &a = std::cout;
    a << (3 << 4) << 5;
    return 0;
}