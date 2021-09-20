#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class Complex
{
private:
    float parteReal, parteImaginaria;
    friend ostream &operator<<(ostream &out, const Complex &obj);

public:
    Complex(float parteReal, float parteImaginaria);
    Complex &operator+(const Complex &obj);
    void operator+=(const Complex &obj);
    Complex &operator-(const Complex &obj);
    void operator-=(const Complex &obj);
    Complex operator++(void);
    Complex operator++(int);
    Complex operator--(void);
    Complex operator--(int);
};

#endif 