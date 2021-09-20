#include <iostream>
using std::cout, std::endl;

#include "IntegerSet.h"

int main()
{
    int lista[] = {2, 4, 6, 8, 10};
    IntegerSet ar_1, ar_2(lista, 11);
    ar_1.insertElement(1).insertElement(2).insertElement(3).insertElement(4).insertElement(5).insertElement(6);
    cout << "ar_1: ";
    ar_1.print();
    cout << "ar_2: ";
    ar_2.print();
    cout << "ar_3: ";

    IntegerSet ar_3 = unionOfSets(ar_1, ar_2);
    ar_3.print();
    cout << "ar_4: ";
    IntegerSet ar_4 = intersectionOfSets(ar_1, ar_2);
    ar_4.print();

    return 0;
}