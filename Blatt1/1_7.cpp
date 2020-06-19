#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    int c = 1;
    cout << "a=" << a << " ,b=" << b << " ,c=" << c << endl;

    a = 3 * b - c;
    b = b + c;
    c = b + c;
    cout << "a=" << a << " ,b=" << b << " ,c=" << c << endl;

    a++;
    b += 2;
    c <<= 1;
    cout << "a=" << a << " ,b=" << b << " ,c=" << c << endl;

}