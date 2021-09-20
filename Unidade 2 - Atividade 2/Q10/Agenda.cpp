#include <iostream>
#include <string>
#include "Agenda.h"
#include "Pessoa.h"
using std::cout, std::endl, std::string;

Agenda::Agenda(int tPessoas = 1){
    if(tPessoas>0){
        this->qtdePessoas = tPessoas;
        this->pessoas = new Pessoa[tPessoas];
    } else {
        this->qtdePessoas = 0;
        this->pessoas = nullptr;
    }
}

Agenda::~Agenda(){
    if(this->pessoas){
        delete [] this->pessoas;
    }
}

void Agenda::armazenaPessoa(string nome, int idade, float altura){
    Pessoa pessoa_1(nome, idade, altura);
    this->armazenaPessoa(pessoa_1);
}

void Agenda::armazenaPessoa(const Pessoa &p){
    static int pos = 0;
    this->pessoas[pos] = p;
    pos ++;
}

void Agenda::removePessoa(string nome){
    bool ok = false;
    int pos;
    for(int i=0; i<this->qtdePessoas; i++){
        if(!ok){
            if(this->pessoas[i].getNome() == nome) { ok=true; pos = i;}
        } else {
            this->pessoas[pos] = this->pessoas[i];
            pos++;
        }
    }
}

int Agenda::buscaPessoa(string nome) const {
    int pos = 0;
    for(int i=0; i<this->qtdePessoas; i++){
        if(this->pessoas[i].getNome() == nome){ break; }
        pos++;
    }
    return ++pos;
}

void Agenda::imprimePessoa(int i) const {
    cout << "Nome: " << this->pessoas[--i].getNome() << " | Idade: " << this->pessoas[i].getIdade() << " | Altura: " << this->pessoas[i].getAltura() << endl;
}

void Agenda::imprimePovo() const {
    for(int i=0; i<this->qtdePessoas; i++){
        if(this->pessoas[i].getNome() != string(""))
            cout << "Nome: " << this->pessoas[i].getNome() << " | Idade: " << this->pessoas[i].getIdade() << " | Altura: " << this->pessoas[i].getAltura() << endl;
    }
}