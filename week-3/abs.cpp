#include <iostream>
using namespace std;

int main()
{
    int numri;
    cout << "Vendosni nje numer: ";

    cin >> numri;

    cout << "Vlera absolute ";

    if (numri < 0)
    {
        cout << numri * -1;
    }
    else
    {
        cout << numri;
    }

    return 0;
}