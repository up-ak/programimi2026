#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Vendosni nje numer n: ";
    cin >> n;

    int i = 1;

    // x % 2 => 0 ose 1

    do
    {
        if (i % 2 == 1)
        {
            cout << i << " ";
        }
        i++;
    } while (i <= n);

    return 0;
}