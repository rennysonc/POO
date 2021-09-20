#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#include <iostream>
#include "Contato.h"
using namespace std;

class PessoaJuridica : public Contato
{
private:
    string CNPJ, inscricaoEstadual, razaoSocial;

public:
    PessoaJuridica(string nome, string end, string data, string email, string estadoC, string CNPJ, string inscricao, string razao) : Contato(nome, end, data, email, estadoC), CNPJ(CNPJ), inscricaoEstadual(inscricao), razaoSocial(razao) {}
    virtual string getIdentificador(void) { return CNPJ; }
};

#endif