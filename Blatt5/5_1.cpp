#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    int n;
    std::cout << "Anzahl: ";
    std::cin >> n;
    if (n < 1 || n > 100)
    {
        std::cout << "Die Anzahl muss mindestens 1 und hoechstens 100 betragen" << std::endl;
        return 1;
    }
    std::vector<double> a(n);
    for (int i = 0; i < n; i++)
    {
        std::cout << "Geben sie Element " << (i + 1) << " ein: ";
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        std::cout << "a[" << i << "] = " << a[i] << std::endl;
    }

    double sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    
    std::cout << "Die Summe betraegt " << sum << std::endl;

    int maxindex = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] > a[maxindex])
        {
            maxindex = i;
        }
    }

    std::cout << "Das groesste Element ist an der Stelle " << maxindex << " und hat den Wert " << a[maxindex] << std::endl;
    return 0;
}