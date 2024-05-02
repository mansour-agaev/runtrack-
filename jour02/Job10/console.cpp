#include <iostream>
#include <cmath> // Pour la fonction sqrt
using namespace std;

int main()
{
    double nombre;

    do
    {
        cout << "Entrez un nombre (0 pour arrêter) : ";
        cin >> nombre;

        if (nombre < 0)
        {
            cout << "La racine carrée d'un nombre négatif n'est pas définie." << endl;
        }
        else if (nombre > 0)
        {
            double racine = sqrt(nombre);
            cout << "La racine carrée de " << nombre << " est : " << racine << endl;
        }

    } while (nombre != 0);

    return 0;
}
