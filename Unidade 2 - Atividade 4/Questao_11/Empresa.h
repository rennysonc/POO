#ifndef EMPRESA_H
#define EMPRESA_H
#include "..\Questao_08\PessoaJuridica.h"
#include "Final.h"

class Empresa : public PessoaJuridica
{
public:
    ~Empresa();
    Empresa &addClientes(Cliente);
    Empresa &addFuncionarios(Funcionario);
    void printClientes();
    void printFuncionarios();
    float calcularFolhaDePagamento();

private:
    NoC *iniC = nullptr;
    NoF *iniF = nullptr;
};

#endif