
#include <iostream>
#include <limits>
#include "Livre.hpp"

using namespace std;

int main() {

    int nombreLivres;

    // Demander le nombre de livres a enregistrer
    cout << "Combien de livres souhaitez-vous ajouter ? ";
    cin >> nombreLivres;

    // Verifier que le nombre demande est positif
    if (nombreLivres <= 0) {
        cout << "Erreur : le nombre de livres doit etre positif." << endl;
        return 1;
    }

    // Creation dynamique d'un tableau d'objets Livre
    Livre* livres = new Livre[nombreLivres];

    // Saisie des informations de chaque livre
    for (int i = 0; i < nombreLivres; i++) {

        string titre;
        double prix;

        cout << "\n--- Livre " << i + 1 << " ---" << endl;

        // Vider le retour a la ligne restant apres la saisie precedente
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Titre : ";
        getline(cin, titre);

        cout << "Prix (DH) : ";
        cin >> prix;

        // Affectation des informations a l'objet correspondant
        livres[i] = Livre(titre, prix);
    }

    // Affichage de tous les livres enregistres
    cout << "\n===== LISTE DES LIVRES =====" << endl;

    for (int i = 0; i < nombreLivres; i++) {
        cout << "\nLivre numero " << i + 1 << endl;
        livres[i].afficher();
    }

    // Liberation de tout le tableau d'objets
    delete[] livres;

    // Le pointeur ne conserve plus l'adresse du tableau libere
    livres = nullptr;

    cout << "\nMemoire du tableau liberee avec succes." << endl;

    return 0;
}
