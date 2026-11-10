#include <iostream>
using namespace std;

int main()
{
    const int n = 7;
    int vargu[n];

    cout << "Vendosi " << n << " numra: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> vargu[i];

        if (vargu[i] < 0)
        {
            cout << "Vlera eshte negative. Vendose perseri: " << endl;
            i--;
        }
    }

    int a, b;

    cout << "Vendose a: ";
    cin >> a;
    cout << "Vendose b: ";
    cin >> b;
    // Të numërohen dhe shtypen se sa nga anëtarët e vargut kanë vlerë
    // mes vlerës a dhe b (duke mos përfshirë vlerat e a dhe b).

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (vargu[i] > a & vargu[i] < b)
        {
            count++;
        }
    }

    cout << "Numrat ne mes jane: " << count;

    return 0;
}