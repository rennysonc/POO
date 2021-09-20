#include <iostream>
#include <string>
#include "Pessoa.h"
using std::cout, std::endl, std::string;

int main(){
    Pessoa pessoa_1("Rennyson");
    pessoa_1.setAltura(1.65).setIdade(19);
    cout << "Nome: " << pessoa_1.getNome() << " - Idade: " << pessoa_1.getIdade() << " - Altura: " << pessoa_1.getAltura() << endl; 
    }