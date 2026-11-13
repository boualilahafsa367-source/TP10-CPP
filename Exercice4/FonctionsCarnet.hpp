
#ifndef FONCTIONS_CARNET_HPP
#define FONCTIONS_CARNET_HPP

#include "Contact.hpp"
#include <string>
using namespace std;

// Ajoute un contact si le carnet n'est pas plein
bool ajouterContact(Contact** carnet, int& nombreContacts,
                    int capacite, string nom,
                    string telephone, string email);

// Affiche tous les contacts du carnet
void afficherContacts(Contact** carnet, int nombreContacts);

// Supprime un contact en utilisant son nom
void supprimerContact(Contact** carnet, int& nombreContacts, string nom);

#endif
