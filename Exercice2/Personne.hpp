
#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>
using namespace std;

// Classe qui represente une personne
class Personne {
private:
    string nom;
    int age;

public:
    // Constructeur pour initialiser les informations
    Personne(string n, int a);

    // Methode qui affiche les informations de la personne
    void afficher() const;
};

#endif
