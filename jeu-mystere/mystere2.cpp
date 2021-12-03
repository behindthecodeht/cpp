
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){

    int nb, entry;
    int randmax;
    int niv, loop;

    // DEBUT
    cout << "Bonjour, ce jeu consiste a deviner un nombre defini par un de tes camarades. C'est Partie !!!\n" << endl;

    // CHOIX DU NIVEAU PAR LE PREMIER JOUEUR
    cout << "JOUEUR 1 - CHOISIR VOTRE NIVEAU !!!\n" << endl;
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


    // DEFINITION DU NOMBRE PAR LE SEGOND JOUEUR
    cout << "JOUEUR 2 - LE DEFI !!!" << endl;
    do
    {
        cout << "Entrer un nombre compris entre 1 et " << randmax << " : >>> ";
        cin >> nb;

        if (nb < 1 || nb > randmax)
            cout << "\nERREUR !!! Mauvaise entree !!!" << endl;
        
    } while (nb < 1 || nb > randmax);
    
    
    // SAUVEGARDE DU DEFI ET EFFACEMENT DE L'ECRAN
    system("clear");
    cout << "EXELLENT !!! - DEFI SAUVEGARDE ...\n" << endl;



    // SAISIE DU NOMBRE PAR LE PREMIER JOUER ET VERIFICATION
    cout << "JOUEUR 1 - PREPAREZ_VOUS A LEVER LE DEFI !!!" << endl;
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