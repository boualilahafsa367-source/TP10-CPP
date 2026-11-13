
#include "Livre.hpp"
#include <iostream>
using namespace std;

// Initialisation des attributs du livre
Livre::Livre(string t, double p) {
    titre = t;
    prix = p;
}

// Affichage du titre et du prix
void Livre::afficher() const {
    cout << "Titre : " << titre << endl;
    cout << "Prix : " << prix << " DH" << endl;
}
