#include <iostream>

int main() {
    // Demande à l'utilisateur d'entrer un entier N
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;

    // Initialise la somme à 0
    int somme = 0;

    // Calcule la somme des cubes de 5^3 à N^3
    for (int i = 5; i <= N; ++i) {
        somme += i * i * i;
    }

    // Affiche la somme
    std::cout << "La somme des cubes de 5^3 à N^3 est : " << somme << std::endl;

    return 0;
}
