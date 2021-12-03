#include <iostream>
using namespace std;

int main(){
	
	int nb = 20;
	int som = 0;
	int nbEntrer = 0;
	int tab[nb];
	
	for(int i = 0;i < nb;i++)
	{
		if(i%2 == 0)
		{
			cout << "Entrer "<< i+1 << " nombre : ";
			cin >> tab[i];
			som = som + tab[i];
			nbEntrer = nbEntrer + 1;
			
			if(som >= 100)
				i = nb+1;
		}
		else
		{
			do
			{
				cout << "Entrer "<< i+1 << " nombre : ";
				cin >> tab[i];
				
				if(tab[i] != tab[i-1])
				{
					cout << "Le nombre doit etre egal au precedent. Re-entrer !";
				}
				
			}while(tab[i] != tab[i-1]);
			
			som = som + tab[i];
			nbEntrer = nbEntrer + 1;
			
			if(som >= 100)
				i = nb+1;
		}
	}
	
	cout << som <<endl;
	cout << nbEntrer << "\n" <<endl;
	
	for(int i = 0;i < nbEntrer;i++)
	{
		cout << tab[i] <<endl;
	}
	
	return 0;
}
