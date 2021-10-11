#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <fstream>                                              
using std::ofstream, std::ifstream;
#include <iostream>                                             
using std::ostream, std::endl;
#include <list>                                                
using std::list;
#include "Data.h"                                             
#include "Exception.h"                                        
#include "../Conta/Conta.h"                                     
#include "../Conta/Corrente.h"                                  
#include "../Conta/Limite.h"                                    
#include "../Conta/Poupanca.h"                                  
#include "../Pessoa/Fisica.h"                                   
#include "../Pessoa/Juridica.h"                                 

class Controlador{
public:
    Controlador() {}
    void getData(list <Data<Conta*>> *, list <PessoaFisica> *, list<PessoaJuridica>*, ifstream &);
    void setData(list <Data<Conta*>> &, ofstream &);
};
#endif