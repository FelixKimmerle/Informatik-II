#include <iostream>
void test_ref(int &x)
{
    std::cout << "Adresse von x int test_ref(): \t" << &x << std::endl;
}

void test(int x)
{
    std::cout << "Adresse von x int test(): \t" << &x << std::endl;
}

int main(int argc, char **argv)
{
    int x = 5;
    std::cout << "Adresse von x int main(): \t" << &x << std::endl;
    test_ref(x);
    test(x);
    return 0;
}