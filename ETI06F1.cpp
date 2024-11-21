#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const int test_nr = 5;
    const double pi_const = 3.141592654;
    double radius, length = 0.0;

    
    for (int i = 0; i < test_nr; i++)
    {
        cin >> radius >> length;
        cout << setprecision(2) << fixed << ((radius * radius) - ((length * length) / 4)) * pi_const << endl;


    }
    return 0;
}

