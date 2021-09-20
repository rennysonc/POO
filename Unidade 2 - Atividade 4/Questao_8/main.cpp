#include <iostream>
#include "PessoaFisica.h"
#include "PessoaJuridica.h"
using std::cout, std::endl;

int main()
{
    Pessoa pessoa_1;
    PessoaFisica pessoa_fisica1;
    PessoaJuridica pessoa_juridica1;
    cout << "-----|Dados Informados sobre a pessoa |-----" << endl;
    pessoa_1.setNome("Rennyson");
    cout << pessoa_1 << endl;
    cout << "\n-----|Dados Informados sobre a Pessoa Fisica |-----" << endl;
    pessoa_fisica1.setNome("Victor");
    pessoa_fisica1.setCPF("111.222.333-99");
    cout << pessoa_fisica1 << " - " << pessoa_fisica1.getCPF() << endl;
    cout << "\n-----|Dados Informados sobre a Pessoa Juridica|-----" << endl;
    pessoa_juridica1.setNomeFantasia("Joao");
    pessoa_juridica1.setCNPJ("555.321.416-00");
    pessoa_juridica1.setRazaoSocial("Joao Fantasias");
    cout << pessoa_juridica1 << " - " << pessoa_juridica1.getCNPJ() << " - " << pessoa_juridica1.getRazaoSocial() << endl;
    return 0;
}