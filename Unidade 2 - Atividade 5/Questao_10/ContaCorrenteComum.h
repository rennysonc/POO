#ifndef CONTACORRENTECOMUM_H
#define CONTACORRENTECOMUM_H

#include <iostream>
#include "Conta.h"
using namespace std;

class ContaCorrenteComum : public Conta
{
public:
    ContaCorrenteComum(string numero, string nome, float saldo) : Conta(numero, nome, saldo) {}
    virtual void extrato(void);
};

void ContaCorrenteComum::extrato(void)
{
    cout << "CONTA| " << numero << endl;
    cout << "NOME| " << nome << endl;
    cout << "SALDO| " << saldo << endl;
    cout << "TRANSACOES DA CONTA| " << endl;
    for (int i = 0; i < contador; i++)
    {
        cout << transacoes[i] << endl;
    }
    cout << endl;
}

#endif