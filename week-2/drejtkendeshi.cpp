#include <iostream>
using namespace std;

// hyrje a, b | dalje perimteri dhe siperfaqja
int main()
{
    double a;
    cout << "Vendose vleren e brinjes a: ";
    cin >> a;

    double b;
    cout << "Vendose vleren e brinjes b: ";
    cin >> b;

    double perimteri = 2 * (a + b);

    cout << "Perimetri eshte ";
    cout << perimteri;

    cout << "Siperfaqja: ";
    cout << a * b;

    return 0;
}