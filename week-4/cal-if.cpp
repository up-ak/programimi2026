#include <iostream>
using namespace std;

int main()
{
    double numri1;
    double numri2;
    char operatori;
    double rez;

    bool gabim = false;

    cout << "Vendosni numerin 1: ";
    cin >> numri1;

    cout << "Vendosni numerin 2: ";
    cin >> numri2;

    cout << "Vendose operatorin: ";
    cin >> operatori;

    if (operatori == '+')
    {
        rez = numri1 + numri2;
    }
    else if (operatori == '-')
    {
        rez = numri1 - numri2;
    }
    else if (operatori == '*')
    {
        rez = numri1 * numri2;
    }
    else if (operatori == '/')
    {
        if (numri2 == 0)
        {
            cout << "Gabim ne pjestim, numri 2 eshte 0";
            gabim = true;
        }
        else
        {
            rez = numri1 / numri2;
        }
    }
    else
    {
        cout << "Operatori eshte gabim";
        gabim = true;
    }

    if (!gabim) // (gamin != false)
    {
        cout << "Rezultati: ";
        cout << rez;
    }

    return 0;
}