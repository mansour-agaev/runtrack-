#include <iostream>

int main()
{
    // Déclaration de la variable pour stocker l'entier donné par l'utilisateur
    int entier;

    // Demande à l'utilisateur d'entrer un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;

    // Affiche la table de multiplication
    std::cout << "Table de multiplication de " << entier << ":" << std::endl;
    for (int i = 1; i <= 10; ++i)
    {
        std::cout << entier << " x " << i << " = " << entier * i << std::endl;
    }

    return 0;
}
