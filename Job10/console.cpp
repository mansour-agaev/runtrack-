#include <iostream>

int main()
{
    // Déclaration des variables
    double prixHTKiloCarottes, nombreKilos, tauxTVA;

    // Demande à l'utilisateur d'entrer le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTKiloCarottes;

    // Demande à l'utilisateur d'entrer le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> nombreKilos;

    // Demande à l'utilisateur d'entrer le taux de TVA
    std::cout << "Entrez le taux de TVA (en pourcentage) : ";
    std::cin >> tauxTVA;

    // Calcul du prix TTC
    double prixTTC = prixHTKiloCarottes * nombreKilos * (1 + tauxTVA / 100);

    // Affichage du prix TTC
    std::cout << "Le prix TTC des " << nombreKilos << " kilos de carottes est de : " << prixTTC << " euros" << std::endl;

    return 0;
}
