#include <iostream>
using namespace std;

int main()
{
    // Boucle externe pour les multiplicateurs de 1 à 10
    for (int multiplicateur = 1; multiplicateur <= 10; ++multiplicateur)
    {
        cout << "Table de multiplication pour " << multiplicateur << " :" << endl;

        // Boucle interne pour les multiplicandes de 1 à 10
        for (int multiplicande = 1; multiplicande <= 10; ++multiplicande)
        {
            int produit = multiplicateur * multiplicande;
            cout << multiplicateur << " * " << multiplicande << " = " << produit << endl;
        }

        cout << endl; // Pour séparer les tables de multiplication
    }

    return 0;
}
