#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H

#include <iostream>
#include "Conta.h"
using namespace std;

class ContaCorrenteComLimite : public Conta
{
private:
    float limite;

public:
    ContaCorrenteComLimite(string numero, string nome, float saldo, float limite) : Conta(numero, nome, saldo), limite(limite)
    {
        saldo = limite > saldo ? limite : saldo;
    }
    virtual void extrato(void);
    virtual void retirada(float valor);
};

void ContaCorrenteComLimite::extrato(void)
{
    cout << "CONTA| " << numero << endl;
    cout << "NOME| " << nome << endl;
    cout << "SALDO| " << saldo << endl;
    cout << "LIMITE| " << limite << endl;
    cout << "TRANSACOES DA CONTA| " << endl;
    for (int i = 0; i < contador; i++)
    {
        cout << transacoes[i] << endl;
    }
    cout << endl;
}

void ContaCorrenteComLimite::retirada(float valor)
{
    if (saldo - valor > limite)
    {
        saldo -= valor;
        adicionarNaLista(-valor);
    }
    else
    {
        adicionarNaLista(-(saldo - limite));
        saldo = limite;
    }
}

#endif