#include <iostream>
using namespace std;

int main()
{
    int numri = -1;

    while (numri < 1 || numri > 10)
    {
        cout << "Vendose nje numer prej 1 deri ne 10: ";
        cin >> numri;
    }

    return 0;
}