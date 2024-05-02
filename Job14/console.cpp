#include <iostream>

int main()
{
    // Demande à l'utilisateur d'entrer un nombre
    int nombre;
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    // Initialise une variable pour stocker le nombre inversé
    int nombreInverse = 0;

    // Inverse le nombre
    while (nombre != 0)
    {
        int chiffre = nombre % 10;                    // Obtient le dernier chiffre du nombre
        nombreInverse = nombreInverse * 10 + chiffre; // Ajoute le chiffre à nombreInverse
        nombre /= 10;                                 // Supprime le dernier chiffre de nombre
    }

    // Affiche le nombre inversé
    std::cout << "Le nombre inverse est : " << nombreInverse << std::endl;

    return 0;
}
 