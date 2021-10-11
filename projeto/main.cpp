#include <iostream>                                     
using std::cin, std::cout, std::endl;
#include <iomanip>                                          
using std::setprecision, std::setw, std::fixed;
#include <string>                                       
using std::string;                                  
#include <vector>                                      
using std::vector;
#include <stdexcept>                                    
using std::exception;
#include <exception>                                    
using std::runtime_error;
#include <ctime>                                        
#include<unistd.h>                                     
using std::time_t, std::tm;
#include "Banco/Banco.h"                                
#include "Correntista.h"                               
#include "Gerente.h"                                    
#define sleep1 3000000                                  
#define sleep2 10000                                    
#define sleep3 10000000                                

int entrada(){
    int op0;
    cin >> op0;
    op0--;
    while(true){
        switch(op0){
            case 0:
            case 1:
                return op0;
            case -1:
                return 2;
            default:{
                cout << "Opção Invalida! Digite novamente: ";
                cin >> op0;
            }
        }
    }
}

int login(){
    const string senha("senha"), login("login"); 
    cout << "Digite o login e a senha: "
         << "Digite senha como 0 e login como 0 para voltar" << endl;
    string s,l;
    while(true){
        cout << "login: ";
        cin >> l;
        cout << "senha: ";
        cin >> s;
        if(l==login && s==senha){
            system ("clear");
            return 0;
        } else if(l=="0" && s=="0"){
            system ("clear");
            return 1;
        } else {
            cout << "Login ou Senha invalidos!" << endl;
        }
    }
}

string dataAtual(){
    time_t t = std::time(0);
    tm *now = std::localtime(&t);
    return to_string((now->tm_mday)) + "/" + to_string((now->tm_mon + 1)) + "/" + to_string((now->tm_year + 1900));
}

string replace(string word, string target, string replacement){
    
    int len, loop=0;
    string nword="", let;
    len=word.length();
    len--;
    while(loop<=len){
        let=word.substr(loop, 1);
        if(let==target){
            nword=nword+replacement;
        }else{
            nword=nword+let;
        }
        loop++;
    }
    return nword;
}

int main(){
    
    Banco banco("Banco C++ Company", "Rua do Banco", "banco@company.com.br", "999.999.999/9999-99", "9999999999", "9999999999");
    
    while(true){
        system("clear");
        int op0;
        cout << "Bem-vindo ao Banco C++ Company" << endl
             << "Escolha as opções abaixo: " << endl
             << "1 - Gerente" << endl
             << "2 - Correntista" << endl
             << "0 - Sair" << endl
             << "Digite a sua opção: ";
        
        op0 = entrada();
        if(op0==2){ break; }

        system("clear");

        if(op0==0){
            if (login()==0){
                Gerente gerente(banco);
                while(true){
                    system ("clear");
                    cout << "Selecione a função desejada: " << endl
                         << "1 - Abrir conta" << endl
                         << "2 - Consultar conta" << endl
                         << "3 - Atualizar conta" << endl
                         << "4 - Fechar conta" << endl
                         << "0 - Sair" << endl;
                    int op1;
                    cout << "Digite sua opção: ";
                    cin >> op1;
                    if(op1==0){break;}
                    else if(op1==1){
                        vector<string> info;
                        string temp;
                        float limite;
                        int tp, tc;
                        cout << "Preencha com os dados abaixo: " << endl;
                        cout << "0 - Voltar " << endl;
                        while(true){
                            cout << "1 - Pessoa Fisica ou 2 - Pessoa Juridica: ";
                            cin >> tp;
                            if(tp == 0) {break;} else {tp--;}
                            if(tp==0){
                                cout << "Informações Pessoais:" << endl;
                                cout << "Nome: ";
                                while(std::getline(cin, temp)){ if(temp!=""){break;}}
                                info.push_back(replace(temp, " ", "_"));
                                cout << "Endereço: ";
                                while(std::getline(cin, temp)){ if(temp!=""){break;}}
                                info.push_back(replace(temp, " ", "_"));
                                cout << "Email: ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "CPF: ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "Data de Nascimento (dd/mm/aaaa): ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "Estado Civil: ";
                                cin >> temp;
                                info.push_back(temp);
                                break;
                            } else if(tp==1){
                                cout << "Informações Pessoais:" << endl;
                                cout << "Nome: ";
                                while(std::getline(cin, temp)){ if(temp!=""){break;}}
                                info.push_back(replace(temp, " ", "_"));
                                cout << "Endereço: ";
                                while(std::getline(cin, temp)){ if(temp!=""){break;}}
                                info.push_back(replace(temp, " ", "_"));
                                cout << "Email: ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "CNPJ: ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "Inscrição Estadual: ";
                                cin >> temp;
                                info.push_back(temp);
                                cout << "Razão Social: ";
                                cin >> temp;
                                info.push_back(temp);
                                break;
                            } else {
                                cout << "Opção Invalida" << endl;
                            }
                        }
                        system ("clear");
                        cout << "Informações de Conta: " << endl;
                        cout << "0 - Voltar" << endl;
                        cout << "1 - Conta Corrente Comum" << endl;
                        cout << "2 - Conta Corrente Com Limite" << endl;
                        cout << "3 - Conta Poupança" << endl;
                        while(true){
                            cin >> tc;
                            if(tc==0){ info.clear(); break; }
                            else if(tc==1){
                                gerente.abrir(info, tp+1, tc-1);
                                break;
                            }
                            else if(tc==2){
                                cout << "Informe o valor do limite da conta: ";
                                cin >> limite;
                                gerente.abrir(info, tp+1, tc-1, limite);
                                break;
                            }
                            else if(tc==3){
                                gerente.abrir(info, tp+1, tc-1, 0.0, dataAtual());
                                break;
                            }
                            else{
                                cout << "Opção Invalida!" << endl;
                            }
                        }
                        if(tc!=0){
                            cout << "Conta criada com sucesso." << endl;
                            usleep(sleep3);
                        }
                    } else if(op1== 2){
                        string num;
                        system ("clear");
                        cout <<  "Digite 0 para voltar." << endl;
                        cout << "Informe o número da conta: ";
                        cin >> num;
                        try{
                            banco.buscar(num);
                        } catch(runtime_error &e){
                            cout << e.what() << endl;
                        }
                        if(num=="0"){ break; }
                        gerente.consultar(num);
                        usleep(sleep3);
                    
                    } else if(op1== 3){
                        int opA;
                        string conta, info;
                        system ("clear");
                        cout << "Digite o número da conta: ";
                        cin >> conta;
                        try{
                            banco.buscar(conta);
                        } catch(runtime_error &e){
                            cout << e.what() << endl;
                        }
                        cout << "Escolha a informação a ser alterada: " << endl;
                        cout << "1 - Endereço" << endl;
                        cout << "2 - Email" << endl;
                        cout << "3 - Estado Civil" << endl;
                        cout << "4 - Limite da Conta" << endl;
                        cout << "0 - Voltar" << endl;
                        while(true){
                            cin >> opA;
                            if(opA == 0){break;}
                            else if(opA == 1){
                                cout << "Digite o novo endereço: ";
                                cin >> info;
                                info.replace(info.begin(), info.end(), " ", "_");
                                break;
                            }
                            else if(opA == 2){
                                cout << "Digite o novo e-mail: ";
                                cin >> info;
                                break;
                            }
                            else if(opA == 3){
                                cout << "Digite o novo estado civil: ";
                                cin >> info;
                                break;
                            }
                            else if(opA == 4){
                                cout << "Digite o novo limie da conta: ";
                                cin >> info;
                                break;
                            }
                            else{
                                cout << "Opção invalida!";
                                usleep(sleep2);
                            }
                        }
                        gerente.atualizar(conta, info, opA);
                        usleep(sleep1);
                    } else if(op1==4){
                        string conta;
                        cout << "Digite 0 para voltar." << endl;
                        cout << "Digite o número da conta: ";
                        cin >> conta;
                        try{
                            banco.buscar(conta);
                        } catch(runtime_error &e){
                            cout << e.what() << endl;
                        }
                        gerente.fechar(conta);
                        cout << "Conta fechada com sucesso" << endl;
                        usleep(sleep1);
                    } else {
                        cout << "Opção invalida" << endl;
                        usleep(sleep2);
                    } 
                } 
            } 
        } 

        if(op0==1){
            string num;
            cout << "Informe o número da conta: ";
            cin >> num;
            try{
                banco.buscar(num);
            } catch(runtime_error &e){
                cout << e.what() << endl;
            }
            Correntista correntista(num, banco);
            while(true){
                system ("clear");
                int opC;
                cout << "Digite a opção desejada: " << endl
                    << "1 - Depositar" << endl
                    << "2 - Retirar" << endl
                    << "3 - Transferir" << endl
                    << "4 - Ver Saldo" << endl
                    << "5 - Extrato" << endl
                    << "0 - Voltar" << endl;
                cin >> opC;
                if(opC==0){ break; }
                system ("clear");
                float valor;
                if(opC==1){
                    cout << "Digite 0 para voltar." << endl;
                    cout << "Digite o valor a ser depositado: ";
                    cin >> valor;
                    if(valor == 0) { break; }
                    correntista.depositar(valor);
                    cout << "Depositado com sucesso!" << endl;
                    usleep(sleep1);
                }
                else if(opC==2){
                        cout << "Digite 0 para voltar." << endl;
                        cout << "Digite o valor a ser retirado: ";
                        cin >> valor;
                        if(valor == 0){ break; }
                        try{
                            cout << fixed;
                            cout << "Valor retirado: " << setprecision(2) << (correntista.retirar(valor)) << ", com sucesos!" << endl; 
                        } catch(exception &e){
                            cout << "Valor indisponível." << endl;
                        }
                    usleep(sleep1);
                    }
                else if(opC==3){
                    string num;
                    cout << "Digite 0 para voltar." << endl;
                    cout << "Digite o número da conta a qual deseja transferir: ";
                    cin >> num;
                    cout << "Digite o valor a ser transferido: ";
                    cin >> valor;
                    try{
                        correntista.tranferir(valor, num);
                        cout << "Transferido com sucesso." << endl;
                    } catch(exception &e){
                        cout << "Não foi possível concluir a transferencia!" << endl;
                    }
                    usleep(sleep1);
                }
                else if(opC==4){
                    correntista.saldo();
                    usleep(sleep1);
                }
                else if(opC==5){
                    correntista.extrato();
                    usleep(sleep1);
                } else {
                    cout << "Opção não disponível." << endl;
                    usleep(sleep2);
                }
            } 
        } 
    } 


    system ("clear");
    cout << "Obrigado por utilizar o Banco C++ Company!" << endl;
    cout << "Desenvolvido por: Rennyson Cavalcante" << endl;
    
    return 0;
}