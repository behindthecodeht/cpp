#include <iostream>
using namespace std;

int main()
{;
    int search, max;
    int tab[12][8] = {
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 9, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 15, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5, 6, 7, 8},
    };

    max = tab[0][0];

    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (tab[i][j]>max)
                max = tab[i][j];
        }
    }
    
    cout << "La plus grande Valeur est : " << max << endl;
    
    return 0;
}
