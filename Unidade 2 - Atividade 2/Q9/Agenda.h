#ifndef AGENDA_H
#define AGENDA_H
#include <string>
#include "Pessoa.h"
using std::string;

class Agenda{
public:
    void armazenaPessoa(string, int, float);
    void armazenaPessoa(const Pessoa &);

    void removePessoa(string);

    int buscaPessoa(string) const; 
    void imprimePovo() const; 
    void imprimePessoa(int) const; 
private:
    Pessoa pessoas[10];
};

#endif