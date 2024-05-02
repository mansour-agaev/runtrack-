#include <iostream>

int main()
{
    // Déclaration des variables pour stocker les trois entiers donnés par l'utilisateur
    int nombre1, nombre2, nombre3;

    // Demande à l'utilisateur d'entrer les trois entiers
    std::cout << "Entrez le premier entier : ";
    std::cin >> nombre1;

    std::cout << "Entrez le deuxième entier : ";
    std::cin >> nombre2;

    std::cout << "Entrez le troisième entier : ";
    std::cin >> nombre3;

    // Vérifie le plus grand parmi les trois entiers
    int plusGrand = nombre1; // Supposons que le premier nombre est le plus grand au début

    if (nombre2 > plusGrand)
    {
        plusGrand = nombre2; // Si le deuxième nombre est plus grand, le plus grand devient le deuxième
    }
    if (nombre3 > plusGrand)
    {
        plusGrand = nombre3; // Si le troisième nombre est plus grand, le plus grand devient le troisième
    }

    // Affiche le plus grand des trois entiers
    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}
