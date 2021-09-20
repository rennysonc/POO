#include <iostream>
#include "Complex.h"

using namespace std;

ostream &operator<<(ostream &out, const Complex &obj)
{
    out << obj.parteReal << " - " << obj.parteImaginaria;
    return out;
}

Complex::Complex(float parteReal, float parteImaginaria)
{
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

Complex &Complex::operator+(const Complex &obj)
{
    Complex *anotherObj = new Complex(this->parteReal, this->parteImaginaria);
    anotherObj->parteReal += obj.parteReal;
    anotherObj->parteImaginaria += obj.parteImaginaria;

    return *anotherObj;
}

void Complex::operator+=(const Complex &obj)
{
    this->parteReal += obj.parteReal;
    this->parteImaginaria += obj.parteImaginaria;
}

Complex &Complex::operator-(const Complex &obj)
{
    Complex *anotherObj = new Complex(this->parteReal, this->parteImaginaria);
    anotherObj->parteReal -= obj.parteReal;
    anotherObj->parteImaginaria -= obj.parteImaginaria;

    return *anotherObj;
}

void Complex::operator-=(const Complex &obj)
{
    this->parteReal -= obj.parteReal;
    this->parteImaginaria -= obj.parteImaginaria;
}

Complex Complex::operator++(void)
{
    this->parteReal++;
    return Complex(this->parteReal, this->parteImaginaria);
}

Complex Complex::operator++(int)
{
    ++this->parteReal;
    return Complex(this->parteReal, this->parteImaginaria);
}

Complex Complex::operator--(void)
{
    this->parteReal--;
    return Complex(this->parteReal, this->parteImaginaria);
}

Complex Complex::operator--(int)
{
    --this->parteReal;
    return Complex(this->parteReal, this->parteImaginaria);
}