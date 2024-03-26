#include <iostream>


int main()
{
	int liczba_testow, liczba_zmiennych, suma;
	int zmienna; 

	std::cin >> liczba_testow;

	for (int i = 0; i < liczba_testow; i++)
	{
		std::cin >> liczba_zmiennych;
		suma = 0;
		for (int k = 0; k < liczba_zmiennych; k++)
		{
			std::cin>> zmienna;
			suma += zmienna; 
		}
		std::cout << suma << std::endl; 
		
	}
	return 0; 
}

