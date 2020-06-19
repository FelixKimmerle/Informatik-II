#include <iostream>

int main()
{
    std::ostream &a = std::cout;
    a << (3 << 4) << 5;
}