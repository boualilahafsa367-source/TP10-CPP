
#include <iostream>
#include "Personne.hpp"

using namespace std;

int main() {

    // Creation dynamique d'une personne avec son constructeur
    Personne* personne = new Personne("Nadia El Fassi", 24);

    // Appel de la methode afficher() a travers le pointeur
    personne->afficher();

    // Liberation de la memoire reservee pour l'objet
    delete personne;

    // Le pointeur ne designe plus aucun objet
    personne = nullptr;

    cout << "\nMemoire de l'objet liberee." << endl;

    return 0;
}
