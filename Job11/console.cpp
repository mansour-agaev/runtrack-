#include <iostream>

int main()
{
    // Déclaration des variables pour stocker les entiers saisis par l'utilisateur
    int n, m;

    // Demande à l'utilisateur d'entrer les deux entiers
    std::cout << "Entrez le premier entier (n) : ";
    std::cin >> n;

    std::cout << "Entrez le deuxième entier (m) : ";
    std::cin >> m;

    // Affiche les entiers avant l'échange
    std::cout << "Avant l'echange : n = " << n << ", m = " << m << std::endl;

    // Échange le contenu des entiers en utilisant une variable temporaire
    int temp = n;
    n = m;
    m = temp;

    // Affiche les entiers après l'échange
    std::cout << "Apres l'echange : n = " << n << ", m = " << m << std::endl;

    return 0;
}
