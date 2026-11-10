#include <iostream>
using namespace std;

int main()
{
    int piket[10] = {60, 70, 80, 90, 100, 99, 98, 87, 96, 66};

    // piket[4] = 98;
    // cout << piket[4] << endl;
    int s = 0;

    for (int i = 0; i <= 10; i++)
    {
        s += piket[i];
    }

    double m = s / 10.0;

    cout << "Mesatarja: " << m << endl;

    // int stek = 0;
    // int scift = 0;
    // if ( _ % 2 == 0)

    return 0;
}