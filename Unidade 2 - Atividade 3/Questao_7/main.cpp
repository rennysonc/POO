#include <iostream>
#include "Complex.cpp"

using namespace std;

int main(void)
{
    Complex objA(1, 2);
    Complex objB(3, 4);

    cout << objA << endl;
    cout << objB << endl;

    objA += objB;
    cout << objA << endl;

    objB++;
    cout << objB << endl;

    --objA;
    cout << objA << endl;

    return 0;
}