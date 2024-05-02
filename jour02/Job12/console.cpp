#include <iostream>
using namespace std;

double sommeHarmonique(int n)
{
    double somme = 0.0;
    for (int k = 1; k <= n; ++k)
    {
        somme += 1.0 / k;
    }
    return somme;
}

int main()
{
    int n;
    cout << "Entrez la valeur de n pour la somme des n premiers termes de la série harmonique : ";
    cin >> n;

    if (n <= 0)
    {
        cout << "n doit être un entier positif." << endl;
    }
    else
    {
        double resultat = sommeHarmonique(n);
        cout << "La somme des " << n << " premiers termes de la série harmonique est : " << resultat << endl;
    }

    return 0;
}
