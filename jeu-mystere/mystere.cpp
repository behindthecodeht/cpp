// Jeu Mystere
// 1 Joueur - Nombre aleatoire

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int nb, entry;
    int randmax;
    int niv, loop;

    // DEBUT
    cout << "Bonjour, ce jeu consiste a deviner un nombre genere aleatoirement par l'Ordinateur. C'est Partie !!!\n" << endl;

    // CHOIX DU NIVEAU
    cout << "CHOISIR VOTRE NIVEAU !!!\n" << endl;
    cout << "[1] - FACILE (10 Nombres)\n[2] - INTERMEDIAIRE (100 Nombres)\n[3] - CONFIRMÉ (1000 Nombres)\n" << endl;
    do
    {
        cout << "Choisie votre Niveau : >>> ";
        cin >> niv;

        if (niv < 1 || niv > 3)
            cout << "\nERREUR !!! Mauvaise entree !!! ENTRER UN NOMBRE COMPRIS ENTRE 1 ET 3 !!!" << endl;
        
    } while (niv < 0 || niv > 10);

    if (niv == 1)
        randmax = 10;
    else if (niv == 2)
        randmax = 100;
    else
        randmax = 1000;


    // NOMBRE GENERE PAR L'ORDINATEUR
    cout << "GENERATION DU NOMBRE ..." << endl;
    nb = rand() % randmax + 1;
    
    // SAUVEGARDE DU DEFI ET EFFACEMENT DE L'ECRAN
    system("clear");
    cout << "EXELLENT !!! - DEFI SAUVEGARDÉ ...\n" << endl;


    // SAISIE DU NOMBRE PAR LE PREMIER JOUER ET VERIFICATION
    cout << "PREPAREZ_VOUS A LEVER LE DEFI !!!" << endl;
    cout << "C'EST PARTIE ... \n" << endl;
    do
    {
        cout << "Quel est le nombre ... >>> ";
        cin >> entry;

        if (entry < nb)
            cout << "\nDesolee le nombre est plus grand ... Reessayer ..." << endl;
        else if(entry > nb)
            cout << "\nDesolee le nombre est plus petit ... Reessayer ..." << endl;
        else
            cout << "\nBRAVO !!! Vous Avez Gagner !!!\n" << endl;
        
    } while (entry != nb);
    

    // LOOP POUR CONTINUER
    cout << "Voulez-vous continuer ? [tape (1) pour continuer] >>> ";
    cin >> loop;

    if (loop == 1){
        cout << endl;
        main();
    } 
    else
        exit(0);
        
    return 0;
}