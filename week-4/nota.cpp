#include <iostream>
using namespace std;

int main()
{
    int nota;
    char ects;
    string pershkrimi;
    bool kaloj;

    cout << "Nota 10-shkallore:";
    cin >> nota;

    switch (nota)
    {
    case 10:
        ects = 'A';
        pershkrimi = "Shkëlqyeshëm";
        kaloj = true;
        break;
    case 9:
        ects = 'B';
        pershkrimi = "Shumë Mirë";
        kaloj = true;
        break;
    case 8:
        ects = 'C';
        pershkrimi = "Mirë";
        kaloj = true;
        break;
    case 7:
        ects = 'D';
        pershkrimi = "Mjaftueshëm";
        kaloj = true;
        break;
    case 6:
        ects = 'E';
        pershkrimi = "Kalueshëm";
        kaloj = true;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
        ects = 'F';
        pershkrimi = "Dështim";
        kaloj = false;
        break;
    default:
        cout << "Nota gabim";
    }

    cout << "Nota ECTS: " << ects << endl;
    cout << "Përshkrim: " << pershkrimi << endl;

    cout << "Statusi: ";

    if (kaloj)
    {
        cout << "✓ KALUAR";
    }
    else
    {
        cout << "Nuk kalon";
    }

    cout << endl;

    return 0;
}