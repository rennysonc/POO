#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
using namespace std;

class Conta
{
protected:
    int contador;
    float saldo;
    string numero, nome, transacoes[50];
    virtual void adicionarNaLista(float valor);

public:
    Conta(string numero, string nome, float saldo) : numero(numero), nome(nome), saldo(saldo), contador(0) {}
    void deposito(float valor);
    virtual void retirada(float valor);
    virtual void extrato(void) = 0;
};

void Conta::adicionarNaLista(float valor)
{
    time_t t = time(0);
    tm *now = localtime(&t);
    this->transacoes[contador++] = (valor >= 0 ? "Deposito de " + to_string(valor) : "Retirada de " + to_string(-valor)) + " feito em " + to_string(now->tm_mday) + "/" + to_string(now->tm_mon) + "/" + to_string(now->tm_year + 1900);
}

void Conta::deposito(float valor)
{
    this->saldo += valor;
    this->adicionarNaLista(valor);
}

void Conta::retirada(float valor)
{
    saldo -= valor;
    this->adicionarNaLista(-valor);
}

#endif