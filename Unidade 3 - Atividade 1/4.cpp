#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    cout << right;
    cout << "Fahrenheit | Celsius" << endl;
    for (int i = 0; i < 213; i++)
        cout << setw(9) << fixed << setprecision(1) << float(i) << "  |  " << (5.0 / 9.0 * (i - 32)) << endl;

    return 0;
}