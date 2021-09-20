#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

class Empregado
{

public:
    Empregado(string Nome, string Sobrenome, double Salario)
    {
        Salario < 0 ? salario = 0 : salario = Salario;
        nome = Nome;
        sobrenome = Sobrenome;
    }

    void setNome(string Nome)
    {
        nome = Nome;
    }

    string getNome()
    {
        return nome;
    }

    void setSobrenome(string Sobrenome)
    {
        sobrenome = Sobrenome;
    }

    string getSobrenome()
    {
        return sobrenome;
    }

    void setSalario(double Salario)
    {
        Salario < 0 ? salario = 0 : salario = Salario;
    }

    double getSalario()
    {
        return salario;
    }

private:
    string nome, sobrenome;
    double salario;
};

int main()
{
    Empregado empregado_1("Rc", "s", -252), empregado_2("Victor", "Oliveira", 2000);

    empregado_1.setNome("Rennyson");
    empregado_1.setSobrenome("Cavalcante");
    empregado_1.setSalario(5000);

    cout << "Nome do Primeiro Empregado: " << empregado_1.getNome() << ", Sobrenome: " << empregado_1.getSobrenome() << ", Salario: " << empregado_1.getSalario() << endl;
    empregado_2.setNome("Victor");
    empregado_2.setSobrenome("Oliveira");
    empregado_2.setSalario(6000);

    cout << "Nome do Segundo Empregado: " << empregado_2.getNome() << ", Sobrenome: " << empregado_2.getSobrenome() << ", Salario: " << empregado_2.getSalario() << endl;

    empregado_1.setSalario(empregado_1.getSalario() + (empregado_1.getSalario() / 10));
    cout << "\nNome: " << empregado_1.getNome() << ", Sobrenome: " << empregado_1.getSobrenome() << ", Salario: " << empregado_1.getSalario() << endl;
    empregado_2.setSalario(empregado_2.getSalario() + (empregado_2.getSalario() / 10));
    cout << "Nome: " << empregado_2.getNome() << ", Sobrenome: " << empregado_2.getSobrenome() << ", Salario: " << empregado_2.getSalario() << endl;

    return 0;
}