#include <iostream>
using namespace std;

int nwd(int liczba_A, int liczba_B)
{
    while (liczba_B)
    {
        if (liczba_A == liczba_B)
        {
            return liczba_A;
        }
        else if (liczba_A > liczba_B)
        {
            liczba_A = liczba_A - liczba_B;
        }
        else if (liczba_B > liczba_A)
        {
            liczba_B = liczba_B - liczba_A;
        }
    }
};

int main()
{
    int liczba_testow;
    int a, b;

    cin >> liczba_testow;
    for (int i = 0; i < liczba_testow; i++)
    {
        cin >> a >> b;
        cout << nwd(a, b) << endl;
    }
    return 0;
}

