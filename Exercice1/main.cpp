
#include <iostream>
using namespace std;

int main() {

    int taille;

    // Demander à l'utilisateur le nombre d'elements du tableau
    cout << "Combien de nombres souhaitez-vous saisir ? ";
    cin >> taille;

    // Verifier que la taille saisie est valide
    if (taille <= 0) {
        cout << "Erreur : la taille doit etre positive." << endl;
        return 1;
    }

    // Allocation dynamique d'un tableau d'entiers
    int* nombres = new int[taille];

    // Saisie des valeurs par l'utilisateur
    cout << "\n--- Saisie des nombres ---" << endl;

    for (int i = 0; i < taille; i++) {
        cout << "Nombre " << i + 1 << " : ";
        cin >> nombres[i];
    }

    // Affichage des valeurs enregistrees dans le tableau
    cout << "\n--- Contenu du tableau ---" << endl;

    for (int i = 0; i < taille; i++) {
        cout << "Element [" << i << "] = "
             << nombres[i] << endl;
    }

    // Liberation de la memoire reservee avec new[]
    delete[] nombres;

    // Eviter de conserver une adresse devenue invalide
    nombres = nullptr;

    cout << "\nMemoire liberee avec succes." << endl;

    return 0;
}
