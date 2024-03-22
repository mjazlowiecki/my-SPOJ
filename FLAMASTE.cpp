#include <iostream>
using namespace std; 

//string Porownanie(int dlugosc, string wyraz)



int main()
{
    //Liczba zestawów danych 
    int ile = 0; 
    cin >> ile;
    
    //Wyraz podawany przez użytkownika 
    string wyraz;
    
    //Deklaracja obecnie analizowanego znaku
    char znak;

    //Pętla do pobierania danych  
    int licznik_znakow = 0;            // Zmienna licznika

    int nowy_znak = 0;                 // Adres pierwszego innego znaku niż poprzedni 
    for (int i = 0; i < ile; i++)      // Pętla do wczytywania wyrazów
    {
        cin >> wyraz; 

        for (int j = nowy_znak; j < wyraz.length(); j++)       //Pętla do iteracji po literach
        {
           
            j = nowy_znak;
            znak = wyraz[j];
            for (int k = (nowy_znak); k < wyraz.length(); k++)   //Petla zliczająca powtórzenia poszczególnych znaków
            {
                if (znak == wyraz[k]) licznik_znakow++;
                else if (znak != wyraz[k])
                {
                    nowy_znak = k; 
                    break;
                }
            }
            if (licznik_znakow == 1) cout << wyraz[j];
            else if (licznik_znakow == 2)
            {
               
                cout << wyraz[j] << wyraz[j];
            }
            else cout << wyraz[j] << licznik_znakow;
            if (wyraz[j + (licznik_znakow)] == '\0') //Warunek zakończenia pętli, gdy ostatnie znaki wyarazu się powtarzają
            {
                cout << endl; 
                licznik_znakow = 0;
                nowy_znak = 0;
                break;               
            }
            licznik_znakow = 0; //Zerowanie licznika znaków dla następnego znaku...
            // j = nowy_znak
        }   
    }
    return 0; 
}

