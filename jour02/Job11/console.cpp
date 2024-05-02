#include <iostream>
using namespace std;

// Fonction récursive pour calculer la factorielle
unsigned long long factorielle(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorielle(n - 1);
    }
}

int main()
{
    int nombre;

    cout << "Entrez un nombre entier : ";
    cin >> nombre;

    // Vérification si le nombre est négatif
    if (nombre < 0)
    {
        cout << "La factorielle n'est pas définie pour les nombres négatifs." << endl;
    }
    else
    {
        unsigned long long resultat = factorielle(nombre);
        cout << nombre << "! = " << resultat << endl;
    }

    return 0;
}
