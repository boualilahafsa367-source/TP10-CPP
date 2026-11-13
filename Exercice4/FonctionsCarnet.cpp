
#include "FonctionsCarnet.hpp"
#include <iostream>
using namespace std;

// Ajoute un nouveau contact dans le tableau dynamique
bool ajouterContact(Contact** carnet, int& nombreContacts,
                    int capacite, string nom,
                    string telephone, string email)
{
    // Verifie si le tableau a encore une place disponible
    if (nombreContacts >= capacite)
    {
        cout << "Le carnet est plein !" << endl;
        return false;
    }

    // Cree dynamiquement un nouvel objet Contact
    carnet[nombreContacts] = new Contact(nom, telephone, email);

    nombreContacts++;

    cout << "Contact ajoute avec succes !" << endl;
    return true;
}

// Parcourt le tableau et affiche chaque contact
void afficherContacts(Contact** carnet, int nombreContacts)
{
    if (nombreContacts == 0)
    {
        cout << "Le carnet est vide." << endl;
        return;
    }

    cout << "\n--- Liste des contacts ---" << endl;

    for (int i = 0; i < nombreContacts; i++)
    {
        cout << "\nContact numero " << i + 1 << endl;
        carnet[i]->afficher();
    }
}

// Recherche un contact par son nom et le supprime
void supprimerContact(Contact** carnet, int& nombreContacts, string nom)
{
    for (int i = 0; i < nombreContacts; i++)
    {
        if (carnet[i]->getNom() == nom)
        {
            // Libere la memoire de l'objet trouve
            delete carnet[i];

            // Decale les pointeurs pour combler la place liberee
            for (int j = i; j < nombreContacts - 1; j++)
            {
                carnet[j] = carnet[j + 1];
            }

            nombreContacts--;

            // La derniere case ne contient plus de contact
            carnet[nombreContacts] = nullptr;

            cout << "Contact supprime avec succes !" << endl;
            return;
        }
    }

    cout << "Aucun contact ne porte ce nom." << endl;
}
