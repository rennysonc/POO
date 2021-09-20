#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void saveTypeSizes(void);

void printTypeSizes(void);

int main(void) {
  saveTypeSizes();

  printTypeSizes();

  return 0;
}

void saveTypeSizes(void) {
  ofstream fout("Coluna.dat", ios::out);

  if (!fout)
    (cout << "Erro em salvar arquivo." << endl, exit(1));
  
  fout << "char | " << sizeof(char) << endl;
  fout << "unsigned char | " << sizeof(unsigned char) << endl;
  fout << "short int | " << sizeof(short int) << endl;
  fout << "int | " << sizeof(int) << endl;
  fout << "unsigned int | " << sizeof(unsigned int) << endl;
  fout << "long int | " << sizeof(long int) << endl;
  fout << "long long int | " << sizeof(long long int) << endl;
  fout << "float | " << sizeof(float) << endl;
  fout << "double | " << sizeof(double) << endl;
  fout << "long double | " << sizeof(long double) << endl;

  fout.close();

  return;
}

void printTypeSizes(void) {
  ifstream fin("Coluna.dat", ios::in);

  if (!fin)
    (cout << "Erro em carregar arquivo." << endl, exit(1));
  
  string type;
  cout << right;
  while (getline(fin, type)) {
    cout << setw(18) << type << endl;
  }

  fin.close();

  return;
}