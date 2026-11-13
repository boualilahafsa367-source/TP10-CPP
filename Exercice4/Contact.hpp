
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
using namespace std;

class Contact
{
private:
    string nom;
    string telephone;
    string email;

public:
    // Constructeur : initialise les informations du contact
    Contact(string n, string t, string e);

    // Affiche les informations du contact
    void afficher() const;

    // Permet de recuperer le nom du contact
    string getNom() const;
};

#endif
