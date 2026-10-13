#include <iostream>
using namespace std;

int main()
{
    int numri;

    cout << "Vendose nje numer: ";
    cin >> numri;

    cout << "Vlera absolute ";

    int abs = numri < 0 ? (numri * -1) : numri;

    cout << abs;

    return 0;
}