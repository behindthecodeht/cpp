#include <iostream>
using namespace std;

int main()
{
	int nb = 10;
	int tab[nb];
	
	cout << "Entrer le 1 nombre : ";
	cin >> tab[0];
	
	for(int i = 1;i < nb;i++)
	{
		do
		{
			cout << "Entrer le " << i+1 << " nombre : ";
			cin >> tab[i];
			
			if(tab[i] != tab[i-1]+1)
			{
				cout << "ERREUR !!! Le nombre doit etre consécutif par rapport au nombre précédent !" <<endl;
			}
			
		}while(tab[i] != tab[i-1]+1);
	}
	
	cout << "\n\nLes " << nb << " nombres sont :"<<endl;
	
	for(int i=0;i<nb;i++)
	{
		cout << tab[i] << " ,";
	}
	
	return 0;
}
