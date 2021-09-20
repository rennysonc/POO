#include <iostream>
#include "ImovelNovo.h"
#include "ImovelVelho.h"
using std::cout, std::endl;

int main()
{
    Imovel imovel;
    ImovelNovo INovo;
    ImovelVelho IVelho;

    cout << "-----| Referência do Imovel |-----" << endl;
    imovel.setEndereco("Rua IFPB, 11, Campina Grande");
    imovel.setPreco(50000);
    cout << "Endereco: " << imovel.getEndereco() << " \tPreco: " << imovel.getPreco() << endl;

    cout << "\n-----| Referência do Imovel Novo |-----" << endl;
    INovo.setEndereco("Rua IFPB 2, 22, Campina Grande");
    INovo.setPreco(50000);
    INovo.setAdicional(2000);
    cout << "Endereco: " << INovo.getEndereco() << " \tPreco: " << INovo.getPreco() << endl;

    cout << "\n-----| Referência do Imovel Velho |-----" << endl;
    IVelho.setEndereco("Rua IFPB 3, 33, Campina Grande");
    IVelho.setPreco(50000);
    IVelho.setDesconto(2000);
    cout << "Endereco: " << IVelho.getEndereco() << " \tPreco: " << IVelho.getPreco() << endl;
    IVelho.setDesconto(51000);
    cout << "Endereco: " << IVelho.getEndereco() << " \tPreco: " << IVelho.getPreco() << endl;

    return 0;
}