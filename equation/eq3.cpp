// Equation du segond degre dans C

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, delta;

    cout << "Entrer A, B  et C : ";
    cin >> a >> b >> c;

    if (a != 0)
    {
        delta = pow(b, 2) - 4 * a * c;

        if (delta > 0)
            cout << "Deux Racines distincts : x' = " << (- b + sqrt(delta))/ (2 * a) << " et x'' = " << (- b - sqrt(delta))/ (2 * a) << endl;
        else if (delta == 0)
            cout << "Racines Doubles : x' = x'' = " << - b / (2 * a) << endl;
        else
            cout << "Deux Racines complexes Conjugues : x' = ReZ(" << - b /(2 * a) << ") & ImZ(" << sqrt(- delta) / (2 * a) << "i) et x'' = (" << - b /(2 * a) << ") & ImZ(" << - (sqrt(- delta) / (2 * a)) << "i) " << endl;
    }
    else
        if (b != 0)
            if ( c!= 0)
                cout << "Solution : " << -c/b << endl;
            else
                cout << "Solution : 0" << endl;
        else
            if ( c!= 0)
                cout << "Aucune Solution ! " << endl;
            else
                cout << "Solution : R" << endl;   

    main();

    return 0;
}
 