#include <iostream>

int main(int argc, char **argv)
{
    std::cout << "Geben Sie drei ganze Zahlen ein: ";
    int x, y, z;
    std::cin >> x >> y >> z;

    if (x == 200 || x == 800)
    {
        x = 0;
    }
    else
    {
        if (x > 200 && x < 800 && y > 0)
        {
            while (x >= 0)
            {
                x -= y;
                z++;
            }
        }
        else
        {
            x = 1;
        }
        
    }
    std::cout << x << " " << y << " " << z << std::endl;
    return 0;
}