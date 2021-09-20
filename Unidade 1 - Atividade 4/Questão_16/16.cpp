#include <iostream>
using std::cout, std::endl;

#include <string>
using std::string;

class Carro
{

public:
    Carro(string nome, int vano)
    {
        marca = nome;
    }

    void setAno(int vano)
    {
        ano = vano;
    }

    int getAno()
    {
        return ano;
    }

    void setMarca(string nome)
    {
        marca = nome;
    }

    string getMarca()
    {
        return marca;
    }

    void displayMessage()
    {
        cout << "Ola, eu sou um carro da marca " << getMarca() << " e meu ano e: " << ano << endl;
    }

private:
    string marca;
    int ano;
};

int main()
{

    Carro meuCarro("Citroen", 2015);

    meuCarro.displayMessage();
    meuCarro.setAno(2012);
    cout << "Ano do Carro: " << meuCarro.getAno() << endl;

    return 0;
}