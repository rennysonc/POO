#ifndef AGENDA_H
#define AGENDA_H

#include <iostream>
#include "Contato.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
using namespace std;

class Agenda
{
private:
    int contador;
    Contato *contatos[];

public:
    Agenda(void) : contador(0) {}
    void adicionar(Contato &contato);
    void mostrarContatos(void);
    void pesquisar(string idenficador);
    void remover(string identificador);
};

void Agenda::adicionar(Contato &contato)
{
    contatos[contador++] = &contato;
}

void Agenda::mostrarContatos(void)
{
    for (int i = 0; i < contador; i++)
    {
        cout << "Contato " << i << endl;
        cout << contatos[i]->getNome() << endl;
        cout << contatos[i]->getEndereco() << endl;
        cout << contatos[i]->getNascimento() << endl;
        cout << contatos[i]->getEmail() << endl;
        cout << contatos[i]->getEstadoC() << endl;
        cout << contatos[i]->getIdentificador() << endl
             << endl;
    }
}

void Agenda::pesquisar(string identificador)
{
    for (int i = 0; i < contador; i++)
    {
        if (contatos[i]->getNome() == identificador || contatos[i]->getIdentificador() == identificador)
            cout << contatos[i]->getNome() << endl;
        cout << contatos[i]->getEndereco() << endl;
        cout << contatos[i]->getNascimento() << endl;
        cout << contatos[i]->getEmail() << endl;
        cout << contatos[i]->getEstadoC() << endl;
        cout << contatos[i]->getIdentificador() << endl
             << endl;
        return;
    }
    cout << "Contato nao encontrado" << endl;
}

void Agenda::remover(string identificador)
{
    for (int i = 0; i < contador; i++)
    {
        if (contatos[i]->getNome() == identificador || contatos[i]->getIdentificador() == identificador)
        {
            delete contatos[i];
            contador--;
            return;
        }
    }
}

#endif