#include <iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 ...
int main()
{
    int n;
    cout << "Vendosni sa numra te seris fibonacci te shtypen: ";
    cin >> n;

    int a = 0, b = 1;
    int i = 1;
    int c;

    while (i <= n)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;

        i++;
    }

    return 0;
}