#ifndef BANCO_H
#define BANCO_H

#include <iostream>                                              
using std::cout, std::endl;
#include <string>                                               
using std::string;
#include <fstream>                                              
using std::ofstream, std::ifstream;
#include <stdexcept>                                            
#include <exception>                                            
using std::runtime_error, std::exception;
#include <list>                                                 
#include <vector>                                               
using std::list, std::vector;
#include "../Pessoa/Juridica.h"                                 
#include "../Pessoa/Fisica.h"                                   
#include "../Conta/Corrente.h"                                  
#include "../Conta/Limite.h"                                    
#include "../Conta/Poupanca.h"                                  
#include "Controlador.h"                                      
#include "Data.h"                                             

class Banco : public PessoaJuridica{
public:
    Banco(string nome, string end, string email, string CNPJ, string is, string rs) : 
        PessoaJuridica(nome, end, email, CNPJ, is, rs, 1) {
            ifstream contas("Banco/data.dat", std::ios::in);
            this->datacontroler.getData(&this->dados, &this->CorrentistasF, &this->CorrentistasJ, contas);
            contas.close();
    }
    
    ~Banco(){
        ofstream contas("Banco/data.dat", std::ios::out);
        this->datacontroler.setData(this->dados, contas);
        contas.close();
    }

    void cadastrar(string, Pessoa *, float, int, int, float=0.0, string="0/0/0");
    void remover(string);
    void consultar(string);
    void atualizar(string, Conta*);
    void listar();
    Data<Conta*>* buscar(string);
    Pessoa* buscarPessoa(string, int);
    inline int getContContas() { return this->dados.size(); }

private:
    int tData = 0;
    list <Data<Conta*>> dados;
    list <PessoaFisica> CorrentistasF;
    list <PessoaJuridica> CorrentistasJ;
    Controlador datacontroler;
};

#endif