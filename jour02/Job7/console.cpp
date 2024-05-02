#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Entrez la borne inférieure (a) : ";
    cin >> a;

    cout << "Entrez la borne supérieure (b) : ";
    cin >> b;

    cout << "Entiers de " << a << " à " << b << " : " << endl;

    // Boucle for pour afficher les entiers de a à b
    for (int i = a; i <= b; ++i)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
