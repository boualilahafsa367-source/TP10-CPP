
#include "Contact.hpp"
#include <iostream>
using namespace std;

// Initialise les trois informations du contact
Contact::Contact(string n, string t, string e)
{
    nom = n;
    telephone = t;
    email = e;
}

// Affiche les informations d'un contact
void Contact::afficher() const
{
    cout << "Nom : " << nom << endl;
    cout << "Telephone : " << telephone << endl;
    cout << "Email : " << email << endl;
}

// Retourne le nom pour faciliter la recherche
string Contact::getNom() const
{
    return nom;
}
