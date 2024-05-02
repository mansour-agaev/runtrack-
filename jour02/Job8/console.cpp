#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Entrez la borne inférieure (a) : ";
    cin >> a;

    cout << "Entrez la borne supérieure (b) : ";
    cin >> b;

    cout << "Entiers de " << a << " à " << b << " : " << endl;

    int current = a; // Initialisation de la variable courante

    // Boucle while pour afficher les entiers de a à b
    while (current <= b) {
        cout << current << " ";
        current++; // Incrémentation de la variable courante pour passer à l'entier suivant
    }

    cout << endl;

    return 0;
}
