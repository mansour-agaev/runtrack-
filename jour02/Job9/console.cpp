#include <iostream>
using namespace std;

int main()
{
    int nombre, a, b;

    cout << "Entrez un entier : ";
    cin >> nombre;

    cout << "Entrez la borne inférieure (a) : ";
    cin >> a;

    cout << "Entrez la borne supérieure (b) : ";
    cin >> b;

    if (a < b && nombre >= a && nombre <= b)
    {
        cout << "GAGNE" << endl;
    }
    else
    {
        cout << "PERDU" << endl;
    }

    return 0;
}
