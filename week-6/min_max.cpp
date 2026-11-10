#include <iostream>
using namespace std;

int main()
{
    int piket[10] = {60, 70, 80, 90, 100, 99, 98, 87, 96, 66};

    int min = piket[0];
    int max = piket[0];

    for (int i = 1; i < 10; i++)
    {
        if (piket[i] < min)
        {
            min = piket[i];
        }

        if (piket[i] > max)
        {
            max = piket[i];
        }
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}