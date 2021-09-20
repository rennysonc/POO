#include <iostream>
using std::cout, std::endl;

#include "IntegerSet.h"

int main()
{
    int lista[] = {0, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    IntegerSet arr1, arr2(lista, 11);
    arr1.insertElement(1).insertElement(2).insertElement(3).insertElement(4).insertElement(5).insertElement(6);
    arr1 << 10 << 11 << 12 << 13 << 14 << 15;
    cout << "Primeiro Array: " << arr1;
    cout << "Segundo Array: " << arr2;

    IntegerSet arr3 = arr1 | arr2;
    cout << "Terceiro Array: " << arr3;
    IntegerSet arr4 = arr1 & arr2;
    cout << "Quarto Array: " << arr4;

    return 0;
}