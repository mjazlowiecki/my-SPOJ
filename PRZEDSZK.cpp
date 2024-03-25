#include <iostream>

int main()
{
        //  1. Każdy z przedszkolaków powinien otrzymać jednakową (niezerową) liczbę cukierków.
        //  2. Liczba słodyczy powinna być taka, by można było rozdać je wszystkie. 
        //  3. Pani musi kupić minimalną liczbę cukierków spełniającą dwa wcześniejsze warunki.
    int ile_danych, r; 
    int gr1, gr2, OG_gr1, OG_gr2; 

    std::cin >> ile_danych; 

    for (int i = 0; i < ile_danych; i++)
    {
        std::cin >> gr1 >> gr2; 
        OG_gr1 = gr1;
        OG_gr2 = gr2; 
        while (OG_gr2)
        {
            r = OG_gr1 % OG_gr2;
            OG_gr1 = OG_gr2;
            OG_gr2 = r;
            
        }
        std::cout << (gr1*gr2)/OG_gr1 << std::endl; 
  

    
    }
    return 0; 
}


