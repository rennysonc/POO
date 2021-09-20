#include <iostream>
using std::cout, std::endl;

class Data{
public:

    Data(int Dia, int Mes, int Ano){
        Mes >=1 && Mes <=12 ? mes = Mes : mes = 1;
        dia = Dia; ano=Ano;
    }

    void setDia(int Dia){
        dia = Dia;
    }
    
    int getDia(){
        return dia;
    }

    void setMes(int Mes){
        Mes >=1 && Mes <=12 ? mes = Mes : mes = 1;
    }
    
    int getMes(){
        return mes;
    }
    
    void setAno(int Ano){
        ano = Ano;
    }
    
    int getAno(){
        return ano;
    }

    void DisplayData(){
        cout << dia << "/" << mes << "/" << ano << endl;
    }

private:
    int dia, mes, ano;
};

int main() {
    Data data(2,8,2021);
    data.DisplayData();

    data.setDia(2);
    data.setMes(8);
    data.setAno(2021);

    cout << "Dia: " << data.getDia() << endl;
    cout << "Mes: " << data.getMes() << endl;
    cout << "Ano: " << data.getAno() << endl;

    return 0;
}