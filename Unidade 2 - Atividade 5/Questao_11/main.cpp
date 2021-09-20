#include <iostream>
#include "Agenda.h"
#include "PessoaFisica.h"
#include "PessoaJuridica.h"

using namespace std;

int main(void)
{
    PessoaFisica *pf = new PessoaFisica{"Rennyson", "Rua do IFPB", "02/03/1975", "rennyson@ifpb.com", "Solteiro", "111.111.111.01"};
    PessoaJuridica *pj = new PessoaJuridica{"Cavalcante", "Rua do IFPB", "09/08/2002", "Cavalcante@cavalcante.com", "Casado", "99.999.999/9999-99", "12345678-90", "Empresa IFPB Fantasma"};
    Agenda *a = new Agenda();
    a->adicionar(*pf);
    a->adicionar(*pj);
    a->pesquisar("111.111.111.01");
    a->mostrarContatos();
    a->remover("99.999.999/9999-99");
    a->mostrarContatos();

    return 0;
}