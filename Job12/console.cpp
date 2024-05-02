#include <iostream>

int main()
{
    // Déclaration des variables
    int entier;
    double somme = 0;

    // Demander à l'utilisateur d'entrer cinq entiers
    std::cout << "Entrez cinq entiers : " << std::endl;

    for (int i = 0; i < 5; ++i)
    {
        std::cin >> entier;
        somme += entier; // Ajouter l'entier à la somme
    }

    // Calculer la moyenne
    double moyenne = somme / 5;

    // Afficher la moyenne
    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}
