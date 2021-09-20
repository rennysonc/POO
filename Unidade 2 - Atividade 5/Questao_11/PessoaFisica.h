#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#include <iostream>
#include "Contato.h"
using namespace std;

class PessoaFisica : public Contato
{
private:
    string CPF;

public:
    PessoaFisica(string nome, string end, string data, string email, string estadoC, string CPF) : Contato(nome, end, data, email, estadoC), CPF(CPF) {}
    virtual string getIdentificador(void) { return CPF; }
};

#endif