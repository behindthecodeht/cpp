#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta;

    cout << "Entrer respectivement les coeficients [a], [b] et [c] : " << endl;
    cin >> a >> b >> c;

    if (a == 0)
    {
        cout << "C'est une equation du premier degre de la forme ax + b = 0, soit : " << b << "x + " << c << endl;

        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Les coefficient a et b etant nuls, il y a une infinite de solution." << endl;
            }
            else
            {
                cout << "Equation Irreductible !! Division par zero Impossible." << endl;
            }
        }
        else
        {
            if (c == 0)
            {
                cout << "La sollution de l'equation est X = 0" << endl;
            }
            else
            {
                cout << "La solution de l'equation est : " << -c / b << endl;
            }
        }
    }
    else
    {
        cout << "L'equation a pour expression : " << a << "x^2 + " << b << "x + " << c << endl;
        cout << "Calcul du Discriminant Delta ..." << endl;

        delta = pow(b, 2) - 4 * a * c;

        cout << "Le discriminant delta a pour valeur : " << delta << endl;

        if (delta > 0)
        {
            float x1 = (-b + sqrt(delta)) / 2 * a;
            float x2 = (-b - sqrt(delta)) / 2 * a;

            cout << "L'equation admet deux racines reelles et distinctes X' = " << x1 << " X\" = " << x2 << endl;
        }
        else if (delta < 0)
        {
            cout << "L'equation n'admet pas de solution dans R (L'ensemble des nombres Reels)." << endl;
        }
        else
        {
            cout << "L'equation admet une racine double X' = X\" = " << -b / (2 * a) << endl;
        }
    }

    cout << "RE-EXECUTION DU PROGRAMME .....\n\n";

    main();

    return 0;
}
