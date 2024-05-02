#include <iostream>
using namespace std;

int main()
{
    int limite;

    cout << "Entrez la limite pour la suite de Fibonacci : ";
    cin >> limite;

    int terme1 = 0, terme2 = 1, termeSuivant;

    cout << "Suite de Fibonacci jusqu'à la limite " << limite << " :" << endl;
    cout << terme1 << " "; // Affichage du premier terme

    while (terme2 <= limite)
    {
        cout << terme2 << " ";
        termeSuivant = terme1 + terme2;
        terme1 = terme2;
        terme2 = termeSuivant;
    }

    cout << endl;

    return 0;
}
