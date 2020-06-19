#include <iostream>
#include <chrono>

int binomialRekursiv_2(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return binomialRekursiv_2(n - 1, k - 1) + binomialRekursiv_2(n - 1, k);
}

int binomialRekursiv(int n, int k)
{
    if (k == 0)
    {
        return 1;
    }
    return (n * binomialRekursiv(n - 1, k - 1)) / k;
}

int main(int argc, char **argv)
{
    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "binomialRekursiv(30, 14) = " << binomialRekursiv(30, 14) << std::endl;
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = end - start;
    std::cout << "binomialRekursiv(30, 14) dauerte " << elapsed.count() * 1000 << "ms" << std::endl;

    start = std::chrono::high_resolution_clock::now();
    std::cout << "binomialRekursiv_2(30, 14) = " << binomialRekursiv_2(30, 14) << std::endl;
    end = std::chrono::high_resolution_clock::now();
    elapsed = end - start;
    std::cout << "binomialRekursiv_2(30, 14) dauerte " << elapsed.count() * 1000 << "ms" << std::endl;
    return 0;
}