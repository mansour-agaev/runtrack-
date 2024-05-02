#include <iostream>

int main()
{
    // Déclaration des variables pour stocker les nombres
    int nombre1, nombre2;

    // Demande à l'utilisateur d'entrer les nombres
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    // Additionne les nombres
    int somme = nombre1 + nombre2;

    // Affiche le résultat
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;

    return 0;
}
