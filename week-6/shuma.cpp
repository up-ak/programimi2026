#include <iostream>
using namespace std;

int main()
{
    int piket[10] = {60, 70, 80, 90, 100, 99, 98, 87, 96, 66};

    int stek = 0;
    int scift = 0;

    for (int i = 0; i <= 10; i++)
    {
        if (piket[i] % 2 == 0)
        {
            scift += piket[i];
        }
        else
        {
            stek += piket[i];
        }
    }

    cout << "Piket cift: " << scift << endl;
    cout << "Piket tek: " << stek << endl;

    return 0;
}