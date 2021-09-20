#include <iostream>
using std::cout, std::endl;

class agente_2banco{
public:

    agente_2banco(double SaldoI){
        SaldoI < 0 ? saldo = 0 : saldo = SaldoI;
    }

    bool creditar(double valor){
        if(valor > 0){saldo += valor; return true;}
        else{return false;}
    }

    bool debitar(double valor){
        if(valor > saldo){
            cout << "Valor acima do permitido!" << endl;
            return false;
        } else if(valor>0){
            saldo -= valor;
            return true;
        }
        return false;
    }

    double getSaldo(){
        return saldo;
    }

private:
    double saldo;
};

int main() {
    agente_2banco agente_1(5000.0), agente_2(-100);
    agente_1.creditar(6000);
    agente_1.debitar(7050.15);
    agente_1.debitar(10250.90);
    cout << "Saldo atual: " << agente_1.getSaldo() << endl;
    
    agente_2.creditar(500.50);
    agente_2.debitar(450.45);
    cout << "Saldo atual: " << agente_2.getSaldo() << endl;
    return 0;
}