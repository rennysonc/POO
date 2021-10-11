#ifndef CORRENTISTA_H
#define CORRENTISTA_H

#include <iostream>
using std::cout, std::endl;
#include <iomanip>
using std::setprecision, std::setw, std::fixed;
#include <string>
using std::string;
#include <vector>
using std::vector;
#include <exception>
#include <stdexcept>
using std::runtime_error, std::exception;
#include "Pessoa/Fisica.h"
#include "Pessoa/Juridica.h"
#include "Conta/Corrente.h"
#include "Conta/Limite.h"
#include "Conta/Poupanca.h"
#include "Banco/Banco.h"
#include "Banco/Data.h"

class Correntista
{
public:
    Correntista(string num, Banco &banco) : num(num), banco(banco) {}
    ~Correntista() {}
    void depositar(float valor);
    float retirar(float valor);
    bool tranferir(float valor, string num);
    void saldo();
    void extrato();

private:
    string num;
    Banco &banco;
};

#endif