#ifndef CONTATO_H
#define CONTATO_H

#include <iostream>
using namespace std;

class Contato
{
protected:
    string nome, endereco, dataNascimento, email, estadoCivil;

public:
    Contato(string nome, string end, string data, string email, string estadoC) : nome(nome), endereco(end), dataNascimento(data), email(email), estadoCivil(estadoC) {}
    virtual string getIdentificador(void) = 0;
    string getNome(void) { return this->nome; }
    string getEndereco(void) { return this->endereco; }
    string getNascimento(void) { return this->dataNascimento; }
    string getEmail(void) { return this->email; }
    string getEstadoC(void) { return this->estadoCivil; }
};

#endif