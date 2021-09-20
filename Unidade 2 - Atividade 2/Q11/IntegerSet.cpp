#include <iostream>
using std::cout, std::endl;

#include "IntegerSet.h"

IntegerSet::IntegerSet()
{
    this->arrey = new int[100];
    for (int i = 0; i < 100; i++)
    {
        this->arrey[i] = 0;
    }
}

IntegerSet::IntegerSet(int arrey[], int tam)
{
    this->arrey = new int[100];
    for (int i = 0; i < 100; i++)
    {
        this->arrey[i] = 0;
    }
    for (int i = 0; i < tam; i++)
    {
        if (arrey[i] > -1 && arrey[i] < 100)
        {
            this->arrey[arrey[i]] = 1;
        }
        else
        {
        }
    }
}

IntegerSet::~IntegerSet()
{
    delete this->arrey;
}

IntegerSet &IntegerSet::insertElement(int n)
{
    if (n > -1 && n < 100)
    {
        if (this->arrey[n] == 1)
        {
            cout << "ja adcionado " << endl;
        }
        else
        {
            this->arrey[n] = 1;
        }
    }
    else
    {
    }
    return *this;
}

IntegerSet &IntegerSet::deleteElement(int n)
{
    if (n > -1 && n < 100)
    {
        this->arrey[n] = 0;
    }
    else
    {
    }
    return *this;
}

IntegerSet &IntegerSet::print()
{
    for (int i = 0; i < 100; i++)
    {
        cout << i << "->" << arrey[i] << " ";
    }
    cout << endl;
    return *this;
}

IntegerSet unionOfSets(const IntegerSet &A, const IntegerSet &B)
{
    IntegerSet C;
    for (int i = 0; i < 100; i++)
    {
        if (A.arrey[i] == 1 || B.arrey[i] == 1)
        {
            C.arrey[i] = 1;
        }
        else
        {
            C.arrey[i] = 0;
        }
    }
    return C;
}

IntegerSet intersectionOfSets(const IntegerSet &A, const IntegerSet &B)
{
    IntegerSet C;
    for (int i = 0; i < 100; i++)
    {
        if (A.arrey[i] == 1 && B.arrey[i] == 1)
        {
            C.arrey[i] = 1;
        }
        else
        {
            C.arrey[i] = 0;
        }
    }

    return C;
}