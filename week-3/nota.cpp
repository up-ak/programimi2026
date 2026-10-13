#include <iostream>
using namespace std;

int main()
{
    int piket = 0;

    cout << "Vendosni piket: ";
    cin >> piket;

    if (piket > 100 || piket < 0)
    {
        cout << "Gabim";
    }
    else if (piket >= 50 && piket < 60)
    {
        cout << "Nota 6";
    }
    else if (piket >= 60 && piket < 70)
    {
        cout << "Nota 7";
    }
    else if (piket >= 70 && piket < 80)
    {
        cout << "Nota 8";
    }
    else if (piket >= 80 && piket < 90)
    {
        cout << "Nota 9";
    }
    else if (piket >= 90)
    {
        cout << "Nota 10";
    }

    return 0;
}