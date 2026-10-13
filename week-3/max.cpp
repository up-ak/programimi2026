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

    int numri3;
    cout << "Vendosni numerin 3: ";
    cin >> numri3;

    int max = numri1;

    if (numri2 > max)
    {
        max = numri2;
    }

    if (numri3 > max)
    {
        max = numri3;
    }

    cout << "Max" << max;

    return 0;
}