#include <string>
#include "Gato.h"
using std::string;

Gato::Gato() : Animal() {}
Gato::Gato(string nome) : Animal(nome) {}

string Gato::mia()
{
    return "Miau, Sai Daqui!!!";
}