#include <iostream>
using namespace std;

int main()
{
    char operation;
    double nombre1, nombre2, resultat;

    cout << "Entrez le premier nombre : ";
    cin >> nombre1;

    cout << "Entrez l'opération (+, -, *, /) : ";
    cin >> operation;

    cout << "Entrez le deuxième nombre : ";
    cin >> nombre2;

    switch (operation)
    {
    case '+':
        resultat = nombre1 + nombre2;
        break;
    case '-':
        resultat = nombre1 - nombre2;
        break;
    case '*':
        resultat = nombre1 * nombre2;
        break;
    case '/':
        if (nombre2 != 0)
            resultat = nombre1 / nombre2;
        else
        {
            cout << "Erreur: Division par zéro!" << endl;
            return 1;
        }
        break;
    default:
        cout << "Erreur: Opération non valide!" << endl;
        return 1;
    }

    cout << "Le résultat de " << nombre1 << " " << operation << " " << nombre2 << " est : " << resultat << endl;

    return 0;
}
