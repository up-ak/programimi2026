#include <iostream>
using namespace std;

int main()
{
    double numri1;
    double numri2;
    char operatori;
    double rez;

    cout << "Vendosni numerin 1: ";
    cin >> numri1;

lexoNr2:
    cout << "Vendosni numerin 2: ";
    cin >> numri2;

leximi:
    cout << "Vendose operatorin: ";
    cin >> operatori;

    switch (operatori)
    {
    case '+':
        rez = numri1 + numri2;
        break;
    case '-':
        rez = numri1 - numri2;
        break;
    case '*':
        rez = numri1 * numri2;
        break;
    case '/':
        if (numri2 == 0)
        {
            cout << "Gabim ne pjestim, nr2=0" << endl;
            goto lexoNr2;
        }
        else
        {
            rez = numri1 / numri2;
        }
        break;
    default:
        cout << "Operatori gabim" << endl;
        goto leximi;
    }

    cout << "Rezulatati " << rez;

    return 0;
}