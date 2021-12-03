// Equation du Premier degre 

#include <iostream>
using namespace std;

int main()
{
    float a, b;

    cout << "Entrer A et B : ";
    cin >> a >> b;

    if (a != 0)
        if ( b!= 0)
            cout << "Solution : " << -b/a << endl;
        else
            cout << "Solution : 0" << endl;
    else
        if ( b!= 0)
            cout << "Aucune Solution ! " << endl;
        else
            cout << "Solution : R" << endl;   
        
    main();
    return 0;
}
 