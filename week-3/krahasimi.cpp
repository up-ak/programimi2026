#include <iostream>
using namespace std;

int main()
{
    int numri1;
    cout << "Vendosni numerin 1: ";
    cin >> numri1;

    int numri2;
    cout << "Vendosni numerin 2: ";
    cin >> numri2;

    if (numri1 > numri2)
    {
        cout << "Numri 1 eshte me i madh se numri 2";
    }
    else if (numri1 < numri2)
    {
        // cout << numri2 << " eshte me i madh se " << numri1;

        cout << numri2;
        cout << " eshte me i madh se ";
        cout << numri1;
    }
    else
    {
        cout << "Numri 2 barabart me numri 1";
    }

    return 0;
}