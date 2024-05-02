#include <iostream>
#include <cmath>
using namespace std;

// Fonction pour calculer le nombre de chiffres dans un nombre
int nombreDeChiffres(int nombre)
{
    int count = 0;
    while (nombre != 0)
    {
        nombre /= 10;
        count++;
    }
    return count;
}

// Fonction pour vérifier si un nombre est un nombre narcissique
bool estNarcissique(int nombre)
{
    int nombreOriginal = nombre;
    int somme = 0;
    int puissance = nombreDeChiffres(nombre);

    // Calcul de la somme des chiffres élevés à la puissance du nombre de chiffres
    while (nombre != 0)
    {
        int chiffre = nombre % 10;
        somme += pow(chiffre, puissance);
        nombre /= 10;
    }

    // Vérification si la somme est égale au nombre original
    return somme == nombreOriginal;
}

int main()
{
    int nombre;

    cout << "Entrez un nombre : ";
    cin >> nombre;

    if (estNarcissique(nombre))
    {
        cout << nombre << " est un nombre narcissique." << endl;
    }
    else
    {
        cout << nombre << " n'est pas un nombre narcissique." << endl;
    }

    return 0;
}
