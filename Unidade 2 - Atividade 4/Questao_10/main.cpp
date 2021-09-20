#include <iostream>
#include "Cliente.h"
using std::cout, std::endl;

int main()
{
    Cliente cliente;
    cliente.setNome("Rennyson");
    cliente.setCPF("321.999.444-25");
    cliente.setEndereco("Rua IFPB, 55, Campina Grande");
    cliente.setTelefone("(83)9 9811-5559");

    cout << cliente << endl;

    return 0;
}