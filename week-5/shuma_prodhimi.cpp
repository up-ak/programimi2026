#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Vendosni nje numer n: ";
    // cin >> n;
    n = 10;

    // int s = 0;
    // int i = 1;

    // while (i <= n)
    // {
    //     s += i;
    //     i++;
    // }

    // int p = 1;
    // i = 1;

    // while (i <= n)
    // {
    //     p = p * i;
    //     i++;
    // }

    int s = 0;
    int p = 1;
    int i = 1;

    while (i <= n)
    {
        s += i;
        p *= i;
        i++;
    }

    int z = s + p;

    cout << "Z: " << z << endl;

    return 0;
}