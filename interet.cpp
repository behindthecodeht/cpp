#include <iostream>
using namespace std;

int main()
{
    float capital, capital_debut, capital_final, interet_anuel;
    int nb;

    cout << "Entrer le capital du Debut : ";
    cin >> capital_debut;

    capital_final = capital = capital_debut;
    nb = 0;

    cout << endl;

    while (capital_final < (2*capital_debut))
    {
        // Calcul de l'Interet sur l'Annee ...
        interet_anuel = capital * 0.08;

        // Cumulation de montant du capital final
        capital_final += interet_anuel;

        // Annee
        nb += 1;

        

        // DECOMMENTER LES BLOC [1] et [2] POUR AFFICHER LA PROGRESSION DU PROGRAMME
        
        /* 
        // BLOC [1]

        // DEBUG INFOS
        cout << "********** DEBUG INFOS Annee [" << nb << "]  **********" << endl;
        cout << endl;
        
        // Informations relatifs a l'operation ...
        cout << "Annee :" << nb << endl;
        cout << "Capital : " << capital << endl;
        cout << "Interet Annuel : " << interet_anuel << endl;
        cout << "Capital Final : " << capital_final << endl;

        // END BLOC [1] 
        */


        // Calcul du nouveau capital
        capital = capital_final;


        /* 
        // BLOC [1]

        cout << "\nNouveau Capital : " << capital << endl;

        cout << endl;
        cout << "********** END DEBUG INFOS **********" << endl;
        cout << endl;
        // END DEBUG INFO
        
        // END BLOC [1] 
        */

    }

    cout << endl;
    cout << "\n*********************************\n";

    cout << "Capital au debut : " << capital_debut << endl;
    cout << "Capital Final : " << capital_final << endl;
    cout << "Nombre d'Annee : " << nb << endl;

    cout << "\n*********************************\n" << endl;

    cout << "Le capital sera double, dans " << nb << " ans .\n" << endl;
    
    return 0;
}
