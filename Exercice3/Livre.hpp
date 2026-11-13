
#ifndef LIVRE_HPP
#define LIVRE_HPP

#include <string>
using namespace std;

// Classe qui represente un livre
class Livre {
private:
    string titre;
    double prix;

public:
    // Constructeur pour initialiser le titre et le prix
    Livre(string t = "", double p = 0.0);

    // Methode pour afficher les informations d'un livre
    void afficher() const;
};

#endif
