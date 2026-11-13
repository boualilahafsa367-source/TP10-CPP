
#include <iostream>
#include <string>
#include <limits>
#include "Contact.hpp"
#include "FonctionsCarnet.hpp"

using namespace std;

int main()
{
    // Definit le nombre maximum de contacts
    const int capacite = 5;

    // Alloue dynamiquement un tableau de pointeurs
    // Les cases sont initialisees a nullptr
    Contact** carnet = new Contact*[capacite]{};

    int nombreContacts = 0;
    int choix;

    do
    {
        cout << "\n===== GESTION DU CARNET D'ADRESSES =====" << endl;
        cout << "1. Ajouter un contact" << endl;
        cout << "2. Afficher les contacts" << endl;
        cout << "3. Supprimer un contact" << endl;
        cout << "0. Quitter" << endl;
        cout << "Votre choix : ";
        cin >> choix;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choix)
        {
            case 1:
            {
                string nom, telephone, email;

                cout << "Nom : ";
                getline(cin, nom);

                cout << "Telephone : ";
                getline(cin, telephone);

                cout << "Email : ";
                getline(cin, email);

                ajouterContact(carnet, nombreContacts, capacite,
                               nom, telephone, email);
                break;
            }

            case 2:
                afficherContacts(carnet, nombreContacts);
                break;

            case 3:
            {
                string nom;

                cout << "Nom du contact a supprimer : ";
                getline(cin, nom);

                supprimerContact(carnet, nombreContacts, nom);
                break;
            }

            case 0:
                cout << "Fermeture du carnet d'adresses..." << endl;
                break;

            default:
                cout << "Choix invalide. Reessayez." << endl;
        }

    } while (choix != 0);

    // Libere chaque objet Contact encore present
    for (int i = 0; i < nombreContacts; i++)
    {
        delete carnet[i];
    }

    // Libere le tableau de pointeurs lui-meme
    delete[] carnet;
    carnet = nullptr;

    cout << "Toute la memoire a ete liberee." << endl;

    return 0;
}
