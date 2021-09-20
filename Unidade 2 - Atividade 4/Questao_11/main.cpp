#include <iostream>
#include "Empresa.h"
using std::cout, std::endl;

int main()
{
    Cliente c1, c2, c3;
    c1.setNome("Cliente 1");
    c1.setCPF("243.959.491-83");
    c1.setEndereco("Rua IFPB, 839, Aleatoria");
    c1.setTelefone("(83)9 8383-8383");

    c2.setNome("Cliente 2");
    c2.setCPF("243.959.491-98");
    c2.setEndereco("Rua IFPB, 838, Aleatoria");
    c2.setTelefone("(83)9 8383-8398");

    c3.setNome("Cliente 3");
    c3.setCPF("243.959.491-97");
    c3.setEndereco("Rua IFPB, 837, Aleatoria");
    c3.setTelefone("(83)9 8383-8397");

    Funcionario f1, f2, f3;
    f1.setNome("Funcionario 1");
    f1.setCPF("243.959.491-96");
    f1.setSalario(5000);
    f1.setMatricula(1);
    f1.setCargaHoraria(40);
    f1.setHorasTrabalhadas(40);

    f2.setNome("Funcionario 2");
    f2.setCPF("243.959.491-95");
    f2.setSalario(6000);
    f2.setMatricula(2);
    f2.setCargaHoraria(90);
    f2.setHorasTrabalhadas(86);

    f3.setNome("Funcionario 3");
    f3.setCPF("243.959.491-94");
    f3.setSalario(500);
    f3.setMatricula(3);
    f3.setCargaHoraria(20);
    f3.setHorasTrabalhadas(20);

    Empresa empresa;
    empresa.addClientes(c1).addClientes(c2).addClientes(c3);
    empresa.addFuncionarios(f1).addFuncionarios(f2).addFuncionarios(f3);

    cout << "Clientes:" << endl;
    empresa.printClientes();
    cout << "Funcionarios:" << endl;
    empresa.printFuncionarios();

    cout << "Folha de pagamentos: " << empresa.calcularFolhaDePagamento() << endl;

    return 0;
}