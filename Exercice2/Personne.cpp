
#include "Personne.hpp"
#include <iostream>
using namespace std;

// Initialisation des attributs avec les valeurs recues
Personne::Personne(string n, int a) {
    nom = n;
    age = a;
}

// Affichage des informations de la personne
void Personne::afficher() const {
    cout << "\n--- Informations de la personne ---" << endl;
    cout << "Nom : " << nom << endl;
    cout << "Age : " << age << " ans" << endl;
}
