#include <iostream>
using namespace std;

int main()
{
    int n, i;
    int entry, somPos, somNeg;
    int nbPos, nbNeg, nbNull, nbPair, nbImpair;

    cout << "Conbien de nombre voulez-vous saisir ? >>> ";
    cin >> n;

    i = 1;
    somPos = somNeg = 0;
    nbPos = nbNeg = nbNull = 0;
    nbPair = nbImpair = 0;

    do
    {
        cout << "Entrer le [" << i << "] nombre : >>> ";
        cin >> entry;

        if (entry > 0)
        {
            somPos += entry;
            nbPos += 1;
        }else if (entry < 0)
        {
            somNeg += entry;
            nbNeg += 1;
        }else{
            nbNull += 1;
        }

        if (entry % 2 == 0)
        {
            nbPair += 1;
        }else
        {
            nbImpair += 1;
        }
        
        i++;
    } while (i <= n);

    /*
    
    // DECOMMENTER LE BLOC POUR AFFICHER LES INFORMATIONS

    // DEBUG INFOS
    cout << endl;
    cout << "********** DEBUG INFOS **********" << endl;
    cout << endl;
    cout << "Somme des elements Positif : " << somPos << endl;
    cout << "Somme des elements Négatifs : " << somNeg << endl;
    cout << endl;
    cout << "Nombre d'elements Positif : " << nbPos << endl;
    cout << "Nombre d'elements Négatifs : " << nbNeg << endl;
    cout << endl;
    cout << "Nombre d'elements Pairs : " << nbPair << endl;
    cout << "Nombre d'elements Impairs : " << nbImpair << endl;
    cout << endl;
    cout << "********** END DEBUG INFOS **********" << endl;
    cout << endl;
    // END DEBUG INFOS
    
    */

    if (nbPos)
        cout << "La moyenne des elements Positifs est : " << somPos / nbPos << endl;
    else
        cout << "On ne peut pas calculer la moyenne des elements Positifs, puisqu'il y en a Aucun ..." << endl;

    cout << endl;
    
    if(nbNeg)    
        cout << "La moyenne des elements négatifs est : " << somNeg / nbNeg << endl;
    else
        cout << "On ne peut pas calculer la moyenne des elements Négatifs, puisqu'il y en a Aucun ..." << endl;

    cout << endl;

    if (nbPos > nbNeg)
        cout << "Il y a plus d'elements Positifs que Négatifs." << endl;
    else if(nbPos < nbNeg)
        cout << "Il y a plus d'elements Négatifs que Positifs." << endl;
    else
        cout << "Il y a autant d'elements Positifs que Négatifs" << endl;
    
    cout << endl;

    if (nbPair > nbImpair)
        cout << "Il y a plus d'elements Pairs qu'Impairs." << endl;
    else 
        cout << "Il y a plus d'elements Impairs que Pairs." << endl;
    
    
    return 0;
}
