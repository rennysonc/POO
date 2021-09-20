#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    cout << right;
    for (int i = 33; i < 127; i++)
    {
        cout << setw(3) << i << " - ";
        cout.put(i);
        cout << endl;
    }

    return 0;
}