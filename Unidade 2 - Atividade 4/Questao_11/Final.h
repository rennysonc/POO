#ifndef FINAL_H
#define FINAL_H
#include "..\Questao_09\Funcionario.h"
#include "..\Questao_10\Cliente.h"

class FinalF
{
public:
    FinalF() : prox(nullptr), ant(nullptr) {}
    FinalF(Funcionario &funcionario) : funcionario(funcionario), prox(nullptr), ant(nullptr) {}
    FinalF *prox, *ant;
    Funcionario funcionario;
};

class FinalC
{
public:
    FinalC() : prox(nullptr), ant(nullptr) {}
    FinalC(Cliente &cliente) : cliente(cliente), prox(nullptr), ant(nullptr) {}
    FinalC *prox, *ant;
    Cliente cliente;
};

#endif