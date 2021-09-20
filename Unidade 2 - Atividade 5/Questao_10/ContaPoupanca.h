#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H

#include <iostream>
#include "Conta.h"
using namespace std;

class ContaPoupanca : public Conta
{
private:
    string aniversario;

public:
    ContaPoupanca(string numero, string nome, float saldo, string aniversario) : Conta(numero, nome, saldo), aniversario(aniversario) {}
    virtual void extrato(void);
};

void ContaPoupanca::extrato(void)
{
    cout << "CONTA| " << numero << endl;
    cout << "NOME| " << nome << endl;
    cout << "SALDO| " << saldo << endl;
    cout << "ANIVERSARIO| " << aniversario << endl;
    cout << "TRANSACOES DA CONTA| " << endl;
    for (int i = 0; i < contador; i++)
    {
        cout << transacoes[i] << endl;
    }
    cout << endl;
}

#endif