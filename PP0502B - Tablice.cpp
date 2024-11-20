#include <iostream>
using namespace std;

int main()
{
    int l_testow;
    int l_liczb;
    const int Max = 100;
    int tablica[Max]; //n(max) = 100

    cin >> l_testow;

    for (int i = 0; i < l_testow; i++)
    {
        cin >> l_liczb;
        for (int k = 0; k < l_liczb; k++)
        {
            cin >> tablica[k];
        }
        for (int j = (l_liczb -1); j >=0; j--)
        {
            cout << tablica[j] << " ";
        }
        cout << endl;
    }
        return 0;
    }
