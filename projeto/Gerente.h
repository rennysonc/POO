#ifndef GERENTE_H
#define GERENTE_H

#include <iostream>
using std::cout, std::endl;
#include <string>
using std::string, std::to_string;
#include <vector>
using std::vector;
#include <stdexcept>
#include <exception>
using std::runtime_error, std::exception;
#include "Pessoa/Fisica.h"
#include "Pessoa/Juridica.h"
#include "Conta/Corrente.h"
#include "Conta/Limite.h"
#include "Conta/Poupanca.h"
#include "Banco/Banco.h"
#include "Banco/Data.h"
class Gerente
{
public:
    Gerente(Banco &banco) : banco(banco), numConta(banco.getContContas()) {}
    ~Gerente() {}
    void abrir(vector<string> &, int, int, float = 0.0, string = "0/0/0");
    void fechar(string);
    void consultar(string);
    void atualizar(string, string, int);

private:
    Banco &banco;
    unsigned int numConta = 0;
    void gerarNumConta();
};
#endif