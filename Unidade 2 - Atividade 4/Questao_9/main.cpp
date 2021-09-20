#include <iostream>
#include "Funcionario.h"
using std::cout, std::endl;

int main()
{
    Funcionario funcionario;
    funcionario.setNome("Rennyson");
    funcionario.setCPF("111.321.432-99");
    funcionario.setMatricula(532);
    funcionario.setCargaHoraria(40);
    funcionario.setHorasTrabalhadas(8);
    funcionario.setSalario(30000.00);

    cout << funcionario << " | CPF: " << funcionario.getCPF() << endl;

    return 0;
}