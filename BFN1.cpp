#include <iostream>
#include <string>
using namespace std;

string reverse_string(string liczba) 
{
	for (int i = 0, j = liczba.length() - 1; i < j; i++, j--) 
	{
		char temp = liczba[i];
		liczba[i] = liczba[j];
		liczba[j] = temp;
	}
	return liczba;
}

int main()
{
	int ile, liczba_l;
	int liczba_dodawan = 0;
	string liczba;
	bool czy_palidnrom; 
	
	int liczba1 = 0;
	int liczba2 = 0;

	cin >> ile;
	for (int i = 0; i < ile; i++)
	{
		cin >> liczba;
		czy_palidnrom = false;
		do {
			if (reverse_string(liczba) == liczba)
			{
				cout << liczba << " " << liczba_dodawan << endl;
				czy_palidnrom = true;
			}
			else
			{
				liczba1 = stoi(liczba);
				string odwrocona = reverse_string(liczba);
				liczba2 = stoi(odwrocona);
				
				liczba_l = liczba1 + liczba2;
				liczba = to_string(liczba_l);
				
				liczba_dodawan++;
			}
		} while (czy_palidnrom == false); 
		liczba_dodawan = 0; 
		liczba_l = 0;
		liczba1 = 0; 
		liczba2 = 0; 
		liczba.clear(); 
	}
	return 0; 
}