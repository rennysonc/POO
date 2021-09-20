#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(void) {
  string input;
  
  getline(cin, input);
  cout << "Digite a entrada: " << input << endl;

  auto inputSize {input.length()};
  cout << "Tamanho: " << inputSize << endl;
  
  cout.width(inputSize * 2);
  cout << input << endl;
  
  return 0;
}