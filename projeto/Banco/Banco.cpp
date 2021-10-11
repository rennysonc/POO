#include "Banco.h"
#include "Exception.h"

void Banco::cadastrar(string num, Pessoa *p, float saldo, int tipoP, int tipoC, float limite, string data){
    
    Pessoa *pes = nullptr;
    try{
      if(tipoP==1){
        pes = this->buscarPessoa((dynamic_cast<PessoaFisica*>(p))->getIdentificador()[3], tipoP);
      }
      if(tipoP==2){
        pes = this->buscarPessoa(dynamic_cast<PessoaJuridica*>(p)->getIdentificador()[3], tipoP);
      }
    }catch(exception &e){
      //Pessoa *pes;
      if(tipoP==1){
        this->CorrentistasF.push_back(*(dynamic_cast<PessoaFisica*>(p)));
        pes = dynamic_cast<Pessoa*>(&this->CorrentistasF.back());
      }
      if(tipoP==2){
        
        this->CorrentistasJ.push_back(*(dynamic_cast<PessoaJuridica*>(p)));
        pes = dynamic_cast<Pessoa*>(&this->CorrentistasJ.back());
      }
    }

    
    Conta *conta = nullptr;
    if(tipoC==0){
      ContaCorrenteComun *contacomun = new ContaCorrenteComun(num, pes, saldo, tipoP);
      conta = contacomun;
    }
    if(tipoC==1){
      ContaCorrenteLimite *contalimite = new ContaCorrenteLimite(num, pes, saldo, tipoP, limite);
      conta = contalimite;
    }
    if(tipoC==2){
      ContaPoupanca *contapoupanca = new ContaPoupanca(num, pes, saldo, data, tipoP);
      conta = contapoupanca;
    }

    
    Data<Conta*> *d = new Data<Conta*>(conta, tData++, true, tipoC);
    this->dados.push_back(*d);

    return;
}

Data<Conta*>* Banco::buscar(string num){
    Data<Conta*> *d = new Data<Conta*>;

    for(auto &item:this->dados){
        if(item.conta->getNum() == num){
            d = &item;
            break;
        }
    }

    if(d->index == -1){ throw ExceptionError("Conta não encontrada"); }
    
    return d;
}

void Banco::remover(string num){
    Data<Conta*> d(*this->buscar(num));

    dados.remove(d);

    return;
}

void Banco::consultar(string num){
    Data<Conta*> d(*this->buscar(num));

    cout << (d.conta->getNum())
         << (d.conta->getSaldo())
         << endl;
    d.conta->getPessoa()->imprimir();

    return;
}

void Banco::atualizar(string num, Conta *c){
    Data<Conta*> d(*this->buscar(num));
    d.conta = c;
}

void Banco::listar(){
    
    Pessoa *p;
    cout << "Dados" << endl;
    for(auto &item:this->dados){
        item.conta->extrato();
    }
}

Pessoa* Banco::buscarPessoa(string Ident, int tp){
  bool controle = false;
  if(tp==1){
    
    for(auto &pessoa:this->CorrentistasF){
      if(pessoa.getIdentificador()[3]==Ident){
        return dynamic_cast<Pessoa*>(&pessoa);
      }
    }
  }
  if(tp==0){
    
    for(auto &p:this->CorrentistasJ){
      if(p.getIdentificador()[3]==Ident){
        return dynamic_cast<Pessoa*>(&p);
      }
    }
  }
  throw ExceptionError("Pessoa não encontrada");
  return nullptr;
}