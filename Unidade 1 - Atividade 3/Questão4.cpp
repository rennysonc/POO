#include <iostream>

using namespace std;

void swap(int *x, int *y)
{
    int aux = *y;
    *y = *x;
    *x = aux;
    return;
}

int main()
{
    int x, y;
    cout << "Digite o valor da primeira entrada: " << endl;
    cin >> x;
    cout << "Digite o valor da segunda entrada: " << endl;
    cin >> y;
    cout << "X: " << x << " Y: " << y << endl;
    swap(&x,&y);
    cout << "X: " << x << " Y: " << y << endl;
    return 0;
}